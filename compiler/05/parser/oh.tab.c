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

    #include <stdio.h>
    #include <stdlib.h>
    #include "type.h"
    #include "oh.h"
    
    extern char *yytext;
    extern int line_no, syntax_err;
	extern A_NODE *root;
	extern A_ID *current_id;
	extern int current_level;
	extern A_TYPE *int_type, *float_type, *char_type, *void_type, *string_type;

    int yyerror(char *s);
    int yylex();
    int yywrap();

#line 92 "oh.tab.c"

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

#include "oh.tab.h"
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
  YYSYMBOL_64_2 = 64,                      /* @2  */
  YYSYMBOL_declaration = 65,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 66,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 67,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list_opt = 68,  /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 69,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 70,           /* init_declarator  */
  YYSYMBOL_initializer = 71,               /* initializer  */
  YYSYMBOL_initializer_list = 72,          /* initializer_list  */
  YYSYMBOL_type_specifier = 73,            /* type_specifier  */
  YYSYMBOL_struct_specifier = 74,          /* struct_specifier  */
  YYSYMBOL_75_3 = 75,                      /* @3  */
  YYSYMBOL_76_4 = 76,                      /* @4  */
  YYSYMBOL_struct_or_union = 77,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 78,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 79,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 80,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 81,         /* struct_declarator  */
  YYSYMBOL_enum_specifier = 82,            /* enum_specifier  */
  YYSYMBOL_83_5 = 83,                      /* @5  */
  YYSYMBOL_84_6 = 84,                      /* @6  */
  YYSYMBOL_enumerator_list = 85,           /* enumerator_list  */
  YYSYMBOL_enumerator = 86,                /* enumerator  */
  YYSYMBOL_87_7 = 87,                      /* @7  */
  YYSYMBOL_declarator = 88,                /* declarator  */
  YYSYMBOL_pointer = 89,                   /* pointer  */
  YYSYMBOL_direct_declarator = 90,         /* direct_declarator  */
  YYSYMBOL_constant_expression_opt = 91,   /* constant_expression_opt  */
  YYSYMBOL_parameter_type_list_opt = 92,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 93,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 94,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 95,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 96,   /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 97,       /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 98, /* direct_abstract_declarator  */
  YYSYMBOL_primary_expression = 99,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 100,       /* postfix_expression  */
  YYSYMBOL_arg_expression_list_opt = 101,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 102,      /* arg_expression_list  */
  YYSYMBOL_unary_expression = 103,         /* unary_expression  */
  YYSYMBOL_cast_expression = 104,          /* cast_expression  */
  YYSYMBOL_type_name = 105,                /* type_name  */
  YYSYMBOL_multiplicative_expression = 106, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 107,      /* additive_expression  */
  YYSYMBOL_relational_expression = 108,    /* relational_expression  */
  YYSYMBOL_equality_expression = 109,      /* equality_expression  */
  YYSYMBOL_logical_and_expression = 110,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 111,    /* logical_or_expression  */
  YYSYMBOL_constant_expression = 112,      /* constant_expression  */
  YYSYMBOL_expression = 113,               /* expression  */
  YYSYMBOL_statement = 114,                /* statement  */
  YYSYMBOL_labeled_statement = 115,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 116,       /* compound_statement  */
  YYSYMBOL_declaration_list_opt = 117,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 118,         /* declaration_list  */
  YYSYMBOL_statement_list_opt = 119,       /* statement_list_opt  */
  YYSYMBOL_statement_list = 120,           /* statement_list  */
  YYSYMBOL_expression_statement = 121,     /* expression_statement  */
  YYSYMBOL_selection_statement = 122,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 123,      /* iteration_statement  */
  YYSYMBOL_for_expression = 124,           /* for_expression  */
  YYSYMBOL_expression_opt = 125,           /* expression_opt  */
  YYSYMBOL_jump_statement = 126,           /* jump_statement  */
  YYSYMBOL_assignment_expression = 127     /* assignment_expression  */
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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   512

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  290

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
       0,    33,    33,    37,    38,    43,    44,    48,    48,    50,
      50,    55,    60,    61,    62,    64,    69,    70,    71,    75,
      76,    80,    81,    86,    87,    91,    92,    96,    98,   102,
     103,   104,   108,   108,   110,   110,   112,   116,   117,   121,
     122,   127,   132,   133,   138,   143,   142,   145,   145,   147,
     152,   153,   157,   160,   159,   165,   166,   170,   171,   175,
     176,   177,   179,   184,   185,   189,   190,   194,   195,   200,
     201,   206,   207,   213,   214,   218,   219,   220,   224,   225,
     226,   227,   229,   234,   235,   236,   237,   238,   239,   244,
     245,   246,   248,   249,   250,   251,   255,   256,   260,   262,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     280,   281,   285,   290,   291,   293,   295,   300,   301,   303,
     308,   309,   311,   313,   315,   320,   321,   323,   328,   329,
     334,   335,   340,   344,   345,   349,   350,   351,   352,   353,
     354,   358,   360,   365,   370,   371,   374,   375,   379,   380,
     383,   385,   389,   390,   394,   395,   397,   401,   402,   404,
     409,   414,   415,   419,   420,   421,   425,   426,   427
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
  "function_definition", "@1", "@2", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier", "struct_specifier",
  "@3", "@4", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_specifier", "@5", "@6", "enumerator_list", "enumerator", "@7",
  "declarator", "pointer", "direct_declarator", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator",
  "primary_expression", "postfix_expression", "arg_expression_list_opt",
  "arg_expression_list", "unary_expression", "cast_expression",
  "type_name", "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "constant_expression", "expression",
  "statement", "labeled_statement", "compound_statement",
  "declaration_list_opt", "declaration_list", "statement_list_opt",
  "statement_list", "expression_statement", "selection_statement",
  "iteration_statement", "for_expression", "expression_opt",
  "jump_statement", "assignment_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-213)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-54)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     444,  -213,  -213,  -213,    32,  -213,  -213,  -213,  -213,    39,
     -10,    65,   444,  -213,  -213,  -213,    39,   244,   244,  -213,
      41,  -213,  -213,    22,   114,    36,    61,    34,  -213,  -213,
    -213,    35,    77,  -213,    -3,  -213,  -213,    89,   111,   129,
     114,   244,   334,   132,   173,  -213,  -213,    39,   304,   129,
     138,   136,   244,  -213,    92,    95,  -213,    19,  -213,  -213,
    -213,  -213,  -213,  -213,   360,   390,   390,   278,   334,   334,
     334,   334,   334,   147,  -213,   434,  -213,  -213,    64,    53,
      88,   108,   160,   146,  -213,   173,   140,    46,  -213,  -213,
     142,   304,  -213,  -213,  -213,   136,    39,    37,  -213,  -213,
      39,   224,   244,   410,   334,  -213,    31,  -213,  -213,   124,
    -213,  -213,   244,   278,  -213,   334,  -213,  -213,     6,   143,
     158,  -213,   161,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,   199,   334,   334,   200,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,    58,   148,
    -213,   173,  -213,   115,   135,    44,  -213,  -213,  -213,  -213,
     150,   334,   162,   169,   224,   178,   179,   334,   181,   184,
    -213,   170,  -213,  -213,  -213,   182,   224,  -213,  -213,  -213,
    -213,  -213,   185,   193,   197,   124,   244,   334,  -213,   205,
     463,   141,  -213,   334,   334,  -213,  -213,   206,   202,   183,
      -7,  -213,   212,  -213,  -213,  -213,  -213,    64,    64,    53,
      53,    53,    53,    88,    88,   108,   160,  -213,   334,  -213,
    -213,   304,  -213,    39,  -213,  -213,   210,  -213,   224,   230,
     334,   334,  -213,   203,   334,   334,  -213,  -213,  -213,  -213,
    -213,  -213,   218,   217,  -213,  -213,  -213,  -213,   334,   334,
     334,  -213,  -213,  -213,  -213,   224,  -213,   222,   231,   208,
     234,  -213,   235,   237,  -213,  -213,  -213,  -213,   219,  -213,
     334,   224,   334,   224,   224,   224,   334,   248,  -213,   216,
     274,  -213,  -213,  -213,   236,   334,   224,  -213,  -213,  -213
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    59,    31,    16,    47,    17,    37,    18,    38,     0,
      57,     0,     2,     3,     5,     6,    19,    13,    12,    29,
      34,    30,     9,     0,    56,    49,     0,     0,    58,     1,
       4,     0,    20,    21,    23,    15,    14,    36,     0,     0,
      55,    65,    63,     0,     0,    60,    11,     0,     0,     0,
       0,     0,   144,    10,    73,     0,    66,    67,    69,    83,
      85,    84,    87,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,   100,   110,   113,   117,   120,
     125,   128,   130,   132,    64,     0,    52,     0,    50,    22,
      23,     0,    24,    25,     8,     0,     0,     0,    39,   146,
      19,   148,   145,    65,    63,    71,    75,    72,    74,    76,
      62,    68,     0,     0,   108,     0,   101,   102,    73,   110,
       0,   133,     0,   105,   104,   103,   107,   106,    61,    94,
      95,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,    27,     0,     0,     0,    42,    44,    35,    40,
       0,     0,     0,     0,     0,     0,     0,   161,     0,     0,
     152,     0,   150,   135,   136,     0,   149,   137,   138,   139,
     140,   147,     0,     0,     0,    77,    65,    63,    70,     0,
      65,    75,   112,     0,     0,    88,    93,     0,    97,   110,
     166,    98,     0,    92,   114,   115,   116,   118,   119,   121,
     122,   123,   124,   126,   127,   129,   131,    46,     0,    51,
      26,     0,    33,     0,    41,   165,     0,   164,     0,     0,
     161,     0,   162,     0,     0,     0,   153,   143,   151,    80,
      78,    79,     0,     0,   109,   134,   111,    91,     0,     0,
       0,    90,    54,    28,    43,     0,   142,     0,     0,     0,
       0,   163,     0,     0,    82,    81,    99,   167,     0,   141,
       0,     0,   161,     0,     0,     0,     0,     0,   159,     0,
     154,   156,   157,   168,     0,   161,     0,   158,   160,   155
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -213,  -213,  -213,   279,  -213,  -213,  -213,   -39,    15,  -213,
    -213,  -213,   245,   -84,  -213,   -20,  -213,  -213,  -213,  -213,
     198,   -71,  -213,    72,  -213,  -213,  -213,   211,   153,  -213,
      -4,    -2,    -9,   -81,   -37,  -213,  -213,   189,   190,   -79,
     -97,  -213,  -213,  -213,  -213,   -64,   -50,   201,    30,     5,
      50,   151,   166,  -126,   -31,   -57,  -148,  -213,    -1,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -201,  -213,  -212
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    49,    39,    15,    54,    17,
      31,    32,    33,    92,   153,    18,    19,    50,    38,    20,
      97,    98,   155,   156,    21,    43,    26,    87,    88,   149,
      22,    23,    24,    73,   182,    56,    57,    58,   107,   108,
     109,    74,    75,   197,   198,    76,    77,   120,    78,    79,
      80,    81,    82,    83,   121,   171,   172,   173,   174,   101,
     102,   175,   176,   177,   178,   179,   258,   233,   180,   201
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     114,   116,   117,   119,    55,    27,   200,   152,    28,   185,
     122,    84,    34,    99,    40,    16,   229,    93,   123,   124,
     125,   126,   127,   184,   183,     1,   159,    16,   238,   259,
     147,    96,    35,    36,     1,    25,   266,   119,    53,    10,
      -7,     2,     1,    90,    37,   190,   250,   104,    94,   119,
     105,   119,   106,     4,    48,    10,   122,   111,   122,     6,
      93,     9,     8,   181,   283,    29,   112,   100,   199,   119,
     103,   279,   104,    84,    45,    96,   202,    96,     9,   -45,
     256,   158,   118,   159,   288,   204,   205,   206,    10,    46,
     150,   223,   157,   151,   185,     1,    90,    40,   224,    27,
     119,   106,   217,   119,    44,   151,   243,   269,   138,   139,
     232,   183,   119,   135,   136,   137,   191,   100,   140,   141,
     142,   143,   200,   278,    47,   280,   281,   282,   118,   119,
     226,   103,   -32,   104,    96,   110,   245,   253,   289,     2,
       2,    10,   144,   145,   246,   209,   210,   211,   212,   242,
     200,     4,     4,    41,    51,    42,    84,     6,     6,   220,
       8,     8,   221,   186,   119,   187,   119,   119,   207,   208,
     119,   119,    52,   232,   260,    85,    86,   262,   263,   222,
     190,    95,   104,   147,   199,   119,   119,   252,   191,   128,
      93,   119,   267,   268,   213,   214,   146,   -53,   194,    48,
     193,   195,   196,   203,   225,   218,   119,   119,   119,   119,
     119,   119,   199,   277,   228,   232,   227,   230,   231,   157,
     234,   119,   119,   235,   236,   239,   237,    59,   232,    60,
      61,    62,    63,   240,   160,   161,   162,   163,   164,   241,
     249,   165,   166,   167,    64,   244,   247,   168,     2,   248,
     169,    65,    66,     3,   251,   255,   257,   261,   264,   265,
       4,   270,   272,    67,   276,     5,     6,    52,     7,     8,
     285,   271,    68,    69,   273,   274,    70,   275,   170,    71,
      72,    59,     2,    60,    61,    62,    63,     3,   284,   286,
     287,    30,    89,   154,     4,   254,   148,   215,    64,     5,
       6,   188,     7,     8,   219,    65,    66,    59,   192,    60,
      61,    62,    63,   216,   189,     0,     0,    67,     0,     0,
       0,     0,     0,     0,    64,     0,    68,    69,     0,     0,
      70,    65,    66,    71,    72,     0,     0,    59,     0,    60,
      61,    62,    63,    67,     0,     0,     0,    91,     0,     0,
       0,     0,    68,    69,    64,     0,    70,     0,     0,    71,
      72,    65,    66,    59,     0,    60,    61,    62,    63,     0,
       0,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      64,     0,    68,    69,     0,     0,    70,    65,    66,    71,
      72,     0,     0,    59,     0,    60,    61,    62,    63,   113,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      64,     0,    70,     1,     2,    71,    72,    65,    66,     3,
       0,     0,     0,     0,     0,     0,     4,     0,     0,   115,
       0,     5,     6,     0,     7,     8,     0,     0,    68,    69,
       0,     0,    70,     0,     0,    71,    72,     1,     2,   103,
       0,   104,     0,     3,     0,     0,     0,     0,     0,    10,
       4,   129,   130,   131,     0,     5,     6,     2,     7,     8,
       0,     0,     3,   132,     0,   133,     0,     0,     0,     4,
     134,     0,     0,     9,     5,     6,     0,     7,     8,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,   190,     0,   104,     0,     0,     0,     0,     0,
       0,     0,    10
};

static const yytype_int16 yycheck[] =
{
      64,    65,    66,    67,    41,     9,   132,    91,    10,   106,
      67,    42,    16,    52,    23,     0,   164,    48,    68,    69,
      70,    71,    72,   104,   103,     3,    97,    12,   176,   230,
      37,    51,    17,    18,     3,     3,   248,   101,    39,    49,
      43,     4,     3,    47,     3,    39,    53,    41,    49,   113,
      54,   115,    54,    16,    57,    49,   113,    38,   115,    22,
      91,    39,    25,   102,   276,     0,    47,    52,   132,   133,
      39,   272,    41,   104,    40,    95,   133,    97,    39,    43,
     228,    44,    67,   154,   285,   135,   136,   137,    49,    54,
      44,    47,    96,    47,   191,     3,   100,   106,    54,   103,
     164,   103,    44,   167,    43,    47,   187,   255,    55,    56,
     167,   190,   176,    49,    50,    51,   118,   102,    30,    31,
      32,    33,   248,   271,    47,   273,   274,   275,   113,   193,
     161,    39,    43,    41,   154,    40,   193,   221,   286,     4,
       4,    49,    34,    35,   194,   140,   141,   142,   143,   186,
     276,    16,    16,    39,    43,    41,   187,    22,    22,    44,
      25,    25,    47,    39,   228,    41,   230,   231,   138,   139,
     234,   235,    43,   230,   231,    43,     3,   234,   235,    44,
      39,    43,    41,    37,   248,   249,   250,   218,   190,    42,
     221,   255,   249,   250,   144,   145,    36,    57,    40,    57,
      57,    40,     3,     3,    54,    57,   270,   271,   272,   273,
     274,   275,   276,   270,    45,   272,    54,    39,    39,   223,
      39,   285,   286,    39,    54,    40,    44,     3,   285,     5,
       6,     7,     8,    40,    10,    11,    12,    13,    14,    42,
      57,    17,    18,    19,    20,    40,    40,    23,     4,    47,
      26,    27,    28,     9,    42,    45,    26,    54,    40,    42,
      16,    39,    54,    39,    45,    21,    22,    43,    24,    25,
      54,    40,    48,    49,    40,    40,    52,    40,    54,    55,
      56,     3,     4,     5,     6,     7,     8,     9,    40,    15,
      54,    12,    47,    95,    16,   223,    85,   146,    20,    21,
      22,   112,    24,    25,   151,    27,    28,     3,   118,     5,
       6,     7,     8,   147,   113,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    48,    49,    -1,    -1,
      52,    27,    28,    55,    56,    -1,    -1,     3,    -1,     5,
       6,     7,     8,    39,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    48,    49,    20,    -1,    52,    -1,    -1,    55,
      56,    27,    28,     3,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    48,    49,    -1,    -1,    52,    27,    28,    55,
      56,    -1,    -1,     3,    -1,     5,     6,     7,     8,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      20,    -1,    52,     3,     4,    55,    56,    27,    28,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    39,
      -1,    21,    22,    -1,    24,    25,    -1,    -1,    48,    49,
      -1,    -1,    52,    -1,    -1,    55,    56,     3,     4,    39,
      -1,    41,    -1,     9,    -1,    -1,    -1,    -1,    -1,    49,
      16,    27,    28,    29,    -1,    21,    22,     4,    24,    25,
      -1,    -1,     9,    39,    -1,    41,    -1,    -1,    -1,    16,
      46,    -1,    -1,    39,    21,    22,    -1,    24,    25,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     9,    16,    21,    22,    24,    25,    39,
      49,    59,    60,    61,    62,    65,    66,    67,    73,    74,
      77,    82,    88,    89,    90,     3,    84,    88,    89,     0,
      61,    68,    69,    70,    88,    66,    66,     3,    76,    64,
      90,    39,    41,    83,    43,    40,    54,    47,    57,    63,
      75,    43,    43,   116,    66,    92,    93,    94,    95,     3,
       5,     6,     7,     8,    20,    27,    28,    39,    48,    49,
      52,    55,    56,    91,    99,   100,   103,   104,   106,   107,
     108,   109,   110,   111,   112,    43,     3,    85,    86,    70,
      88,    43,    71,   112,   116,    43,    73,    78,    79,    65,
      66,   117,   118,    39,    41,    88,    89,    96,    97,    98,
      40,    38,    47,    39,   103,    39,   103,   103,    66,   103,
     105,   112,   113,   104,   104,   104,   104,   104,    42,    27,
      28,    29,    39,    41,    46,    49,    50,    51,    55,    56,
      30,    31,    32,    33,    34,    35,    36,    37,    85,    87,
      44,    47,    71,    72,    78,    80,    81,    88,    44,    79,
      10,    11,    12,    13,    14,    17,    18,    19,    23,    26,
      54,   113,   114,   115,   116,   119,   120,   121,   122,   123,
     126,    65,    92,    97,    91,    98,    39,    41,    95,   105,
      39,    89,    96,    57,    40,    40,     3,   101,   102,   103,
     111,   127,   113,     3,   104,   104,   104,   106,   106,   107,
     107,   107,   107,   108,   108,   109,   110,    44,    57,    86,
      44,    47,    44,    47,    54,    54,   112,    54,    45,   114,
      39,    39,   113,   125,    39,    39,    54,    44,   114,    40,
      40,    42,    92,    91,    40,   113,   104,    40,    47,    57,
      53,    42,   112,    71,    81,    45,   114,    26,   124,   125,
     113,    54,   113,   113,    40,    42,   127,   113,   113,   114,
      39,    40,    54,    40,    40,    40,    45,   113,   114,   125,
     114,   114,   114,   127,    40,    54,    15,    54,   125,   114
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    63,    62,    64,
      62,    65,    66,    66,    66,    66,    67,    67,    67,    68,
      68,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    73,    75,    74,    76,    74,    74,    77,    77,    78,
      78,    79,    80,    80,    81,    83,    82,    84,    82,    82,
      85,    85,    86,    87,    86,    88,    88,    89,    89,    90,
      90,    90,    90,    91,    91,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    97,    98,    98,
      98,    98,    98,    99,    99,    99,    99,    99,    99,   100,
     100,   100,   100,   100,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     104,   104,   105,   106,   106,   106,   106,   107,   107,   107,
     108,   108,   108,   108,   108,   109,   109,   109,   110,   110,
     111,   111,   112,   113,   113,   114,   114,   114,   114,   114,
     114,   115,   115,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   122,   122,   123,   123,   123,
     124,   125,   125,   126,   126,   126,   127,   127,   127
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     3,     1,     1,     2,     2,     1,     1,     1,     0,
       1,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     0,     6,     0,     5,     2,     1,     1,     1,
       2,     3,     1,     3,     1,     0,     6,     0,     5,     2,
       1,     3,     1,     0,     4,     2,     1,     1,     2,     1,
       3,     4,     4,     0,     1,     0,     1,     1,     2,     1,
       3,     2,     2,     0,     1,     1,     1,     2,     3,     3,
       3,     4,     4,     1,     1,     1,     1,     1,     3,     1,
       4,     4,     3,     3,     2,     2,     0,     1,     1,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       1,     4,     2,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     4,     3,     4,     0,     1,     1,     2,     0,     1,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     1,     3,     5
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
                                            {root=makeNode(N_PROGRAM,NIL,yyvsp[0],NIL);}
#line 1474 "oh.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 37 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1480 "oh.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 39 "oh.y"
    {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1486 "oh.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 43 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1492 "oh.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 44 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1498 "oh.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 48 "oh.y"
                                            {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 1504 "oh.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 49 "oh.y"
                                            {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]);}
#line 1510 "oh.tab.c"
    break;

  case 9: /* @2: %empty  */
#line 50 "oh.y"
                                            {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],makeSpecifier(int_type,0));}
#line 1516 "oh.tab.c"
    break;

  case 10: /* function_definition: declarator @2 compound_statement  */
#line 51 "oh.y"
                                            {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]);}
#line 1522 "oh.tab.c"
    break;

  case 11: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 56 "oh.y"
                                            {yyval=setDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1528 "oh.tab.c"
    break;

  case 12: /* declaration_specifiers: type_specifier  */
#line 60 "oh.y"
                                            {yyval=makeSpecifier(yyvsp[0],0);}
#line 1534 "oh.tab.c"
    break;

  case 13: /* declaration_specifiers: storage_class_specifier  */
#line 61 "oh.y"
                                            {yyval=makeSpecifier(0,yyvsp[0]);}
#line 1540 "oh.tab.c"
    break;

  case 14: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 63 "oh.y"
                                            {yyval=updateSpecifier(yyvsp[0],yyvsp[-1],0);}
#line 1546 "oh.tab.c"
    break;

  case 15: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 65 "oh.y"
                                            {yyval=updateSpecifier(yyvsp[0],0,yyvsp[-1]);}
#line 1552 "oh.tab.c"
    break;

  case 16: /* storage_class_specifier: AUTO_SYM  */
#line 69 "oh.y"
                                            {yyval=S_AUTO;}
#line 1558 "oh.tab.c"
    break;

  case 17: /* storage_class_specifier: STATIC_SYM  */
#line 70 "oh.y"
                                            {yyval=S_STATIC;}
#line 1564 "oh.tab.c"
    break;

  case 18: /* storage_class_specifier: TYPEDEF_SYM  */
#line 71 "oh.y"
                                            {yyval=S_TYPEDEF;}
#line 1570 "oh.tab.c"
    break;

  case 19: /* init_declarator_list_opt: %empty  */
#line 75 "oh.y"
                                            {yyval=NIL;}
#line 1576 "oh.tab.c"
    break;

  case 20: /* init_declarator_list_opt: init_declarator_list  */
#line 76 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1582 "oh.tab.c"
    break;

  case 21: /* init_declarator_list: init_declarator  */
#line 80 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1588 "oh.tab.c"
    break;

  case 22: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 82 "oh.y"
                                            {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1594 "oh.tab.c"
    break;

  case 23: /* init_declarator: declarator  */
#line 86 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1600 "oh.tab.c"
    break;

  case 24: /* init_declarator: declarator ASSIGN initializer  */
#line 87 "oh.y"
                                            {yyval=setDeclaratorInit(yyvsp[-2],yyvsp[0]);}
#line 1606 "oh.tab.c"
    break;

  case 25: /* initializer: constant_expression  */
#line 91 "oh.y"
                                            {yyval=makeNode(N_INIT_LIST_ONE,NIL,yyvsp[0],NIL);}
#line 1612 "oh.tab.c"
    break;

  case 26: /* initializer: LR initializer_list RR  */
#line 92 "oh.y"
                                            {yyval=yyvsp[-1];}
#line 1618 "oh.tab.c"
    break;

  case 27: /* initializer_list: initializer  */
#line 97 "oh.y"
    {yyval=makeNode(N_INIT_LIST_ONE,yyvsp[0],NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 1624 "oh.tab.c"
    break;

  case 28: /* initializer_list: initializer_list COMMA initializer  */
#line 98 "oh.y"
                                            {yyval=makeNodeList(N_INIT_LIST,yyvsp[-2],yyvsp[0]);}
#line 1630 "oh.tab.c"
    break;

  case 29: /* type_specifier: struct_specifier  */
#line 102 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1636 "oh.tab.c"
    break;

  case 30: /* type_specifier: enum_specifier  */
#line 103 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1642 "oh.tab.c"
    break;

  case 31: /* type_specifier: TYPE_IDENTIFIER  */
#line 104 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1648 "oh.tab.c"
    break;

  case 32: /* @3: %empty  */
#line 108 "oh.y"
                                            {yyval=setTypeStructOrEnumIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1654 "oh.tab.c"
    break;

  case 33: /* struct_specifier: struct_or_union IDENTIFIER @3 LR struct_declaration_list RR  */
#line 109 "oh.y"
                                            {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1660 "oh.tab.c"
    break;

  case 34: /* @4: %empty  */
#line 110 "oh.y"
                                            {yyval=makeType(yyvsp[0]);}
#line 1666 "oh.tab.c"
    break;

  case 35: /* struct_specifier: struct_or_union @4 LR struct_declaration_list RR  */
#line 111 "oh.y"
                                            {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1672 "oh.tab.c"
    break;

  case 36: /* struct_specifier: struct_or_union IDENTIFIER  */
#line 112 "oh.y"
                                            {yyval=getTypeOfStructOrEnumIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1678 "oh.tab.c"
    break;

  case 37: /* struct_or_union: STRUCT_SYM  */
#line 116 "oh.y"
                                            {yyval=T_STRUCT;}
#line 1684 "oh.tab.c"
    break;

  case 38: /* struct_or_union: UNION_SYM  */
#line 117 "oh.y"
                                            {yyval=T_UNION;}
#line 1690 "oh.tab.c"
    break;

  case 39: /* struct_declaration_list: struct_declaration  */
#line 121 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1696 "oh.tab.c"
    break;

  case 40: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 123 "oh.y"
                                            {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1702 "oh.tab.c"
    break;

  case 41: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 128 "oh.y"
                                            {yyval=setStructDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1708 "oh.tab.c"
    break;

  case 42: /* struct_declarator_list: struct_declarator  */
#line 132 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1714 "oh.tab.c"
    break;

  case 43: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 134 "oh.y"
                                            {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[-1]);}
#line 1720 "oh.tab.c"
    break;

  case 44: /* struct_declarator: declarator  */
#line 138 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1726 "oh.tab.c"
    break;

  case 45: /* @5: %empty  */
#line 143 "oh.y"
    {yyval=setTypeStructOrEnumIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1732 "oh.tab.c"
    break;

  case 46: /* enum_specifier: ENUM_SYM IDENTIFIER @5 LR enumerator_list RR  */
#line 144 "oh.y"
                                            {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1738 "oh.tab.c"
    break;

  case 47: /* @6: %empty  */
#line 145 "oh.y"
                                            {yyval=makeType(T_ENUM);}
#line 1744 "oh.tab.c"
    break;

  case 48: /* enum_specifier: ENUM_SYM @6 LR enumerator_list RR  */
#line 146 "oh.y"
                                            {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1750 "oh.tab.c"
    break;

  case 49: /* enum_specifier: ENUM_SYM IDENTIFIER  */
#line 148 "oh.y"
    {yyval=getTypeOfStructOrEnumIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1756 "oh.tab.c"
    break;

  case 50: /* enumerator_list: enumerator  */
#line 152 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1762 "oh.tab.c"
    break;

  case 51: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 153 "oh.y"
                                            {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1768 "oh.tab.c"
    break;

  case 52: /* enumerator: IDENTIFIER  */
#line 158 "oh.y"
    {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 1774 "oh.tab.c"
    break;

  case 53: /* @7: %empty  */
#line 160 "oh.y"
    {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 1780 "oh.tab.c"
    break;

  case 54: /* enumerator: IDENTIFIER @7 ASSIGN constant_expression  */
#line 161 "oh.y"
                                            {yyval=setDeclaration(yyvsp[-2],yyvsp[0]);}
#line 1786 "oh.tab.c"
    break;

  case 55: /* declarator: pointer direct_declarator  */
#line 165 "oh.y"
                                            {yyval=setDeclaratorElementType(yyvsp[0],yyvsp[-1]);}
#line 1792 "oh.tab.c"
    break;

  case 56: /* declarator: direct_declarator  */
#line 166 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1798 "oh.tab.c"
    break;

  case 57: /* pointer: STAR  */
#line 170 "oh.y"
                                            {yyval=makeType(T_POINTER);}
#line 1804 "oh.tab.c"
    break;

  case 58: /* pointer: STAR pointer  */
#line 171 "oh.y"
                                            {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 1810 "oh.tab.c"
    break;

  case 59: /* direct_declarator: IDENTIFIER  */
#line 175 "oh.y"
                                            {yyval=makeIdentifier(yyvsp[0]);}
#line 1816 "oh.tab.c"
    break;

  case 60: /* direct_declarator: LP declarator RP  */
#line 176 "oh.y"
                                            {yyval=yyvsp[-1];}
#line 1822 "oh.tab.c"
    break;

  case 61: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 178 "oh.y"
    {yyval=setDeclaratorElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 1828 "oh.tab.c"
    break;

  case 62: /* direct_declarator: direct_declarator LP parameter_type_list_opt RP  */
#line 180 "oh.y"
    {yyval=setDeclaratorElementType(yyvsp[-3],setTypeField(makeType(T_FUNC),yyvsp[-1]));}
#line 1834 "oh.tab.c"
    break;

  case 63: /* constant_expression_opt: %empty  */
#line 184 "oh.y"
                                            {yyval=NIL;}
#line 1840 "oh.tab.c"
    break;

  case 64: /* constant_expression_opt: constant_expression  */
#line 185 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1846 "oh.tab.c"
    break;

  case 65: /* parameter_type_list_opt: %empty  */
#line 189 "oh.y"
                                            {yyval=NIL;}
#line 1852 "oh.tab.c"
    break;

  case 66: /* parameter_type_list_opt: parameter_type_list  */
#line 190 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1858 "oh.tab.c"
    break;

  case 67: /* parameter_type_list: parameter_list  */
#line 194 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1864 "oh.tab.c"
    break;

  case 68: /* parameter_type_list: parameter_list DOTDOTDOT  */
#line 196 "oh.y"
    {yyval=linkDeclaratorList(yyvsp[-1],setDeclaratorKind(makeDummyIdentifier(),ID_PARAM));}
#line 1870 "oh.tab.c"
    break;

  case 69: /* parameter_list: parameter_declaration  */
#line 200 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1876 "oh.tab.c"
    break;

  case 70: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 202 "oh.y"
    {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1882 "oh.tab.c"
    break;

  case 71: /* parameter_declaration: declaration_specifiers declarator  */
#line 206 "oh.y"
                                            {yyval=setParameterDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 1888 "oh.tab.c"
    break;

  case 72: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 208 "oh.y"
    {yyval=setParameterDeclaratorSpecifier
        (setDeclaratorType(makeDummyIDentifier(),yyvsp[0]),yyvsp[-1]);}
#line 1895 "oh.tab.c"
    break;

  case 73: /* abstract_declarator_opt: %empty  */
#line 213 "oh.y"
                                            {yyval=0;}
#line 1901 "oh.tab.c"
    break;

  case 74: /* abstract_declarator_opt: abstract_declarator  */
#line 214 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1907 "oh.tab.c"
    break;

  case 75: /* abstract_declarator: pointer  */
#line 218 "oh.y"
                                            {yyval=makeType(T_POINTER);}
#line 1913 "oh.tab.c"
    break;

  case 76: /* abstract_declarator: direct_abstract_declarator  */
#line 219 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1919 "oh.tab.c"
    break;

  case 77: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 220 "oh.y"
                                            {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 1925 "oh.tab.c"
    break;

  case 78: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 224 "oh.y"
                                            {yyval=yyvsp[-1];}
#line 1931 "oh.tab.c"
    break;

  case 79: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 225 "oh.y"
                                            {yyval=setTypeExpr(makeType(T_ARRAY),yyvsp[-1]);}
#line 1937 "oh.tab.c"
    break;

  case 80: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 226 "oh.y"
                                            {yyval=setTypeExpr(makeType(T_FUNC),yyvsp[-1]);}
#line 1943 "oh.tab.c"
    break;

  case 81: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 228 "oh.y"
    {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 1949 "oh.tab.c"
    break;

  case 82: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 230 "oh.y"
    {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_FUNC),yyvsp[-1]));}
#line 1955 "oh.tab.c"
    break;

  case 83: /* primary_expression: IDENTIFIER  */
#line 234 "oh.y"
                                            {yyval=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared(yyvsp[0]),NIL);}
#line 1961 "oh.tab.c"
    break;

  case 84: /* primary_expression: INTEGER_CONSTANT  */
#line 235 "oh.y"
                                            {yyval=makeNode(N_EXP_INT_CONST,NIL,yyvsp[0],NIL);}
#line 1967 "oh.tab.c"
    break;

  case 85: /* primary_expression: FLOAT_CONSTANT  */
#line 236 "oh.y"
                                            {yyval=makeNode(N_EXP_FLOAT_CONST,NIL,yyvsp[0],NIL);}
#line 1973 "oh.tab.c"
    break;

  case 86: /* primary_expression: CHARACTER_CONSTANT  */
#line 237 "oh.y"
                                            {yyval=makeNode(N_EXP_CHAR_CONST,NIL,yyvsp[0],NIL);}
#line 1979 "oh.tab.c"
    break;

  case 87: /* primary_expression: STRING_LITERAL  */
#line 238 "oh.y"
                                            {yyval=makeNode(N_EXP_STRING_LITERAL,NIL,yyvsp[0],NIL);}
#line 1985 "oh.tab.c"
    break;

  case 88: /* primary_expression: LP expression RP  */
#line 239 "oh.y"
                                            {yyval=yyvsp[-1];}
#line 1991 "oh.tab.c"
    break;

  case 89: /* postfix_expression: primary_expression  */
#line 244 "oh.y"
                                            {yyval=yyvsp[0];}
#line 1997 "oh.tab.c"
    break;

  case 90: /* postfix_expression: postfix_expression LB expression RB  */
#line 245 "oh.y"
                                            {yyval=makeNode(N_EXP_ARRAY,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2003 "oh.tab.c"
    break;

  case 91: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 247 "oh.y"
                                            {yyval=makeNode(N_EXP_FUNCTION_CALL,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2009 "oh.tab.c"
    break;

  case 92: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 248 "oh.y"
                                            {yyval=makeNode(N_EXP_STRUCT,yyvsp[-2],NIL,yyvsp[0]);}
#line 2015 "oh.tab.c"
    break;

  case 93: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 249 "oh.y"
                                            {yyval=makeNode(N_EXP_ARROW,yyvsp[-2],NIL,yyvsp[0]);}
#line 2021 "oh.tab.c"
    break;

  case 94: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 250 "oh.y"
                                            {yyval=makeNode(N_EXP_POST_INC,NIL,yyvsp[-1],NIL);}
#line 2027 "oh.tab.c"
    break;

  case 95: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 251 "oh.y"
                                            {yyval=makeNode(N_EXP_POST_DEC,NIL,yyvsp[-1],NIL);}
#line 2033 "oh.tab.c"
    break;

  case 96: /* arg_expression_list_opt: %empty  */
#line 255 "oh.y"
                                            {yyval=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2039 "oh.tab.c"
    break;

  case 97: /* arg_expression_list_opt: arg_expression_list  */
#line 256 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2045 "oh.tab.c"
    break;

  case 98: /* arg_expression_list: assignment_expression  */
#line 261 "oh.y"
    {yyval=makeNode(N_ARG_LIST,yyvsp[0],0,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2051 "oh.tab.c"
    break;

  case 99: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 263 "oh.y"
    {yyval=makeNodeList(N_ARG_LIST,yyvsp[-2],yyvsp[0]);}
#line 2057 "oh.tab.c"
    break;

  case 100: /* unary_expression: postfix_expression  */
#line 267 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2063 "oh.tab.c"
    break;

  case 101: /* unary_expression: PLUSPLUS unary_expression  */
#line 268 "oh.y"
                                            {yyval=makeNode(N_EXP_PRE_INC,NIL,yyvsp[0],NIL);}
#line 2069 "oh.tab.c"
    break;

  case 102: /* unary_expression: MINUSMINUS unary_expression  */
#line 269 "oh.y"
                                            {yyval=makeNode(N_EXP_PRE_DEC,NIL,yyvsp[0],NIL);}
#line 2075 "oh.tab.c"
    break;

  case 103: /* unary_expression: AMP cast_expression  */
#line 270 "oh.y"
                                            {yyval=makeNode(N_EXP_AMP,NIL,yyvsp[0],NIL);}
#line 2081 "oh.tab.c"
    break;

  case 104: /* unary_expression: STAR cast_expression  */
#line 271 "oh.y"
                                            {yyval=makeNode(N_EXP_STAR,NIL,yyvsp[0],NIL);}
#line 2087 "oh.tab.c"
    break;

  case 105: /* unary_expression: EXCL cast_expression  */
#line 272 "oh.y"
                                            {yyval=makeNode(N_EXP_NOT,NIL,yyvsp[0],NIL);}
#line 2093 "oh.tab.c"
    break;

  case 106: /* unary_expression: MINUS cast_expression  */
#line 273 "oh.y"
                                            {yyval=makeNode(N_EXP_MINUS,NIL,yyvsp[0],NIL);}
#line 2099 "oh.tab.c"
    break;

  case 107: /* unary_expression: PLUS cast_expression  */
#line 274 "oh.y"
                                            {yyval=yyvsp[-1];}
#line 2105 "oh.tab.c"
    break;

  case 108: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 275 "oh.y"
                                            {yyval=makeNode(N_EXP_SIZE_EXP,NIL,yyvsp[0],NIL);}
#line 2111 "oh.tab.c"
    break;

  case 109: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 276 "oh.y"
                                            {yyval=makeNode(N_EXP_SIZE_TYPE,NIL,yyvsp[-1],NIL);}
#line 2117 "oh.tab.c"
    break;

  case 110: /* cast_expression: unary_expression  */
#line 280 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2123 "oh.tab.c"
    break;

  case 111: /* cast_expression: LP type_name RP cast_expression  */
#line 281 "oh.y"
                                            {yyval=makeNode(N_EXP_CAST,yyvsp[-2],NIL,yyvsp[0]);}
#line 2129 "oh.tab.c"
    break;

  case 112: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 286 "oh.y"
                                            {yyval=setTypeNameSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2135 "oh.tab.c"
    break;

  case 113: /* multiplicative_expression: cast_expression  */
#line 290 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2141 "oh.tab.c"
    break;

  case 114: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 292 "oh.y"
                                            {yyval=makeNode(N_EXP_MUL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2147 "oh.tab.c"
    break;

  case 115: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 294 "oh.y"
                                            {yyval=makeNode(N_EXP_DIV,yyvsp[-2],NIL,yyvsp[0]);}
#line 2153 "oh.tab.c"
    break;

  case 116: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 296 "oh.y"
                                            {yyval=makeNode(N_EXP_MOD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2159 "oh.tab.c"
    break;

  case 117: /* additive_expression: multiplicative_expression  */
#line 300 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2165 "oh.tab.c"
    break;

  case 118: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 302 "oh.y"
                                            {yyval=makeNode(N_EXP_ADD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2171 "oh.tab.c"
    break;

  case 119: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 304 "oh.y"
                                            {yyval=makeNode(N_EXP_SUB,yyvsp[-2],NIL,yyvsp[0]);}
#line 2177 "oh.tab.c"
    break;

  case 120: /* relational_expression: additive_expression  */
#line 308 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2183 "oh.tab.c"
    break;

  case 121: /* relational_expression: relational_expression LSS additive_expression  */
#line 310 "oh.y"
                                            {yyval=makeNode(N_EXP_LSS,yyvsp[-2],NIL,yyvsp[0]);}
#line 2189 "oh.tab.c"
    break;

  case 122: /* relational_expression: relational_expression GTR additive_expression  */
#line 312 "oh.y"
                                            {yyval=makeNode(N_EXP_GTR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2195 "oh.tab.c"
    break;

  case 123: /* relational_expression: relational_expression LEQ additive_expression  */
#line 314 "oh.y"
                                            {yyval=makeNode(N_EXP_LEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2201 "oh.tab.c"
    break;

  case 124: /* relational_expression: relational_expression GEQ additive_expression  */
#line 316 "oh.y"
                                            {yyval=makeNode(N_EXP_GEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2207 "oh.tab.c"
    break;

  case 125: /* equality_expression: relational_expression  */
#line 320 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2213 "oh.tab.c"
    break;

  case 126: /* equality_expression: equality_expression EQL relational_expression  */
#line 322 "oh.y"
                                            {yyval=makeNode(N_EXP_EQL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2219 "oh.tab.c"
    break;

  case 127: /* equality_expression: equality_expression NEQ relational_expression  */
#line 324 "oh.y"
                                            {yyval=makeNode(N_EXP_NEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2225 "oh.tab.c"
    break;

  case 128: /* logical_and_expression: equality_expression  */
#line 328 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2231 "oh.tab.c"
    break;

  case 129: /* logical_and_expression: logical_and_expression AMPAMP equality_expression  */
#line 330 "oh.y"
                                            {yyval=makeNode(N_EXP_AND,yyvsp[-2],NIL,yyvsp[0]);}
#line 2237 "oh.tab.c"
    break;

  case 130: /* logical_or_expression: logical_and_expression  */
#line 334 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2243 "oh.tab.c"
    break;

  case 131: /* logical_or_expression: logical_or_expression BARBAR logical_and_expression  */
#line 336 "oh.y"
                                            {yyval=makeNode(N_EXP_OR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2249 "oh.tab.c"
    break;

  case 132: /* constant_expression: logical_or_expression  */
#line 340 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2255 "oh.tab.c"
    break;

  case 133: /* expression: constant_expression  */
#line 344 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2261 "oh.tab.c"
    break;

  case 134: /* expression: unary_expression ASSIGN expression  */
#line 345 "oh.y"
                                            {yyval=makeNode(N_EXP_ASSIGN,yyvsp[-2],NIL,yyvsp[0]);}
#line 2267 "oh.tab.c"
    break;

  case 135: /* statement: labeled_statement  */
#line 349 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2273 "oh.tab.c"
    break;

  case 136: /* statement: compound_statement  */
#line 350 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2279 "oh.tab.c"
    break;

  case 137: /* statement: expression_statement  */
#line 351 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2285 "oh.tab.c"
    break;

  case 138: /* statement: selection_statement  */
#line 352 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2291 "oh.tab.c"
    break;

  case 139: /* statement: iteration_statement  */
#line 353 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2297 "oh.tab.c"
    break;

  case 140: /* statement: jump_statement  */
#line 354 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2303 "oh.tab.c"
    break;

  case 141: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 359 "oh.y"
                                            {yyval=makeNode(N_STMT_LABEL_CASE,yyvsp[-2],NIL,yyvsp[0]);}
#line 2309 "oh.tab.c"
    break;

  case 142: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 361 "oh.y"
                                            {yyval=makeNode(N_STMT_LABEL_DEFAULT,NIL,yyvsp[0],NIL);}
#line 2315 "oh.tab.c"
    break;

  case 143: /* compound_statement: LR declaration_list_opt statement_list_opt RR  */
#line 366 "oh.y"
                                            {yyval=makeNode(N_STMT_COMPOUND,yyvsp[-2],NIL,yyvsp[-1]);}
#line 2321 "oh.tab.c"
    break;

  case 144: /* declaration_list_opt: %empty  */
#line 370 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2327 "oh.tab.c"
    break;

  case 145: /* declaration_list_opt: declaration_list  */
#line 371 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2333 "oh.tab.c"
    break;

  case 146: /* declaration_list: declaration  */
#line 374 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2339 "oh.tab.c"
    break;

  case 147: /* declaration_list: declaration_list declaration  */
#line 375 "oh.y"
                                            {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 2345 "oh.tab.c"
    break;

  case 148: /* statement_list_opt: %empty  */
#line 379 "oh.y"
                                            {yyval=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2351 "oh.tab.c"
    break;

  case 149: /* statement_list_opt: statement_list  */
#line 380 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2357 "oh.tab.c"
    break;

  case 150: /* statement_list: statement  */
#line 384 "oh.y"
    {yyval=makeNode(N_STMT_LIST,yyvsp[0],0,makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2363 "oh.tab.c"
    break;

  case 151: /* statement_list: statement_list statement  */
#line 385 "oh.y"
                                            {yyval=makeNodeList(N_STMT_LIST,yyvsp[-1],yyvsp[0]);}
#line 2369 "oh.tab.c"
    break;

  case 152: /* expression_statement: SEMICOLON  */
#line 389 "oh.y"
                                            {yyval=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2375 "oh.tab.c"
    break;

  case 153: /* expression_statement: expression SEMICOLON  */
#line 390 "oh.y"
                                            {yyval=makeNode(N_STMT_EXPRESSION,NIL,yyvsp[-1],NIL);}
#line 2381 "oh.tab.c"
    break;

  case 154: /* selection_statement: IF_SYM LP expression RP statement  */
#line 394 "oh.y"
                                            {yyval=makeNode(N_STMT_IF,yyvsp[-2],NIL,yyvsp[0]);}
#line 2387 "oh.tab.c"
    break;

  case 155: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 396 "oh.y"
                                            {yyval=makeNode(N_STMT_IF_ELSE,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2393 "oh.tab.c"
    break;

  case 156: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 397 "oh.y"
                                            {yyval=makeNode(N_STMT_SWITCH,yyvsp[-2],NIL,yyvsp[0]);}
#line 2399 "oh.tab.c"
    break;

  case 157: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 401 "oh.y"
                                            {yyval=makeNode(N_STMT_WHILE,yyvsp[-2],NIL,yyvsp[0]);}
#line 2405 "oh.tab.c"
    break;

  case 158: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 403 "oh.y"
                                            {yyval=makeNode(N_STMT_DO,yyvsp[-5],NIL,yyvsp[-2]);}
#line 2411 "oh.tab.c"
    break;

  case 159: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 405 "oh.y"
                                            {yyval=makeNode(N_STMT_FOR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2417 "oh.tab.c"
    break;

  case 160: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 410 "oh.y"
                                            {yyval=makeNode(N_FOR_EXP,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2423 "oh.tab.c"
    break;

  case 161: /* expression_opt: %empty  */
#line 414 "oh.y"
                                            {yyval=0;}
#line 2429 "oh.tab.c"
    break;

  case 162: /* expression_opt: expression  */
#line 415 "oh.y"
                                            {yyval=yyvsp[0];}
#line 2435 "oh.tab.c"
    break;

  case 163: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 419 "oh.y"
                                            {yyval=makeNode(N_STMT_RETURN,NIL,yyvsp[-1],NIL);}
#line 2441 "oh.tab.c"
    break;

  case 164: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 420 "oh.y"
                                            {yyval=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2447 "oh.tab.c"
    break;

  case 165: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 421 "oh.y"
                                            {yyval=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2453 "oh.tab.c"
    break;


#line 2457 "oh.tab.c"

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

#line 429 "oh.y"


extern char *yytext;

int main(int argc, char **argv) {
    yyparse();
    printf("성공적으로 파싱을 마쳤습니다.\n프로그램을 종료합니다.\n");
}

int yyerror(char *s) {
    fprintf(에러 발생 : "%s , %s\n", s, yytext);
    exit(1);
}

int yywrap() {
    return (1);
}
