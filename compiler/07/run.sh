yacc -d oh.y
lex oh.l
cc -w y.tab.c lex.yy.c print.c semantic.c semantic_print.c main.c code.c -o parser

yacc -d interp.y
lex interp.l
cc -w y.tab.c lex.yy.c interp.c lib.c -o interp