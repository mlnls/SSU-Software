// Client Code

#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/select.h>

void error_proc(); // 에러 처리

int main(int argc, char **argv)
{
    int clntSd;
    struct sockaddr_in clntAddr;
    int recvByte;
    char rBuff[BUFSIZ];
    fd_set read_fds;

    if (argc != 3)
    {
        printf("Usage: %s [IP Address] [Port]\n", argv[0]);
        exit(1);
    }

	// 소켓 생성
    clntSd = socket(AF_INET, SOCK_STREAM, 0);
    if (clntSd == -1)
        error_proc();
    printf("==== client program =====\n");

    memset(&clntAddr, 0, sizeof(clntAddr)); // 클라이언트 주소 구조체 초기화
    clntAddr.sin_family = AF_INET;
    clntAddr.sin_addr.s_addr = inet_addr(argv[1]);
    clntAddr.sin_port = htons(atoi(argv[2]));

	// 서버에 연결 시도
    if (connect(clntSd, (struct sockaddr *)&clntAddr,
                sizeof(clntAddr)) == -1)
    {
        close(clntSd);
        error_proc();
    }

	while (1)
	{
		FD_ZERO(&read_fds);
		FD_SET(clntSd, &read_fds);
		FD_SET(0, &read_fds);

		if (select(clntSd + 1, &read_fds, NULL, NULL, NULL) < 0)
		{
			printf("Select error\n");
			break;
		}

		// 클라이언트 소켓에서 이벤트 발생 시
		if (FD_ISSET(clntSd, &read_fds))
		{
			// 서버로부터 데이터 수신
			recvByte = read(clntSd, rBuff, BUFSIZ - 1);

			// 연결이 종료된 경우
			if (recvByte <= 0)
			{
				printf("Server disconnected.\n");
				close(clntSd);
				exit(1);
			}
			rBuff[recvByte] = '\0';
			printf("Server: %s", rBuff);
		}

		// 표준 입력에서 이벤트 발생 시
		else if (FD_ISSET(0, &read_fds))
		{
			char wBuff[BUFSIZ];
			fgets(wBuff, BUFSIZ - 1, stdin);
			write(clntSd, wBuff, strlen(wBuff));

			// 클라이언트가 "END"를 입력하면 종료
			if (strcmp(wBuff, "END\n") == 0)
			{
				printf("END ^^\n", wBuff);
				break;
			}
		}
	}
    
	// 클라이언트 소켓 종료
    close(clntSd);
    return 0;
}

// 에러 처리 함수
void error_proc()
{
    fprintf(stderr, "Error: %s\n", strerror(errno));
    exit(errno);
}
