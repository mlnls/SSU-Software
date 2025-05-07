#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int num;
enum token { null, number, plus, star, lp, rp, end };
enum token token;
char *expr;  // 입력 수식을 저장할 포인터

void get_token();
int expression();
int term();
int factor();
int error(int i);

int main () {
    // 수식을 입력받을 버퍼
    char input[100];

    // 입력받고 버퍼에 저장
    printf("수식을 입력하세요: ");
    fgets(input, sizeof(input), stdin);

    // 버퍼의 메모리 주소를 expr에 할당
    expr=input;
    get_token();

    int result=expression();
    
    if(token!=end) error(3);
    else printf("%d \n", result);

    return 0;
}

void get_token(){
    // 공백 건너뛰기
    while (*expr == ' ' || *expr == '\t') expr++;

    // 숫자일때
    if (*expr >= '0' && *expr <= '9') {
        num = 0;

        // 십의 자리 이상부터 처리
        while (isdigit(*expr)) {
            num = num * 10 + (*expr - '0');
            expr++;
        }
        token = number;
    } 

    // 기호일때
    else {
        switch (*expr) {
            case '+': token = plus; break;
            case '*': token = star; break;
            case '(': token = lp; break;
            case ')': token = rp; break;
            case '\0': token = end; return;
            case '\n': token = end; return;
            default: error(3);
        }
        expr++;
    }
}

int expression(){
    int result;
    result=term();

    while (token==plus){
        get_token();
        result=result+term();
    }

    return (result);
}

int term(){
    int result;
    result=factor();

    while (token==star){
        get_token();
        result=result*factor();
    }

    return (result);
}

int factor(){
    int result;

    if(token==number){
        result=num;
        get_token();
    }

    else if(token==lp){
        get_token();
        result=expression();

        if(token==rp) get_token();
        else error(2);
    }

    else error(1);

    return (result);
}

int error(int i){
    switch(i) {
        case 1 : printf("확인할 수 없는 문자입니다.\n"); break;
        case 2 : printf("괄호가 닫히지 않았습니다.\n"); break;
        case 3 : printf("계산할 수 없는 기호입니다.\n"); break;
    }

    exit(1);
}
