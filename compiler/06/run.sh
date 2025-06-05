yacc -d oh.y
lex oh.l
cc -w y.tab.c lex.yy.c print.c semantic.c semantic_print.c main.c -o parser