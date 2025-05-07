#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define NUMBER 256
#define PLUS 257
#define STAR 258
#define LPAREN 259
#define RPAREN 260
#define END 261
#define EXPRESSION 0
#define TERM 1
#define FACTOR 2
#define ACC 999

// 실수 처리를 위한 구조체 정의
struct TT {
    union {
        int num1;
        float num2;
    } value;
    bool is_float;
};

// ACTION[] 테이블
int action[12][6] = {
    {5,0,0,4,0,0}, {0,6,0,0,0,ACC}, {0,-2,7,0,-2,-2},
    {0,-4,-4,0,-4,-4}, {5,0,0,4,0,0}, {0,-6,-6,0,-6,-6},
    {5,0,0,4,0,0}, {5,0,0,4,0,0}, {0,6,0,0,11,0},
    {0,-1,7,0,-1,-1}, {0,-3,-3,0,-3,-3},{0,-5,-5,0,-5,-5}
};

// GOTO[] 테이블
int go_to[12][3] = {
    {1,2,3}, {0,0,0}, {0,0,0}, {0,0,0}, {8,2,3}, {0,0,0},
    {0,9,3}, {0,0,10}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}
};

char yytext[32];
int stack[1000];

// 수식의 값을 계산하기 위한 스택
struct TT value[1000];
struct TT yylval;

int top = -1;
int sym;

// 기존 약속된 문법에 맞춤
int prod_left[7] = {0, EXPRESSION, EXPRESSION, TERM, TERM, FACTOR, FACTOR};
int prod_length[7] = {0,3,1,3,1,3,1};

void push(int);
void shift(int);
void reduce(int);

// 혼합 연산시 경고문 출력
void warning();

int yyparse();
int yylex();
void lex_error();
void yyerror();

int main () {
    yyparse();
    return 0;
}

int yyparse() {
    int i;
    stack[++top] = 0;
    sym = yylex();
    
    do {
        i = action[stack[top]][sym-256];
        if (i == ACC) {
            if (value[top].is_float) // 실수인지 아닌지 확인하기
                printf("결과: %f\n", value[top].value.num2);
            else 
                printf("결과: %d\n", value[top].value.num1);
        } else if (i>0) {
            shift(i);
        } else if (i<0) {
            reduce(-i);
        } else {
            yyerror();
            return 1;
        }
    } while (i!=ACC);
    
    return 0;
}

void push(int i) {
    top++;
    stack[top] = i;
}

void shift(int i) {
    push(i);
    value[top]=yylval;
    sym=yylex();
}

void reduce(int i) {
    int old_top;
    top-=prod_length[i];
    old_top=top;
    push(go_to[stack[old_top]][prod_left[i]]);

    switch(i) {

        // E -> E + T
        case 1: 
            // 두 개의 값중 하나라도 실수라면, 둘 다 확인하고 계산하기
            // value[top].is_float = value[old_top+1].is_float || value[old_top+3].is_float;
            // if (value[top].is_float) { 
            //     value[top].value.num2 = 
            //     (value[old_top+1].is_float ? value[old_top+1].value.num2 : value[old_top+1].value.num1) 
            //     +
            //     (value[old_top+3].is_float ? value[old_top+3].value.num2 : value[old_top+3].value.num1);
            // }
            // else 
            //     value[top].value.num1 = value[old_top+1].value.num1 + value[old_top+3].value.num1;

            if (!value[old_top + 1].is_float && !value[old_top + 3].is_float) {
                value[top].is_float = false;
                value[top].value.num1 = value[old_top + 1].value.num1 + value[old_top + 3].value.num1;
            }else if(!value[old_top + 1].is_float && value[old_top + 3].is_float) {
                value[top].is_float = true;
                value[top].value.num2 = value[old_top + 1].value.num1 + value[old_top + 3].value.num2;
                warning();
            }else if(value[old_top + 1].is_float && !value[old_top + 3].is_float) {
                value[top].is_float = true;
                value[top].value.num2 = value[old_top + 1].value.num2 + value[old_top + 3].value.num1;
                warning();
            }
            else if(value[old_top + 1].is_float && value[old_top + 3].is_float) {
                value[top].is_float = true;
                value[top].value.num2 = value[old_top + 1].value.num2 + value[old_top + 3].value.num2;
            }
            break;

        // E -> T
        case 2:
            value[top]=value[old_top+1];
            break;

        // T -> T * F
        case 3:
            // 두 개의 값중 하나라도 실수라면, 둘 다 확인하고 계산하기
            // value[top].is_float = value[old_top+1].is_float || value[old_top+3].is_float;
            // if (value[top].is_float) { 
            //     value[top].value.num2 = 
            //     (value[old_top+1].is_float ? value[old_top+1].value.num2 : value[old_top+1].value.num1) 
            //     *
            //     (value[old_top+3].is_float ? value[old_top+3].value.num2 : value[old_top+3].value.num1);
            // }
            // else 
            //     value[top].value.num1 = value[old_top+1].value.num1 * value[old_top+3].value.num1;        

            if (!value[old_top + 1].is_float && !value[old_top + 3].is_float) {
                value[top].is_float = false;
                value[top].value.num1 = value[old_top + 1].value.num1 * value[old_top + 3].value.num1;
            }else if(!value[old_top + 1].is_float && value[old_top + 3].is_float) {
                value[top].is_float = true;
                value[top].value.num2 = value[old_top + 1].value.num1 * value[old_top + 3].value.num2;
                warning();
            }else if(value[old_top + 1].is_float && !value[old_top + 3].is_float) {
                value[top].is_float = true;
                value[top].value.num2 = value[old_top + 1].value.num2 * value[old_top + 3].value.num1;
                warning();
            }
            else if(value[old_top + 1].is_float && value[old_top + 3].is_float) {
                value[top].is_float = true;
                value[top].value.num2 = value[old_top + 1].value.num2 * value[old_top + 3].value.num2;
            }  
            break;

        // T -> F
        case 4:
            value[top]=value[old_top+1];
            break;

        // F -> (E)
        case 5:
            value[top]=value[old_top+2];
            break;

        // F -> n
        case 6:
            value[top]=value[old_top+1];
            break;
        default: 
            yyerror();
            break;
    }
}

void yyerror() {
    printf("syntax error \n");
    exit(1);
}

int yylex() {
    static char ch=' ';
    int i = 0;
    float f = 0.0, tmp = 10.0;

    while (ch == ' ' || ch == '\t') ch = getchar();
    
    if (isdigit(ch)) {
        yylval.is_float = false;
        do {
            if(ch == '.') {
                yylval.is_float = true;
            } else if(yylval.is_float) {
                f += (float)(ch - '0') / tmp;
                tmp *= 10.0;
            } else {
                i = i * 10 + (ch - '0');
            }
            ch = getchar();
        } while(isdigit(ch) || (yylval.is_float == false && ch == '.'));

        if(yylval.is_float) {
            yylval.value.num2 = i + f;
        } else {
            yylval.value.num1 = i;
        }
        return (NUMBER);
    }
    
    else if (ch=='+'){
        ch = getchar();
        return (PLUS);
    }
    else if (ch=='*'){
        ch = getchar();
        return (STAR);
    }
    else if (ch=='('){
        ch = getchar();
        return (LPAREN);
    }
    else if (ch==')'){
        ch = getchar();
        return (RPAREN);
    }
    else if (ch==EOF || ch == '\n'){
        return (END);
    }
    else {
        lex_error();
        return 0;
    }
}

void lex_error() {
    printf("illegal token \n");
    exit(1);
}

void warning() {
    printf("혼합 연산입니다!\n");
}
