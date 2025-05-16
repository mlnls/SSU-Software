/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_OH_TAB_H_INCLUDED
# define YY_YY_OH_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    TYPE_IDENTIFIER = 259,         /* TYPE_IDENTIFIER  */
    FLOAT_CONSTANT = 260,          /* FLOAT_CONSTANT  */
    INTEGER_CONSTANT = 261,        /* INTEGER_CONSTANT  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    CHARACTER_CONSTANT = 263,      /* CHARACTER_CONSTANT  */
    AUTO_SYM = 264,                /* AUTO_SYM  */
    BREAK_SYM = 265,               /* BREAK_SYM  */
    CASE_SYM = 266,                /* CASE_SYM  */
    CONTINUE_SYM = 267,            /* CONTINUE_SYM  */
    DEFAULT_SYM = 268,             /* DEFAULT_SYM  */
    DO_SYM = 269,                  /* DO_SYM  */
    ELSE_SYM = 270,                /* ELSE_SYM  */
    ENUM_SYM = 271,                /* ENUM_SYM  */
    FOR_SYM = 272,                 /* FOR_SYM  */
    IF_SYM = 273,                  /* IF_SYM  */
    RETURN_SYM = 274,              /* RETURN_SYM  */
    SIZEOF_SYM = 275,              /* SIZEOF_SYM  */
    STATIC_SYM = 276,              /* STATIC_SYM  */
    STRUCT_SYM = 277,              /* STRUCT_SYM  */
    SWITCH_SYM = 278,              /* SWITCH_SYM  */
    TYPEDEF_SYM = 279,             /* TYPEDEF_SYM  */
    UNION_SYM = 280,               /* UNION_SYM  */
    WHILE_SYM = 281,               /* WHILE_SYM  */
    PLUSPLUS = 282,                /* PLUSPLUS  */
    MINUSMINUS = 283,              /* MINUSMINUS  */
    ARROW = 284,                   /* ARROW  */
    LSS = 285,                     /* LSS  */
    GTR = 286,                     /* GTR  */
    LEQ = 287,                     /* LEQ  */
    GEQ = 288,                     /* GEQ  */
    EQL = 289,                     /* EQL  */
    NEQ = 290,                     /* NEQ  */
    AMPAMP = 291,                  /* AMPAMP  */
    BARBAR = 292,                  /* BARBAR  */
    DOTDOTDOT = 293,               /* DOTDOTDOT  */
    LP = 294,                      /* LP  */
    RP = 295,                      /* RP  */
    LB = 296,                      /* LB  */
    RB = 297,                      /* RB  */
    LR = 298,                      /* LR  */
    RR = 299,                      /* RR  */
    COLON = 300,                   /* COLON  */
    PERIOD = 301,                  /* PERIOD  */
    COMMA = 302,                   /* COMMA  */
    EXCL = 303,                    /* EXCL  */
    STAR = 304,                    /* STAR  */
    SLASH = 305,                   /* SLASH  */
    PERCENT = 306,                 /* PERCENT  */
    AMP = 307,                     /* AMP  */
    QUESTION = 308,                /* QUESTION  */
    SEMICOLON = 309,               /* SEMICOLON  */
    PLUS = 310,                    /* PLUS  */
    MINUS = 311,                   /* MINUS  */
    ASSIGN = 312                   /* ASSIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_OH_TAB_H_INCLUDED  */
