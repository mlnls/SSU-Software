yacc -d oh.y
lex oh.l
cc -w y.tab.c lex.yy.c print.c -o parser