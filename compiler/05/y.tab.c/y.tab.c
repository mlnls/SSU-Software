/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "oh.y"

    #define YYSTYPE_IS_DECLARED 1
    typedef long YYSTYPE;

    #include "type.h"
    #include "oh.h"
    #include <stdio.h>
    #include <stdlib.h>

    extern int line_no, syntax_err;
	extern A_NODE *root;
	extern A_ID *current_id;
	extern int current_level;
	extern A_TYPE *int_type, *float_type, *char_type, *void_type, *string_type;

    int yyerror(char *s);
    int yylex();
    int yywrap();

#line 91 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define STRING_LITERAL 262
#define CHARACTER_CONSTANT 263
#define AUTO_SYM 264
#define BREAK_SYM 265
#define CASE_SYM 266
#define CONTINUE_SYM 267
#define DEFAULT_SYM 268
#define DO_SYM 269
#define ELSE_SYM 270
#define ENUM_SYM 271
#define FOR_SYM 272
#define IF_SYM 273
#define RETURN_SYM 274
#define SIZEOF_SYM 275
#define STATIC_SYM 276
#define STRUCT_SYM 277
#define SWITCH_SYM 278
#define TYPEDEF_SYM 279
#define UNION_SYM 280
#define WHILE_SYM 281
#define PLUSPLUS 282
#define MINUSMINUS 283
#define ARROW 284
#define LSS 285
#define GTR 286
#define LEQ 287
#define GEQ 288
#define EQL 289
#define NEQ 290
#define AMPAMP 291
#define BARBAR 292
#define DOTDOTDOT 293
#define LP 294
#define RP 295
#define LB 296
#define RB 297
#define LR 298
#define RR 299
#define COLON 300
#define PERIOD 301
#define COMMA 302
#define EXCL 303
#define STAR 304
#define SLASH 305
#define PERCENT 306
#define AMP 307
#define QUESTION 308
#define SEMICOLON 309
#define PLUS 310
#define MINUS 311
#define ASSIGN 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 4,            /* TYPE_IDENTIFIER  */
  YYSYMBOL_FLOAT_CONSTANT = 5,             /* FLOAT_CONSTANT  */
  YYSYMBOL_INTEGER_CONSTANT = 6,           /* INTEGER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_CHARACTER_CONSTANT = 8,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_AUTO_SYM = 9,                   /* AUTO_SYM  */
  YYSYMBOL_BREAK_SYM = 10,                 /* BREAK_SYM  */
  YYSYMBOL_CASE_SYM = 11,                  /* CASE_SYM  */
  YYSYMBOL_CONTINUE_SYM = 12,              /* CONTINUE_SYM  */
  YYSYMBOL_DEFAULT_SYM = 13,               /* DEFAULT_SYM  */
  YYSYMBOL_DO_SYM = 14,                    /* DO_SYM  */
  YYSYMBOL_ELSE_SYM = 15,                  /* ELSE_SYM  */
  YYSYMBOL_ENUM_SYM = 16,                  /* ENUM_SYM  */
  YYSYMBOL_FOR_SYM = 17,                   /* FOR_SYM  */
  YYSYMBOL_IF_SYM = 18,                    /* IF_SYM  */
  YYSYMBOL_RETURN_SYM = 19,                /* RETURN_SYM  */
  YYSYMBOL_SIZEOF_SYM = 20,                /* SIZEOF_SYM  */
  YYSYMBOL_STATIC_SYM = 21,                /* STATIC_SYM  */
  YYSYMBOL_STRUCT_SYM = 22,                /* STRUCT_SYM  */
  YYSYMBOL_SWITCH_SYM = 23,                /* SWITCH_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 24,               /* TYPEDEF_SYM  */
  YYSYMBOL_UNION_SYM = 25,                 /* UNION_SYM  */
  YYSYMBOL_WHILE_SYM = 26,                 /* WHILE_SYM  */
  YYSYMBOL_PLUSPLUS = 27,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 28,                /* MINUSMINUS  */
  YYSYMBOL_ARROW = 29,                     /* ARROW  */
  YYSYMBOL_LSS = 30,                       /* LSS  */
  YYSYMBOL_GTR = 31,                       /* GTR  */
  YYSYMBOL_LEQ = 32,                       /* LEQ  */
  YYSYMBOL_GEQ = 33,                       /* GEQ  */
  YYSYMBOL_EQL = 34,                       /* EQL  */
  YYSYMBOL_NEQ = 35,                       /* NEQ  */
  YYSYMBOL_AMPAMP = 36,                    /* AMPAMP  */
  YYSYMBOL_BARBAR = 37,                    /* BARBAR  */
  YYSYMBOL_DOTDOTDOT = 38,                 /* DOTDOTDOT  */
  YYSYMBOL_LP = 39,                        /* LP  */
  YYSYMBOL_RP = 40,                        /* RP  */
  YYSYMBOL_LB = 41,                        /* LB  */
  YYSYMBOL_RB = 42,                        /* RB  */
  YYSYMBOL_LR = 43,                        /* LR  */
  YYSYMBOL_RR = 44,                        /* RR  */
  YYSYMBOL_COLON = 45,                     /* COLON  */
  YYSYMBOL_PERIOD = 46,                    /* PERIOD  */
  YYSYMBOL_COMMA = 47,                     /* COMMA  */
  YYSYMBOL_EXCL = 48,                      /* EXCL  */
  YYSYMBOL_STAR = 49,                      /* STAR  */
  YYSYMBOL_SLASH = 50,                     /* SLASH  */
  YYSYMBOL_PERCENT = 51,                   /* PERCENT  */
  YYSYMBOL_AMP = 52,                       /* AMP  */
  YYSYMBOL_QUESTION = 53,                  /* QUESTION  */
  YYSYMBOL_SEMICOLON = 54,                 /* SEMICOLON  */
  YYSYMBOL_PLUS = 55,                      /* PLUS  */
  YYSYMBOL_MINUS = 56,                     /* MINUS  */
  YYSYMBOL_ASSIGN = 57,                    /* ASSIGN  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_program = 59,                   /* program  */
  YYSYMBOL_translation_unit = 60,          /* translation_unit  */
  YYSYMBOL_external_declaration = 61,      /* external_declaration  */
  YYSYMBOL_function_definition = 62,       /* function_definition  */
  YYSYMBOL_63_1 = 63,                      /* @1  */
  YYSYMBOL_declaration = 64,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 65,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 66,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list_opt = 67,  /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 68,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 69,           /* init_declarator  */
  YYSYMBOL_initializer = 70,               /* initializer  */
  YYSYMBOL_initializer_list = 71,          /* initializer_list  */
  YYSYMBOL_type_specifier = 72,            /* type_specifier  */
  YYSYMBOL_struct_specifier = 73,          /* struct_specifier  */
  YYSYMBOL_74_2 = 74,                      /* @2  */
  YYSYMBOL_75_3 = 75,                      /* @3  */
  YYSYMBOL_76_4 = 76,                      /* @4  */
  YYSYMBOL_77_5 = 77,                      /* @5  */
  YYSYMBOL_struct_or_union = 78,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 79,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 80,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 81,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 82,         /* struct_declarator  */
  YYSYMBOL_enum_specifier = 83,            /* enum_specifier  */
  YYSYMBOL_84_6 = 84,                      /* @6  */
  YYSYMBOL_85_7 = 85,                      /* @7  */
  YYSYMBOL_enumerator_list = 86,           /* enumerator_list  */
  YYSYMBOL_enumerator = 87,                /* enumerator  */
  YYSYMBOL_88_8 = 88,                      /* @8  */
  YYSYMBOL_declarator = 89,                /* declarator  */
  YYSYMBOL_pointer = 90,                   /* pointer  */
  YYSYMBOL_direct_declarator = 91,         /* direct_declarator  */
  YYSYMBOL_92_9 = 92,                      /* @9  */
  YYSYMBOL_constant_expression_opt = 93,   /* constant_expression_opt  */
  YYSYMBOL_parameter_type_list_opt = 94,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 95,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 96,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 97,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 98,   /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 99,       /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 100, /* direct_abstract_declarator  */
  YYSYMBOL_primary_expression = 101,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 102,       /* postfix_expression  */
  YYSYMBOL_arg_expression_list_opt = 103,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 104,      /* arg_expression_list  */
  YYSYMBOL_unary_expression = 105,         /* unary_expression  */
  YYSYMBOL_cast_expression = 106,          /* cast_expression  */
  YYSYMBOL_type_name = 107,                /* type_name  */
  YYSYMBOL_multiplicative_expression = 108, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 109,      /* additive_expression  */
  YYSYMBOL_relational_expression = 110,    /* relational_expression  */
  YYSYMBOL_equality_expression = 111,      /* equality_expression  */
  YYSYMBOL_logical_and_expression = 112,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 113,    /* logical_or_expression  */
  YYSYMBOL_bitwise_or_expression = 114,    /* bitwise_or_expression  */
  YYSYMBOL_bitwise_xor_expression = 115,   /* bitwise_xor_expression  */
  YYSYMBOL_bitwise_and_expression = 116,   /* bitwise_and_expression  */
  YYSYMBOL_constant_expression = 117,      /* constant_expression  */
  YYSYMBOL_expression = 118,               /* expression  */
  YYSYMBOL_statement = 119,                /* statement  */
  YYSYMBOL_labeled_statement = 120,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 121,       /* compound_statement  */
  YYSYMBOL_122_10 = 122,                   /* @10  */
  YYSYMBOL_declaration_list_opt = 123,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 124,         /* declaration_list  */
  YYSYMBOL_statement_list_opt = 125,       /* statement_list_opt  */
  YYSYMBOL_statement_list = 126,           /* statement_list  */
  YYSYMBOL_expression_statement = 127,     /* expression_statement  */
  YYSYMBOL_selection_statement = 128,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 129,      /* iteration_statement  */
  YYSYMBOL_for_expression = 130,           /* for_expression  */
  YYSYMBOL_expression_opt = 131,           /* expression_opt  */
  YYSYMBOL_jump_statement = 132,           /* jump_statement  */
  YYSYMBOL_assignment_expression = 133,    /* assignment_expression  */
  YYSYMBOL_conditional_expression = 134    /* conditional_expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   440

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  172
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  288

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    32,    32,    37,    38,    43,    44,    48,    48,    53,
      58,    59,    60,    62,    67,    68,    69,    73,    74,    78,
      79,    84,    85,    89,    90,    94,    96,   101,   102,   103,
     107,   108,   107,   110,   111,   110,   113,   117,   118,   122,
     123,   128,   133,   134,   139,   144,   143,   146,   146,   148,
     153,   154,   158,   161,   160,   166,   167,   171,   172,   176,
     177,   178,   180,   180,   187,   188,   192,   193,   197,   198,
     203,   204,   209,   210,   216,   217,   221,   222,   223,   227,
     228,   229,   230,   232,   237,   238,   239,   240,   241,   242,
     246,   247,   248,   250,   251,   252,   253,   257,   258,   262,
     264,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   282,   283,   287,   292,   293,   295,   297,   302,   303,
     305,   310,   311,   313,   315,   317,   322,   323,   325,   330,
     331,   336,   337,   342,   346,   350,   354,   358,   362,   363,
     364,   365,   366,   367,   371,   373,   378,   378,   383,   384,
     387,   388,   392,   393,   396,   398,   402,   403,   407,   408,
     410,   414,   415,   417,   422,   427,   428,   432,   433,   434,
     438,   439,   443
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "TYPE_IDENTIFIER", "FLOAT_CONSTANT", "INTEGER_CONSTANT",
  "STRING_LITERAL", "CHARACTER_CONSTANT", "AUTO_SYM", "BREAK_SYM",
  "CASE_SYM", "CONTINUE_SYM", "DEFAULT_SYM", "DO_SYM", "ELSE_SYM",
  "ENUM_SYM", "FOR_SYM", "IF_SYM", "RETURN_SYM", "SIZEOF_SYM",
  "STATIC_SYM", "STRUCT_SYM", "SWITCH_SYM", "TYPEDEF_SYM", "UNION_SYM",
  "WHILE_SYM", "PLUSPLUS", "MINUSMINUS", "ARROW", "LSS", "GTR", "LEQ",
  "GEQ", "EQL", "NEQ", "AMPAMP", "BARBAR", "DOTDOTDOT", "LP", "RP", "LB",
  "RB", "LR", "RR", "COLON", "PERIOD", "COMMA", "EXCL", "STAR", "SLASH",
  "PERCENT", "AMP", "QUESTION", "SEMICOLON", "PLUS", "MINUS", "ASSIGN",
  "$accept", "program", "translation_unit", "external_declaration",
  "function_definition", "@1", "declaration", "declaration_specifiers",
  "storage_class_specifier", "init_declarator_list_opt",
  "init_declarator_list", "init_declarator", "initializer",
  "initializer_list", "type_specifier", "struct_specifier", "@2", "@3",
  "@4", "@5", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_specifier", "@6", "@7", "enumerator_list", "enumerator", "@8",
  "declarator", "pointer", "direct_declarator", "@9",
  "constant_expression_opt", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "primary_expression", "postfix_expression",
  "arg_expression_list_opt", "arg_expression_list", "unary_expression",
  "cast_expression", "type_name", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "constant_expression", "expression",
  "statement", "labeled_statement", "compound_statement", "@10",
  "declaration_list_opt", "declaration_list", "statement_list_opt",
  "statement_list", "expression_statement", "selection_statement",
  "iteration_statement", "for_expression", "expression_opt",
  "jump_statement", "assignment_expression", "conditional_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-230)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-54)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     246,  -230,  -230,    17,  -230,  -230,  -230,  -230,    40,   246,
    -230,  -230,  -230,    35,   246,   246,  -230,    49,  -230,    36,
      44,  -230,  -230,  -230,    35,    71,    78,   107,  -230,    -4,
      11,    75,  -230,  -230,   106,   117,   132,   186,   150,  -230,
    -230,    35,   139,   149,    75,  -230,   306,   154,  -230,   186,
     122,    -3,  -230,  -230,  -230,   143,  -230,  -230,  -230,  -230,
    -230,   336,   362,   362,   280,   139,   306,   306,   306,   306,
     306,  -230,  -230,   176,   151,  -230,    85,    27,    97,   104,
     173,   175,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,   246,   171,  -230,  -230,   136,    60,   157,  -230,   186,
     280,  -230,   306,  -230,  -230,    72,   179,   180,  -230,    68,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,   218,   306,
     306,   220,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   246,   102,   185,  -230,
      -1,  -230,  -230,   136,    35,    20,  -230,  -230,   306,  -230,
     187,   391,   306,   109,  -230,  -230,   114,   306,  -230,  -230,
     139,  -230,   195,   200,  -230,   206,  -230,  -230,  -230,  -230,
    -230,    85,    85,    27,    27,    27,    27,    97,    97,  -230,
     173,  -230,    35,   226,   246,   177,  -230,    10,  -230,  -230,
    -230,   246,   152,     9,  -230,  -230,  -230,  -230,  -230,  -230,
     202,   211,   219,   114,   246,   306,  -230,  -230,  -230,   306,
    -230,   209,   306,   210,   215,   226,   227,   233,   306,   234,
     237,  -230,   223,  -230,  -230,  -230,   235,   226,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,    35,  -230,  -230,  -230,  -230,
     250,   249,  -230,  -230,   247,  -230,   226,   267,   306,   306,
    -230,   240,   306,   306,  -230,  -230,  -230,  -230,  -230,  -230,
     226,  -230,   256,   257,   244,   259,  -230,   263,   266,  -230,
     306,   226,   306,   226,   226,   226,   270,  -230,   261,   301,
    -230,  -230,   264,   306,   226,  -230,  -230,  -230
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    29,    14,    47,    15,    37,    16,    38,     0,     2,
       3,     5,     6,    17,    11,    10,    27,    33,    28,    49,
       0,     1,     4,    59,     0,    57,     0,    18,    19,    21,
       0,    56,    13,    12,    36,     0,     0,     0,     0,    58,
       9,     0,     0,     0,    55,    62,    64,     0,    34,     0,
      52,     0,    50,    60,    20,    21,    84,    86,    85,    88,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    90,   101,   111,   114,   118,   121,   126,   135,
     131,   172,   129,   133,   134,    23,   136,   137,   170,   146,
       8,    66,     0,    65,    31,     0,     0,     0,    48,     0,
       0,   109,     0,   102,   103,    74,     0,     0,    25,     0,
     111,   106,   105,   104,   108,   107,    95,    96,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   148,    74,     0,    67,
      68,    70,    61,     0,     0,     0,    39,    46,     0,    51,
       0,    66,    64,    76,   113,    75,    77,     0,    89,    24,
       0,    94,     0,    98,    99,     0,    93,   171,   115,   116,
     117,   119,   120,   122,   123,   124,   125,   127,   128,   130,
     132,   150,    17,   152,   149,    66,    72,    76,    73,    63,
      69,     0,     0,     0,    42,    44,    35,    40,    54,   110,
       0,     0,     0,    78,    66,    64,   112,    26,    92,     0,
      91,     0,     0,     0,     0,     0,     0,     0,   165,     0,
       0,   156,     0,   154,   138,   139,     0,   153,   140,   141,
     142,   143,   151,    71,    32,     0,    41,    81,    79,    80,
       0,     0,   100,   169,     0,   168,     0,     0,   165,     0,
     166,     0,     0,     0,   157,   147,   155,    43,    83,    82,
       0,   145,     0,     0,     0,     0,   167,     0,     0,   144,
       0,     0,   165,     0,     0,     0,     0,   163,     0,   158,
     160,   161,     0,   165,     0,   162,   164,   159
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,  -230,   308,  -230,  -230,  -127,     1,  -230,  -230,
    -230,   279,   -57,  -230,   -84,  -230,  -230,  -230,  -230,  -230,
    -230,   178,  -120,  -230,    87,  -230,  -230,  -230,   274,   225,
    -230,   -11,   -20,   -23,  -230,  -134,   -85,  -230,  -230,   134,
     190,  -130,  -106,  -230,  -230,  -230,  -230,   -35,     0,   230,
      46,   128,    51,  -230,   196,  -230,   203,  -230,  -230,   -43,
     -42,  -198,  -230,   295,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,  -229,  -230,  -107,  -230
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,     9,    10,    11,    43,    12,   137,    14,    26,
      27,    28,    71,   109,    15,    16,    47,   143,    35,    95,
      17,   145,   146,   193,   194,    18,    36,    20,    51,    52,
      97,    38,    30,    31,    91,    92,   200,   139,   140,   141,
     154,   155,   156,    72,    73,   162,   163,    74,    75,   106,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     222,   223,   224,   225,   136,   183,   184,   226,   227,   228,
     229,   230,   263,   251,   231,    87,    88
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      86,    13,    29,    93,    86,    39,   138,    44,   108,   181,
      13,   144,   164,    23,    23,    32,    33,   247,   202,   264,
      19,   201,   107,    86,     1,   197,   101,   103,   104,   256,
      55,   110,   110,   110,   110,   110,     3,   190,    23,    -7,
      21,    98,     5,   278,    99,     7,   191,   203,   261,   185,
      24,   152,    34,    42,   286,   201,   235,   232,   107,   144,
     107,   144,   269,   236,   196,   105,   111,   112,   113,   114,
     115,   241,   197,   277,    24,   279,   280,   281,   165,   -45,
     167,   203,   126,   127,    25,   153,   287,    37,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   105,   242,   207,   147,    23,   198,    99,   144,    93,
      86,   151,   159,   152,    45,   160,    46,   187,    86,   240,
      25,    25,   110,   168,   169,   170,   186,   128,   129,   130,
     131,   153,    40,   195,   123,   124,   125,   182,   132,   133,
       1,   185,    56,   152,    57,    58,    59,    60,   151,   -30,
     152,    25,     3,   204,    41,   205,     1,   206,     5,    61,
      48,     7,    93,    86,    44,   187,    62,    63,     3,   244,
      86,    55,   171,   172,     5,    49,   250,     7,    64,   -53,
      23,     1,    65,   177,   178,   182,     2,    66,    67,    50,
      53,    68,    89,     3,    69,    70,   234,    94,     4,     5,
      42,     6,     7,   116,   117,   118,   250,   265,   122,   134,
     267,   268,   135,   142,   148,   119,   185,   120,   152,   157,
     158,   161,   121,   166,   195,   189,    25,   199,   276,    56,
     250,    57,    58,    59,    60,   208,   211,   212,   213,   214,
     215,   250,   237,   216,   217,   218,    61,   209,   210,   219,
       1,   238,   220,    62,    63,     2,   173,   174,   175,   176,
     246,   239,     3,   243,   245,    64,   248,     4,     5,    89,
       6,     7,   249,   252,    66,    67,   253,   254,    68,   255,
     221,    69,    70,    56,     1,    57,    58,    59,    60,     2,
     258,   259,   260,   262,   266,   270,     3,   271,   272,   273,
      61,     4,     5,   274,     6,     7,   275,    62,    63,    56,
     282,    57,    58,    59,    60,   283,   284,    22,   285,    64,
      54,   192,   257,    96,   149,   233,    61,   188,    66,    67,
     150,   180,    68,    62,    63,    69,    70,   179,    90,    56,
       0,    57,    58,    59,    60,    64,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    67,    61,     0,    68,     0,
       0,    69,    70,    62,    63,    56,     0,    57,    58,    59,
      60,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,    61,     0,    66,    67,     0,     0,    68,    62,
      63,    69,    70,     0,     0,     1,     0,     0,     0,     0,
       2,   102,     0,     0,     0,     0,     0,     3,     0,     0,
      66,    67,     4,     5,    68,     6,     7,    69,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     151,     0,   152,     0,     0,     0,     0,     0,     0,     0,
      25
};

static const yytype_int16 yycheck[] =
{
      42,     0,    13,    46,    46,    25,    91,    30,    65,   136,
       9,    95,   119,     3,     3,    14,    15,   215,   152,   248,
       3,   151,    64,    65,     4,   145,    61,    62,    63,   227,
      41,    66,    67,    68,    69,    70,    16,    38,     3,    43,
       0,    44,    22,   272,    47,    25,    47,   153,   246,    39,
      39,    41,     3,    57,   283,   185,    47,   184,   100,   143,
     102,   145,   260,    54,    44,    64,    66,    67,    68,    69,
      70,   205,   192,   271,    39,   273,   274,   275,   120,    43,
     122,   187,    55,    56,    49,   105,   284,    43,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   100,   209,   160,    44,     3,   148,    47,   192,   152,
     152,    39,    44,    41,    39,    47,    41,   137,   160,   204,
      49,    49,   157,   123,   124,   125,   137,    30,    31,    32,
      33,   151,    54,   144,    49,    50,    51,   136,    34,    35,
       4,    39,     3,    41,     5,     6,     7,     8,    39,    43,
      41,    49,    16,    39,    47,    41,     4,   157,    22,    20,
      43,    25,   205,   205,   187,   185,    27,    28,    16,   212,
     212,   182,   126,   127,    22,    43,   218,    25,    39,    57,
       3,     4,    43,   132,   133,   184,     9,    48,    49,     3,
      40,    52,    43,    16,    55,    56,    44,    43,    21,    22,
      57,    24,    25,    27,    28,    29,   248,   249,    57,    36,
     252,   253,    37,    42,    57,    39,    39,    41,    41,    40,
      40,     3,    46,     3,   235,    40,    49,    40,   270,     3,
     272,     5,     6,     7,     8,    40,    10,    11,    12,    13,
      14,   283,    40,    17,    18,    19,    20,    47,    42,    23,
       4,    40,    26,    27,    28,     9,   128,   129,   130,   131,
      45,    42,    16,    54,    54,    39,    39,    21,    22,    43,
      24,    25,    39,    39,    48,    49,    39,    54,    52,    44,
      54,    55,    56,     3,     4,     5,     6,     7,     8,     9,
      40,    42,    45,    26,    54,    39,    16,    40,    54,    40,
      20,    21,    22,    40,    24,    25,    40,    27,    28,     3,
      40,     5,     6,     7,     8,    54,    15,     9,    54,    39,
      41,   143,   235,    49,    99,   191,    20,   137,    48,    49,
     100,   135,    52,    27,    28,    55,    56,   134,    43,     3,
      -1,     5,     6,     7,     8,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    20,    -1,    52,    -1,
      -1,    55,    56,    27,    28,     3,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    48,    49,    -1,    -1,    52,    27,
      28,    55,    56,    -1,    -1,     4,    -1,    -1,    -1,    -1,
       9,    39,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,
      48,    49,    21,    22,    52,    24,    25,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     9,    16,    21,    22,    24,    25,    59,    60,
      61,    62,    64,    65,    66,    72,    73,    78,    83,     3,
      85,     0,    61,     3,    39,    49,    67,    68,    69,    89,
      90,    91,    65,    65,     3,    76,    84,    43,    89,    90,
      54,    47,    57,    63,    91,    39,    41,    74,    43,    43,
       3,    86,    87,    40,    69,    89,     3,     5,     6,     7,
       8,    20,    27,    28,    39,    43,    48,    49,    52,    55,
      56,    70,   101,   102,   105,   106,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   133,   134,    43,
     121,    92,    93,   117,    43,    77,    86,    88,    44,    47,
      39,   105,    39,   105,   105,    65,   107,   118,    70,    71,
     105,   106,   106,   106,   106,   106,    27,    28,    29,    39,
      41,    46,    57,    49,    50,    51,    55,    56,    30,    31,
      32,    33,    34,    35,    36,    37,   122,    65,    94,    95,
      96,    97,    42,    75,    72,    79,    80,    44,    57,    87,
     107,    39,    41,    90,    98,    99,   100,    40,    40,    44,
      47,     3,   103,   104,   133,   118,     3,   118,   106,   106,
     106,   108,   108,   109,   109,   109,   109,   110,   110,   114,
     112,    64,    65,   123,   124,    39,    89,    90,    98,    40,
      38,    47,    79,    81,    82,    89,    44,    80,   118,    40,
      94,    99,    93,   100,    39,    41,   106,    70,    40,    47,
      42,    10,    11,    12,    13,    14,    17,    18,    19,    23,
      26,    54,   118,   119,   120,   121,   125,   126,   127,   128,
     129,   132,    64,    97,    44,    47,    54,    40,    40,    42,
      94,    93,   133,    54,   117,    54,    45,   119,    39,    39,
     118,   131,    39,    39,    54,    44,   119,    82,    40,    42,
      45,   119,    26,   130,   131,   118,    54,   118,   118,   119,
      39,    40,    54,    40,    40,    40,   118,   119,   131,   119,
     119,   119,    40,    54,    15,    54,   131,   119
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    63,    62,    64,
      65,    65,    65,    65,    66,    66,    66,    67,    67,    68,
      68,    69,    69,    70,    70,    71,    71,    72,    72,    72,
      74,    75,    73,    76,    77,    73,    73,    78,    78,    79,
      79,    80,    81,    81,    82,    84,    83,    85,    83,    83,
      86,    86,    87,    88,    87,    89,    89,    90,    90,    91,
      91,    91,    92,    91,    93,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    98,    98,    99,    99,    99,   100,
     100,   100,   100,   100,   101,   101,   101,   101,   101,   101,
     102,   102,   102,   102,   102,   102,   102,   103,   103,   104,
     104,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   106,   106,   107,   108,   108,   108,   108,   109,   109,
     109,   110,   110,   110,   110,   110,   111,   111,   111,   112,
     112,   113,   113,   114,   115,   116,   117,   118,   119,   119,
     119,   119,   119,   119,   120,   120,   122,   121,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   127,   128,   128,
     128,   129,   129,   129,   130,   131,   131,   132,   132,   132,
     133,   133,   134
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     3,
       1,     1,     2,     2,     1,     1,     1,     0,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       0,     0,     7,     0,     0,     6,     2,     1,     1,     1,
       2,     3,     1,     3,     1,     0,     6,     0,     5,     2,
       1,     3,     1,     0,     4,     2,     1,     1,     2,     1,
       3,     4,     0,     5,     0,     1,     0,     1,     1,     2,
       1,     3,     2,     2,     0,     1,     1,     1,     2,     3,
       3,     3,     4,     4,     1,     1,     1,     1,     1,     3,
       1,     4,     4,     3,     3,     2,     2,     0,     1,     1,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     1,     4,     2,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     0,     5,     0,     1,
       1,     2,     0,     1,     1,     2,     1,     2,     5,     7,
       5,     5,     7,     5,     5,     0,     1,     3,     2,     2,
       1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: translation_unit  */
#line 33 "oh.y"
    {root=makeNode(N_PROGRAM,NIL,yyvsp[0],NIL); checkForwardReference();}
#line 1627 "y.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 37 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1633 "y.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 39 "oh.y"
    {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1639 "y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 43 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1645 "y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 44 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1651 "y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 48 "oh.y"
                                            {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 1657 "y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 49 "oh.y"
                                            {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]); current_id=yyvsp[-2];}
#line 1663 "y.tab.c"
    break;

  case 9: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 54 "oh.y"
                                            {yyval=setDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1669 "y.tab.c"
    break;

  case 10: /* declaration_specifiers: type_specifier  */
#line 58 "oh.y"
                                            {yyval=makeSpecifier(yyvsp[0],0);}
#line 1675 "y.tab.c"
    break;

  case 11: /* declaration_specifiers: storage_class_specifier  */
#line 59 "oh.y"
                                            {yyval=makeSpecifier(0,yyvsp[0]);}
#line 1681 "y.tab.c"
    break;

  case 12: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 61 "oh.y"
                                            {yyval=updateSpecifier(yyvsp[0],yyvsp[-1],0);}
#line 1687 "y.tab.c"
    break;

  case 13: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 63 "oh.y"
                                            {yyval=updateSpecifier(yyvsp[0],0,yyvsp[-1]);}
#line 1693 "y.tab.c"
    break;

  case 14: /* storage_class_specifier: AUTO_SYM  */
#line 67 "oh.y"
                                            {yyval=S_AUTO;}
#line 1699 "y.tab.c"
    break;

  case 15: /* storage_class_specifier: STATIC_SYM  */
#line 68 "oh.y"
                                            {yyval=S_STATIC;}
#line 1705 "y.tab.c"
    break;

  case 16: /* storage_class_specifier: TYPEDEF_SYM  */
#line 69 "oh.y"
                                            {yyval=S_TYPEDEF;}
#line 1711 "y.tab.c"
    break;

  case 17: /* init_declarator_list_opt: %empty  */
#line 73 "oh.y"
                                            {yyval=makeDummyIdentifier();}
#line 1717 "y.tab.c"
    break;

  case 18: /* init_declarator_list_opt: init_declarator_list  */
#line 74 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1723 "y.tab.c"
    break;

  case 19: /* init_declarator_list: init_declarator  */
#line 78 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1729 "y.tab.c"
    break;

  case 20: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 80 "oh.y"
                                            {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1735 "y.tab.c"
    break;

  case 21: /* init_declarator: declarator  */
#line 84 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1741 "y.tab.c"
    break;

  case 22: /* init_declarator: declarator ASSIGN initializer  */
#line 85 "oh.y"
                                            {yyval=setDeclaratorInit(yyvsp[-2],yyvsp[0]);}
#line 1747 "y.tab.c"
    break;

  case 23: /* initializer: constant_expression  */
#line 89 "oh.y"
                                            {yyval=makeNode(N_INIT_LIST_ONE,NIL,yyvsp[0],NIL);}
#line 1753 "y.tab.c"
    break;

  case 24: /* initializer: LR initializer_list RR  */
#line 90 "oh.y"
                                            {yyval=yyvsp[-1];}
#line 1759 "y.tab.c"
    break;

  case 25: /* initializer_list: initializer  */
#line 95 "oh.y"
    {yyval=makeNode(N_INIT_LIST,yyvsp[0],NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 1765 "y.tab.c"
    break;

  case 26: /* initializer_list: initializer_list COMMA initializer  */
#line 96 "oh.y"
                                            {yyval=makeNodeList(N_INIT_LIST,yyvsp[-2],yyvsp[0]);}
#line 1771 "y.tab.c"
    break;

  case 27: /* type_specifier: struct_specifier  */
#line 101 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1777 "y.tab.c"
    break;

  case 28: /* type_specifier: enum_specifier  */
#line 102 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1783 "y.tab.c"
    break;

  case 29: /* type_specifier: TYPE_IDENTIFIER  */
#line 103 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1789 "y.tab.c"
    break;

  case 30: /* @2: %empty  */
#line 107 "oh.y"
                                            {yyval=setTypeStructOrEnumIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1795 "y.tab.c"
    break;

  case 31: /* @3: %empty  */
#line 108 "oh.y"
       {yyval=current_id; current_level++;}
#line 1801 "y.tab.c"
    break;

  case 32: /* struct_specifier: struct_or_union IDENTIFIER @2 LR @3 struct_declaration_list RR  */
#line 109 "oh.y"
    {checkForwardReference(); yyval=setTypeField(yyvsp[-4],yyvsp[-1]); current_level--; current_id=yyvsp[-2];}
#line 1807 "y.tab.c"
    break;

  case 33: /* @4: %empty  */
#line 110 "oh.y"
                                            {yyval=makeType(yyvsp[0]);}
#line 1813 "y.tab.c"
    break;

  case 34: /* @5: %empty  */
#line 111 "oh.y"
       {yyval=current_id; current_level++;}
#line 1819 "y.tab.c"
    break;

  case 35: /* struct_specifier: struct_or_union @4 LR @5 struct_declaration_list RR  */
#line 112 "oh.y"
    {checkForwardReference(); yyval=setTypeField(yyvsp[-4],yyvsp[-1]); current_level--; current_id=yyvsp[-2];}
#line 1825 "y.tab.c"
    break;

  case 36: /* struct_specifier: struct_or_union IDENTIFIER  */
#line 113 "oh.y"
                                            {yyval=getTypeOfStructOrEnumRefIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1831 "y.tab.c"
    break;

  case 37: /* struct_or_union: STRUCT_SYM  */
#line 117 "oh.y"
                                            {yyval=T_STRUCT;}
#line 1837 "y.tab.c"
    break;

  case 38: /* struct_or_union: UNION_SYM  */
#line 118 "oh.y"
                                            {yyval=T_UNION;}
#line 1843 "y.tab.c"
    break;

  case 39: /* struct_declaration_list: struct_declaration  */
#line 122 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1849 "y.tab.c"
    break;

  case 40: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 124 "oh.y"
                                            {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1855 "y.tab.c"
    break;

  case 41: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 129 "oh.y"
                                            {yyval=setStructDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1861 "y.tab.c"
    break;

  case 42: /* struct_declarator_list: struct_declarator  */
#line 133 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1867 "y.tab.c"
    break;

  case 43: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 135 "oh.y"
                                            {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[-1]);}
#line 1873 "y.tab.c"
    break;

  case 44: /* struct_declarator: declarator  */
#line 139 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1879 "y.tab.c"
    break;

  case 45: /* @6: %empty  */
#line 144 "oh.y"
    {yyval=setTypeStructOrEnumIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1885 "y.tab.c"
    break;

  case 46: /* enum_specifier: ENUM_SYM IDENTIFIER @6 LR enumerator_list RR  */
#line 145 "oh.y"
                                            {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1891 "y.tab.c"
    break;

  case 47: /* @7: %empty  */
#line 146 "oh.y"
                                            {yyval=makeType(T_ENUM);}
#line 1897 "y.tab.c"
    break;

  case 48: /* enum_specifier: ENUM_SYM @7 LR enumerator_list RR  */
#line 147 "oh.y"
                                            {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1903 "y.tab.c"
    break;

  case 49: /* enum_specifier: ENUM_SYM IDENTIFIER  */
#line 149 "oh.y"
    {yyval=getTypeOfStructOrEnumRefIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1909 "y.tab.c"
    break;

  case 50: /* enumerator_list: enumerator  */
#line 153 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1915 "y.tab.c"
    break;

  case 51: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 154 "oh.y"
                                            {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1921 "y.tab.c"
    break;

  case 52: /* enumerator: IDENTIFIER  */
#line 159 "oh.y"
    {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 1927 "y.tab.c"
    break;

  case 53: /* @8: %empty  */
#line 161 "oh.y"
    {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 1933 "y.tab.c"
    break;

  case 54: /* enumerator: IDENTIFIER @8 ASSIGN expression  */
#line 162 "oh.y"
                                   {yyval=setDeclaratorInit(yyvsp[-2],yyvsp[0]);}
#line 1939 "y.tab.c"
    break;

  case 55: /* declarator: pointer direct_declarator  */
#line 166 "oh.y"
                                            {yyval=setDeclaratorElementType(yyvsp[0],yyvsp[-1]);}
#line 1945 "y.tab.c"
    break;

  case 56: /* declarator: direct_declarator  */
#line 167 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1951 "y.tab.c"
    break;

  case 57: /* pointer: STAR  */
#line 171 "oh.y"
                                            {yyval=makeType(T_POINTER);}
#line 1957 "y.tab.c"
    break;

  case 58: /* pointer: STAR pointer  */
#line 172 "oh.y"
                                            {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 1963 "y.tab.c"
    break;

  case 59: /* direct_declarator: IDENTIFIER  */
#line 176 "oh.y"
                                            {yyval=makeIdentifier(yyvsp[0]);}
#line 1969 "y.tab.c"
    break;

  case 60: /* direct_declarator: LP declarator RP  */
#line 177 "oh.y"
                                            {yyval=yyvsp[-1];}
#line 1975 "y.tab.c"
    break;

  case 61: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 179 "oh.y"
    {yyval=setDeclaratorElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 1981 "y.tab.c"
    break;

  case 62: /* @9: %empty  */
#line 180 "oh.y"
                                            {yyval=current_id; current_level++;}
#line 1987 "y.tab.c"
    break;

  case 63: /* direct_declarator: direct_declarator LP @9 parameter_type_list_opt RP  */
#line 182 "oh.y"
    {checkForwardReference(); current_id=yyvsp[-2]; current_level--;
     yyval=setDeclaratorElementType(yyvsp[-4],setTypeField(makeType(T_FUNC),yyvsp[-1]));}
#line 1994 "y.tab.c"
    break;

  case 64: /* constant_expression_opt: %empty  */
#line 187 "oh.y"
                                            {yyval=NIL;}
#line 2000 "y.tab.c"
    break;

  case 65: /* constant_expression_opt: constant_expression  */
#line 188 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2006 "y.tab.c"
    break;

  case 66: /* parameter_type_list_opt: %empty  */
#line 192 "oh.y"
                                            {yyval=NIL;}
#line 2012 "y.tab.c"
    break;

  case 67: /* parameter_type_list_opt: parameter_type_list  */
#line 193 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2018 "y.tab.c"
    break;

  case 68: /* parameter_type_list: parameter_list  */
#line 197 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2024 "y.tab.c"
    break;

  case 69: /* parameter_type_list: parameter_list DOTDOTDOT  */
#line 199 "oh.y"
    {yyval=linkDeclaratorList(yyvsp[-1],setDeclaratorKind(makeDummyIdentifier(),ID_PARAM));}
#line 2030 "y.tab.c"
    break;

  case 70: /* parameter_list: parameter_declaration  */
#line 203 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2036 "y.tab.c"
    break;

  case 71: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 205 "oh.y"
    {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 2042 "y.tab.c"
    break;

  case 72: /* parameter_declaration: declaration_specifiers declarator  */
#line 209 "oh.y"
                                            {yyval=setParameterDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2048 "y.tab.c"
    break;

  case 73: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 211 "oh.y"
    {yyval=setParameterDeclaratorSpecifier
        (setDeclaratorType(makeDummyIdentifier(),yyvsp[0]),yyvsp[-1]);}
#line 2055 "y.tab.c"
    break;

  case 74: /* abstract_declarator_opt: %empty  */
#line 216 "oh.y"
                                            {yyval=NIL;}
#line 2061 "y.tab.c"
    break;

  case 75: /* abstract_declarator_opt: abstract_declarator  */
#line 217 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2067 "y.tab.c"
    break;

  case 76: /* abstract_declarator: pointer  */
#line 221 "oh.y"
                                            {yyval=makeType(T_POINTER);}
#line 2073 "y.tab.c"
    break;

  case 77: /* abstract_declarator: direct_abstract_declarator  */
#line 222 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2079 "y.tab.c"
    break;

  case 78: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 223 "oh.y"
                                            {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 2085 "y.tab.c"
    break;

  case 79: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 227 "oh.y"
                                            {yyval=yyvsp[-1];}
#line 2091 "y.tab.c"
    break;

  case 80: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 228 "oh.y"
                                            {yyval=setTypeExpr(makeType(T_ARRAY),yyvsp[-1]);}
#line 2097 "y.tab.c"
    break;

  case 81: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 229 "oh.y"
                                            {yyval=setTypeExpr(makeType(T_FUNC),yyvsp[-1]);}
#line 2103 "y.tab.c"
    break;

  case 82: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 231 "oh.y"
    {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 2109 "y.tab.c"
    break;

  case 83: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 233 "oh.y"
    {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_FUNC),yyvsp[-1]));}
#line 2115 "y.tab.c"
    break;

  case 84: /* primary_expression: IDENTIFIER  */
#line 237 "oh.y"
                                            {yyval=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared(yyvsp[0]),NIL);}
#line 2121 "y.tab.c"
    break;

  case 85: /* primary_expression: INTEGER_CONSTANT  */
#line 238 "oh.y"
                                            {yyval=makeNode(N_EXP_INT_CONST,NIL,yyvsp[0],NIL);}
#line 2127 "y.tab.c"
    break;

  case 86: /* primary_expression: FLOAT_CONSTANT  */
#line 239 "oh.y"
                                            {yyval=makeNode(N_EXP_FLOAT_CONST,NIL,yyvsp[0],NIL);}
#line 2133 "y.tab.c"
    break;

  case 87: /* primary_expression: CHARACTER_CONSTANT  */
#line 240 "oh.y"
                                            {yyval=makeNode(N_EXP_CHAR_CONST,NIL,yyvsp[0],NIL);}
#line 2139 "y.tab.c"
    break;

  case 88: /* primary_expression: STRING_LITERAL  */
#line 241 "oh.y"
                                            {yyval=makeNode(N_EXP_STRING_LITERAL,NIL,yyvsp[0],NIL);}
#line 2145 "y.tab.c"
    break;

  case 89: /* primary_expression: LP expression RP  */
#line 242 "oh.y"
                                            {yyval=yyvsp[-1];}
#line 2151 "y.tab.c"
    break;

  case 90: /* postfix_expression: primary_expression  */
#line 246 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2157 "y.tab.c"
    break;

  case 91: /* postfix_expression: postfix_expression LB expression RB  */
#line 247 "oh.y"
                                            {yyval=makeNode(N_EXP_ARRAY,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2163 "y.tab.c"
    break;

  case 92: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 249 "oh.y"
                                            {yyval=makeNode(N_EXP_FUNCTION_CALL,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2169 "y.tab.c"
    break;

  case 93: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 250 "oh.y"
                                            {yyval=makeNode(N_EXP_STRUCT,yyvsp[-2],NIL,yyvsp[0]);}
#line 2175 "y.tab.c"
    break;

  case 94: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 251 "oh.y"
                                            {yyval=makeNode(N_EXP_ARROW,yyvsp[-2],NIL,yyvsp[0]);}
#line 2181 "y.tab.c"
    break;

  case 95: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 252 "oh.y"
                                            {yyval=makeNode(N_EXP_POST_INC,NIL,yyvsp[-1],NIL);}
#line 2187 "y.tab.c"
    break;

  case 96: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 253 "oh.y"
                                            {yyval=makeNode(N_EXP_POST_DEC,NIL,yyvsp[-1],NIL);}
#line 2193 "y.tab.c"
    break;

  case 97: /* arg_expression_list_opt: %empty  */
#line 257 "oh.y"
                                            {yyval=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2199 "y.tab.c"
    break;

  case 98: /* arg_expression_list_opt: arg_expression_list  */
#line 258 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2205 "y.tab.c"
    break;

  case 99: /* arg_expression_list: assignment_expression  */
#line 263 "oh.y"
    {yyval=makeNode(N_ARG_LIST,yyvsp[0],NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2211 "y.tab.c"
    break;

  case 100: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 265 "oh.y"
    {yyval=makeNodeList(N_ARG_LIST,yyvsp[-2],yyvsp[0]);}
#line 2217 "y.tab.c"
    break;

  case 101: /* unary_expression: postfix_expression  */
#line 269 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2223 "y.tab.c"
    break;

  case 102: /* unary_expression: PLUSPLUS unary_expression  */
#line 270 "oh.y"
                                            {yyval=makeNode(N_EXP_PRE_INC,NIL,yyvsp[0],NIL);}
#line 2229 "y.tab.c"
    break;

  case 103: /* unary_expression: MINUSMINUS unary_expression  */
#line 271 "oh.y"
                                            {yyval=makeNode(N_EXP_PRE_DEC,NIL,yyvsp[0],NIL);}
#line 2235 "y.tab.c"
    break;

  case 104: /* unary_expression: AMP cast_expression  */
#line 272 "oh.y"
                                            {yyval=makeNode(N_EXP_AMP,NIL,yyvsp[0],NIL);}
#line 2241 "y.tab.c"
    break;

  case 105: /* unary_expression: STAR cast_expression  */
#line 273 "oh.y"
                                            {yyval=makeNode(N_EXP_STAR,NIL,yyvsp[0],NIL);}
#line 2247 "y.tab.c"
    break;

  case 106: /* unary_expression: EXCL cast_expression  */
#line 274 "oh.y"
                                            {yyval=makeNode(N_EXP_NOT,NIL,yyvsp[0],NIL);}
#line 2253 "y.tab.c"
    break;

  case 107: /* unary_expression: MINUS cast_expression  */
#line 275 "oh.y"
                                            {yyval=makeNode(N_EXP_MINUS,NIL,yyvsp[0],NIL);}
#line 2259 "y.tab.c"
    break;

  case 108: /* unary_expression: PLUS cast_expression  */
#line 276 "oh.y"
                                            {yyval=makeNode(N_EXP_PLUS,NIL,yyvsp[0],NIL);}
#line 2265 "y.tab.c"
    break;

  case 109: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 277 "oh.y"
                                            {yyval=makeNode(N_EXP_SIZE_EXP,NIL,yyvsp[0],NIL);}
#line 2271 "y.tab.c"
    break;

  case 110: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 278 "oh.y"
                                            {yyval=makeNode(N_EXP_SIZE_TYPE,NIL,yyvsp[-1],NIL);}
#line 2277 "y.tab.c"
    break;

  case 111: /* cast_expression: unary_expression  */
#line 282 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2283 "y.tab.c"
    break;

  case 112: /* cast_expression: LP type_name RP cast_expression  */
#line 283 "oh.y"
                                            {yyval=makeNode(N_EXP_CAST,yyvsp[-2],NIL,yyvsp[0]);}
#line 2289 "y.tab.c"
    break;

  case 113: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 288 "oh.y"
                                            {yyval=setTypeNameSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2295 "y.tab.c"
    break;

  case 114: /* multiplicative_expression: cast_expression  */
#line 292 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2301 "y.tab.c"
    break;

  case 115: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 294 "oh.y"
                                            {yyval=makeNode(N_EXP_MUL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2307 "y.tab.c"
    break;

  case 116: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 296 "oh.y"
                                            {yyval=makeNode(N_EXP_DIV,yyvsp[-2],NIL,yyvsp[0]);}
#line 2313 "y.tab.c"
    break;

  case 117: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 298 "oh.y"
                                            {yyval=makeNode(N_EXP_MOD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2319 "y.tab.c"
    break;

  case 118: /* additive_expression: multiplicative_expression  */
#line 302 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2325 "y.tab.c"
    break;

  case 119: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 304 "oh.y"
                                            {yyval=makeNode(N_EXP_ADD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2331 "y.tab.c"
    break;

  case 120: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 306 "oh.y"
                                            {yyval=makeNode(N_EXP_SUB,yyvsp[-2],NIL,yyvsp[0]);}
#line 2337 "y.tab.c"
    break;

  case 121: /* relational_expression: additive_expression  */
#line 310 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2343 "y.tab.c"
    break;

  case 122: /* relational_expression: relational_expression LSS additive_expression  */
#line 312 "oh.y"
                                            {yyval=makeNode(N_EXP_LSS,yyvsp[-2],NIL,yyvsp[0]);}
#line 2349 "y.tab.c"
    break;

  case 123: /* relational_expression: relational_expression GTR additive_expression  */
#line 314 "oh.y"
                                            {yyval=makeNode(N_EXP_GTR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2355 "y.tab.c"
    break;

  case 124: /* relational_expression: relational_expression LEQ additive_expression  */
#line 316 "oh.y"
                                            {yyval=makeNode(N_EXP_LEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2361 "y.tab.c"
    break;

  case 125: /* relational_expression: relational_expression GEQ additive_expression  */
#line 318 "oh.y"
                                            {yyval=makeNode(N_EXP_GEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2367 "y.tab.c"
    break;

  case 126: /* equality_expression: relational_expression  */
#line 322 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2373 "y.tab.c"
    break;

  case 127: /* equality_expression: equality_expression EQL relational_expression  */
#line 324 "oh.y"
                                            {yyval=makeNode(N_EXP_EQL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2379 "y.tab.c"
    break;

  case 128: /* equality_expression: equality_expression NEQ relational_expression  */
#line 326 "oh.y"
                                            {yyval=makeNode(N_EXP_NEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2385 "y.tab.c"
    break;

  case 129: /* logical_and_expression: bitwise_or_expression  */
#line 330 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2391 "y.tab.c"
    break;

  case 130: /* logical_and_expression: logical_and_expression AMPAMP bitwise_or_expression  */
#line 332 "oh.y"
                                            {yyval=makeNode(N_EXP_AND,yyvsp[-2],NIL,yyvsp[0]);}
#line 2397 "y.tab.c"
    break;

  case 131: /* logical_or_expression: logical_and_expression  */
#line 336 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2403 "y.tab.c"
    break;

  case 132: /* logical_or_expression: logical_or_expression BARBAR logical_and_expression  */
#line 338 "oh.y"
                                            {yyval=makeNode(N_EXP_OR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2409 "y.tab.c"
    break;

  case 133: /* bitwise_or_expression: bitwise_xor_expression  */
#line 342 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2415 "y.tab.c"
    break;

  case 134: /* bitwise_xor_expression: bitwise_and_expression  */
#line 346 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2421 "y.tab.c"
    break;

  case 135: /* bitwise_and_expression: equality_expression  */
#line 350 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2427 "y.tab.c"
    break;

  case 136: /* constant_expression: expression  */
#line 354 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2433 "y.tab.c"
    break;

  case 137: /* expression: assignment_expression  */
#line 358 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2439 "y.tab.c"
    break;

  case 138: /* statement: labeled_statement  */
#line 362 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2445 "y.tab.c"
    break;

  case 139: /* statement: compound_statement  */
#line 363 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2451 "y.tab.c"
    break;

  case 140: /* statement: expression_statement  */
#line 364 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2457 "y.tab.c"
    break;

  case 141: /* statement: selection_statement  */
#line 365 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2463 "y.tab.c"
    break;

  case 142: /* statement: iteration_statement  */
#line 366 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2469 "y.tab.c"
    break;

  case 143: /* statement: jump_statement  */
#line 367 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2475 "y.tab.c"
    break;

  case 144: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 372 "oh.y"
                                            {yyval=makeNode(N_STMT_LABEL_CASE,yyvsp[-2],NIL,yyvsp[0]);}
#line 2481 "y.tab.c"
    break;

  case 145: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 374 "oh.y"
                                            {yyval=makeNode(N_STMT_LABEL_DEFAULT,NIL,yyvsp[0],NIL);}
#line 2487 "y.tab.c"
    break;

  case 146: /* @10: %empty  */
#line 378 "oh.y"
         {yyval=current_id; current_level++;}
#line 2493 "y.tab.c"
    break;

  case 147: /* compound_statement: LR @10 declaration_list_opt statement_list_opt RR  */
#line 379 "oh.y"
    {checkForwardReference(); yyval=makeNode(N_STMT_COMPOUND,yyvsp[-2],NIL,yyvsp[-1]); current_id=yyvsp[-3]; current_level--;}
#line 2499 "y.tab.c"
    break;

  case 148: /* declaration_list_opt: %empty  */
#line 383 "oh.y"
                                            {yyval=NIL;}
#line 2505 "y.tab.c"
    break;

  case 149: /* declaration_list_opt: declaration_list  */
#line 384 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2511 "y.tab.c"
    break;

  case 150: /* declaration_list: declaration  */
#line 387 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2517 "y.tab.c"
    break;

  case 151: /* declaration_list: declaration_list declaration  */
#line 388 "oh.y"
                                            {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 2523 "y.tab.c"
    break;

  case 152: /* statement_list_opt: %empty  */
#line 392 "oh.y"
                                            {yyval=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2529 "y.tab.c"
    break;

  case 153: /* statement_list_opt: statement_list  */
#line 393 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2535 "y.tab.c"
    break;

  case 154: /* statement_list: statement  */
#line 396 "oh.y"
                                            {yyval=makeNode(N_STMT_LIST,yyvsp[0],NIL,
    makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2542 "y.tab.c"
    break;

  case 155: /* statement_list: statement_list statement  */
#line 398 "oh.y"
                                            {yyval=makeNodeList(N_STMT_LIST,yyvsp[-1],yyvsp[0]);}
#line 2548 "y.tab.c"
    break;

  case 156: /* expression_statement: SEMICOLON  */
#line 402 "oh.y"
                                            {yyval=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2554 "y.tab.c"
    break;

  case 157: /* expression_statement: expression SEMICOLON  */
#line 403 "oh.y"
                                            {yyval=makeNode(N_STMT_EXPRESSION,NIL,yyvsp[-1],NIL);}
#line 2560 "y.tab.c"
    break;

  case 158: /* selection_statement: IF_SYM LP expression RP statement  */
#line 407 "oh.y"
                                            {yyval=makeNode(N_STMT_IF,yyvsp[-2],NIL,yyvsp[0]);}
#line 2566 "y.tab.c"
    break;

  case 159: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 409 "oh.y"
                                            {yyval=makeNode(N_STMT_IF_ELSE,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2572 "y.tab.c"
    break;

  case 160: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 410 "oh.y"
                                            {yyval=makeNode(N_STMT_SWITCH,yyvsp[-2],NIL,yyvsp[0]);}
#line 2578 "y.tab.c"
    break;

  case 161: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 414 "oh.y"
                                            {yyval=makeNode(N_STMT_WHILE,yyvsp[-2],NIL,yyvsp[0]);}
#line 2584 "y.tab.c"
    break;

  case 162: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 416 "oh.y"
                                            {yyval=makeNode(N_STMT_DO,yyvsp[-5],NIL,yyvsp[-2]);}
#line 2590 "y.tab.c"
    break;

  case 163: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 418 "oh.y"
                                            {yyval=makeNode(N_STMT_FOR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2596 "y.tab.c"
    break;

  case 164: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 423 "oh.y"
                                            {yyval=makeNode(N_FOR_EXP,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2602 "y.tab.c"
    break;

  case 165: /* expression_opt: %empty  */
#line 427 "oh.y"
                                            {yyval=NIL;}
#line 2608 "y.tab.c"
    break;

  case 166: /* expression_opt: expression  */
#line 428 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2614 "y.tab.c"
    break;

  case 167: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 432 "oh.y"
                                            {yyval=makeNode(N_STMT_RETURN,NIL,yyvsp[-1],NIL);}
#line 2620 "y.tab.c"
    break;

  case 168: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 433 "oh.y"
                                            {yyval=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2626 "y.tab.c"
    break;

  case 169: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 434 "oh.y"
                                            {yyval=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2632 "y.tab.c"
    break;

  case 170: /* assignment_expression: conditional_expression  */
#line 438 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2638 "y.tab.c"
    break;

  case 171: /* assignment_expression: unary_expression ASSIGN expression  */
#line 439 "oh.y"
                                            {yyval=makeNode(N_EXP_ASSIGN,yyvsp[-2],NIL,yyvsp[0]);}
#line 2644 "y.tab.c"
    break;

  case 172: /* conditional_expression: logical_or_expression  */
#line 443 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2650 "y.tab.c"
    break;


#line 2654 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 446 "oh.y"


extern char *yytext;

int main(int argc, char **argv) {
    initialize();
    yyparse();
    if(syntax_err) exit(1);
    print_ast(root);
    printf("성공적으로 파싱을 마쳤습니다.\n프로그램을 종료합니다.\n");
}

int yyerror(char *s) {
    fprintf(stderr, "에러 발생 : %s , %s\n", s, yytext);
    exit(1);
}

int yywrap() {
    return (1);
}
