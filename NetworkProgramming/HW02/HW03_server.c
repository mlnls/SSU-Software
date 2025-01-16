// Server Code

#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/select.h>
#include <signal.h>
#include <time.h>

#define MAX_CLIENTS 10 // 최대 클라이언트 수

void error_proc(); // 에러 처리
void sigint_handler(int signum); // 시그널 핸들러 선언

int srvSd;
int clients[MAX_CLIENTS] = {0};

int main(int argc, char **argv)
{
    struct sockaddr_in srvAddr, clntAddr;
    int clntAddrLen, readLen;
    char rBuff[BUFSIZ];
    fd_set read_fds;

    // 포트 번호를 입력하지 않은 경우
    if (argc != 2)
    {
        printf("Usage: %s [port] \n", argv[0]);
        exit(1);
    }
    printf("Server start...\n");

    // 시그널 핸들러 선언
    signal(SIGINT, sigint_handler);

    // TCP 소켓 생성
    srvSd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (srvSd == -1) // 소켓 생성 실패 시
        error_proc();

    memset(&srvAddr, 0, sizeof(srvAddr)); // 서버 주소 구조체 초기화
    srvAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    srvAddr.sin_family = AF_INET;
    srvAddr.sin_port = htons(atoi(argv[1]));

    // 소켓에 주소 할당
    if (bind(srvSd, (struct sockaddr *)&srvAddr, sizeof(srvAddr)) == -1)
        error_proc();

    // 클라이언트 연결 대기열 설정
    if (listen(srvSd, 2) < 0)
        error_proc();

    FD_ZERO(&read_fds);
    FD_SET(srvSd, &read_fds);
    int maxSd = srvSd;

    while (1)
    {
        fd_set tmp_fds = read_fds;

        int activity = select(maxSd + 1, &tmp_fds, NULL, NULL, NULL);

        // Select() 오류 발생 시
        if (activity < 0)
        {
            printf("Select error\n");
            break;
        }

        //서버 소켓에서 이벤트 발생 시
        if (FD_ISSET(srvSd, &tmp_fds))
        {
            clntAddrLen = sizeof(clntAddr);
            int clntSd = accept(srvSd, (struct sockaddr *)&clntAddr, &clntAddrLen);

            // 클라이언트 연결 수락 실패 시
            if (clntSd == -1)
                error_proc();
            printf("client %s:%d is connected...\n",
                   inet_ntoa(clntAddr.sin_addr),
                   ntohs(clntAddr.sin_port));

            // 클라이언트 배열에서 빈 자리 찾기
            for (int i = 0; i < MAX_CLIENTS; i++)
            {
                // 빈 자리를 찾으면 ?!
                if (clients[i] == 0)
                {
                    clients[i] = clntSd;
                    break;
                }
            }
        
            FD_SET(clntSd, &read_fds);
            if (clntSd > maxSd)
                maxSd = clntSd;
        }

        // 클라이언트 배열 순회
        for (int i = 0; i < MAX_CLIENTS; i++)
        {
            int clntSd = clients[i];

            // 클라이언트 소켓에서 이벤트 발생 시
            if (FD_ISSET(clntSd, &tmp_fds))
            {
                readLen = read(clntSd, rBuff, BUFSIZ - 1);

                // 클라이언트 연결 종료 시
                if (readLen <= 0)
                {
                    printf("Client(%d) disconnected.\n", clntSd);
                    close(clntSd);
                    FD_CLR(clntSd, &read_fds);
                    clients[i] = 0;
                }

                // 클라이언트로부터 메세지를 받은 경우
                else
                {
                    rBuff[readLen] = '\0';
                    printf("Client(%d): %s", clntSd, rBuff);

                    // 서버 종료를 원하는 경우
                    if (strcmp(rBuff, "-1") == 0||strcmp(rBuff, "-1\n") == 0) // 클라이언트가 "-1"을 보내면 서버 종료
                    {
                        printf("Server is shutting down...\n");
                        close(srvSd);

                        // 클라이언트 배열을 순회하며 디스크립터를 비움
                        for (int i = 0; i < MAX_CLIENTS; i++)
                        {
                            if (clients[i] != 0)
                            {
                                close(clients[i]);
                                FD_CLR(clients[i], &read_fds);
                            }
                        }
                        exit(0);
                    }

                    // 계산기를 원하는 경우
                    else if (strstr(rBuff, "cal") != NULL)
                    {
                        int num1, num2, result;
                        char operation;
                        sscanf(rBuff, "cal %d %c %d", &num1, &operation, &num2);

                        // 연산 수행
                        switch (operation)
                        {
                        case '+':
                            result = num1 + num2;
                            break;
                        case '-':
                            result = num1 - num2;
                            break;
                        case '*':
                            result = num1 * num2;
                            break;
                        default:
                            result = 0;
                            break;
                        }
                        sprintf(rBuff, "%d\n", result);
                        write(clntSd, rBuff, strlen(rBuff));
                    }

                    // 현재 시간을 원하는 경우
                    else if (strcmp(rBuff, "time") == 0||strcmp(rBuff, "time\n") == 0)
                    {
                        time_t rawtime;
                        struct tm *timeinfo;
                        time(&rawtime);

                        // 현재 시간을 지역 시간으로 변환
                        timeinfo = localtime(&rawtime);
                        sprintf(rBuff, "%s", asctime(timeinfo));
                        write(clntSd, rBuff, strlen(rBuff));
                    }

                    // 그 외의 경우
                    else
                    {
                        write(clntSd, rBuff, strlen(rBuff));
                    }
                }
            }
        }
    }
    
    // 서버 소켓 종료
    close(srvSd);
    return 0;
}

// 에러 처리 함수
void error_proc()
{
    fprintf(stderr, "Error: %s \n", strerror(errno));
    exit(1);
}

// 시그널 핸들러 함수
void sigint_handler(int signum)
{
    printf("\nSIGINT received. Server is shutting down...\n");

    // 출력 버퍼 지우기
    fflush(stdout);
	close(srvSd);
    exit(0);
}