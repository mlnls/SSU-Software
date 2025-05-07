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

    #include <stdio.h>
    #include <stdlib.h>
    extern char *yytext;
    int yyerror(char *s);
    int yylex();
    int yywrap();

#line 80 "oh.tab.c"

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
  YYSYMBOL_declaration = 63,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 64,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 65,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list = 66,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 67,           /* init_declarator  */
  YYSYMBOL_type_specifier = 68,            /* type_specifier  */
  YYSYMBOL_struct_specifier = 69,          /* struct_specifier  */
  YYSYMBOL_struct_or_union = 70,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 71,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 72,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 73,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 74,         /* struct_declarator  */
  YYSYMBOL_enum_specifier = 75,            /* enum_specifier  */
  YYSYMBOL_enumerator_list = 76,           /* enumerator_list  */
  YYSYMBOL_enumerator = 77,                /* enumerator  */
  YYSYMBOL_declarator = 78,                /* declarator  */
  YYSYMBOL_pointer = 79,                   /* pointer  */
  YYSYMBOL_direct_declarator = 80,         /* direct_declarator  */
  YYSYMBOL_constant_expression_opt = 81,   /* constant_expression_opt  */
  YYSYMBOL_parameter_type_list_opt = 82,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 83,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 84,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 85,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator = 86,       /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 87, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 88,               /* initializer  */
  YYSYMBOL_initializer_list = 89,          /* initializer_list  */
  YYSYMBOL_statement = 90,                 /* statement  */
  YYSYMBOL_labeled_statement = 91,         /* labeled_statement  */
  YYSYMBOL_compound_statement = 92,        /* compound_statement  */
  YYSYMBOL_declaration_list = 93,          /* declaration_list  */
  YYSYMBOL_statement_list = 94,            /* statement_list  */
  YYSYMBOL_expression_statement = 95,      /* expression_statement  */
  YYSYMBOL_selection_statement = 96,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 97,       /* iteration_statement  */
  YYSYMBOL_expression_opt = 98,            /* expression_opt  */
  YYSYMBOL_jump_statement = 99,            /* jump_statement  */
  YYSYMBOL_primary_expression = 100,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 101,       /* postfix_expression  */
  YYSYMBOL_arg_expression_list_opt = 102,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 103,      /* arg_expression_list  */
  YYSYMBOL_unary_expression = 104,         /* unary_expression  */
  YYSYMBOL_cast_expression = 105,          /* cast_expression  */
  YYSYMBOL_type_name = 106,                /* type_name  */
  YYSYMBOL_multiplicative_expression = 107, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 108,      /* additive_expression  */
  YYSYMBOL_relational_expression = 109,    /* relational_expression  */
  YYSYMBOL_equality_expression = 110,      /* equality_expression  */
  YYSYMBOL_logical_and_expression = 111,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 112,    /* logical_or_expression  */
  YYSYMBOL_constant_expression = 113,      /* constant_expression  */
  YYSYMBOL_expression = 114,               /* expression  */
  YYSYMBOL_assignment_expression = 115     /* assignment_expression  */
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
#define YYLAST   495

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  154
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  274

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
       0,    21,    21,    25,    26,    30,    31,    35,    36,    40,
      41,    45,    46,    47,    48,    52,    53,    54,    58,    59,
      63,    64,    68,    69,    70,    74,    75,    76,    80,    81,
      85,    86,    90,    94,    95,    99,   103,   104,   105,   109,
     110,   114,   115,   119,   120,   124,   125,   129,   130,   131,
     132,   136,   137,   141,   142,   146,   147,   151,   152,   156,
     157,   158,   162,   163,   164,   168,   169,   170,   171,   172,
     176,   177,   181,   182,   186,   187,   188,   189,   190,   191,
     195,   196,   200,   204,   205,   209,   210,   214,   215,   219,
     220,   221,   225,   226,   227,   231,   232,   236,   237,   238,
     242,   243,   244,   245,   246,   247,   251,   252,   253,   254,
     255,   256,   257,   261,   262,   266,   267,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   284,   285,   289,
     290,   294,   295,   296,   297,   301,   302,   303,   307,   308,
     309,   310,   311,   315,   316,   317,   321,   322,   326,   327,
     331,   335,   339,   340,   341
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
  "function_definition", "declaration", "declaration_specifiers",
  "storage_class_specifier", "init_declarator_list", "init_declarator",
  "type_specifier", "struct_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "pointer",
  "direct_declarator", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "expression_opt",
  "jump_statement", "primary_expression", "postfix_expression",
  "arg_expression_list_opt", "arg_expression_list", "unary_expression",
  "cast_expression", "type_name", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression", "constant_expression",
  "expression", "assignment_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-194)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     417,  -194,  -194,  -194,    23,  -194,  -194,  -194,  -194,    30,
     -12,    73,   417,  -194,  -194,  -194,    29,   263,   263,  -194,
      27,  -194,    39,    13,    65,   102,   111,   114,  -194,  -194,
    -194,  -194,    -8,  -194,   -14,  -194,  -194,   116,   139,  -194,
    -194,    65,   263,   353,   111,    94,   -30,  -194,  -194,    30,
    -194,   323,  -194,   139,    30,    97,  -194,   263,   108,   123,
    -194,    -3,  -194,  -194,  -194,  -194,  -194,  -194,   379,   409,
     409,   297,   353,   353,   353,   353,   353,   124,  -194,   445,
     115,  -194,   176,   113,   145,   170,   143,   -19,  -194,  -194,
    -194,    46,   353,  -194,   111,  -194,   127,   323,  -194,  -194,
     214,    44,  -194,  -194,  -194,  -194,  -194,    29,   189,   149,
     353,  -194,   109,  -194,    84,  -194,  -194,   263,   297,  -194,
     353,  -194,  -194,    -1,   147,   153,  -194,  -194,  -194,  -194,
    -194,  -194,  -194,  -194,  -194,   220,   353,   353,   226,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,  -194,  -194,  -194,  -194,    71,  -194,
      30,  -194,   177,   353,   180,   190,   243,   201,   203,   353,
     208,   213,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,   205,   224,   225,   231,    84,   263,   353,  -194,   228,
     446,   121,  -194,   353,  -194,  -194,   234,   229,  -194,   233,
    -194,  -194,  -194,  -194,  -194,   176,   176,   113,   113,   113,
     113,   145,   145,   170,   143,   232,  -194,   323,  -194,  -194,
     235,  -194,   243,   252,   353,   353,   227,  -194,   353,   353,
    -194,  -194,  -194,  -194,   249,   241,  -194,  -194,  -194,   353,
    -194,   353,  -194,   243,  -194,   251,   239,   254,  -194,   256,
     267,  -194,  -194,  -194,  -194,  -194,   353,   353,   243,   243,
     243,   268,   255,   295,  -194,  -194,   257,   353,   243,  -194,
     272,  -194,   243,  -194
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    47,    24,    15,     0,    16,    28,    17,    29,     0,
      45,     0,     2,     3,     5,     6,     0,    12,    11,    22,
       0,    23,     0,     0,    44,    38,     0,     0,    46,     1,
       4,     9,     0,    18,    20,    14,    13,    27,     0,    83,
       8,    43,    53,    51,     0,    41,     0,    39,    48,     0,
      10,     0,     7,     0,     0,     0,    30,    85,    61,     0,
      54,    55,    57,   100,   102,   101,   104,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   106,   117,
     127,   131,   135,   138,   143,   146,   148,   152,    52,   150,
     151,     0,     0,    37,     0,    19,    20,     0,    21,    70,
       0,     0,    33,    35,    26,    31,    84,     0,     0,    53,
      51,    59,    62,    60,    63,    50,    56,     0,     0,   125,
       0,   118,   119,   129,     0,     0,   127,   122,   121,   120,
     124,   123,    49,   111,   112,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,    42,    40,    72,     0,    25,
       0,    32,     0,     0,     0,     0,     0,     0,     0,    95,
       0,     0,    82,    87,    86,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,    64,    53,    51,    58,     0,
      53,    62,   130,     0,   105,   110,     0,   114,   115,     0,
     109,   153,   132,   133,   134,   136,   137,   139,   140,   141,
     142,   144,   145,   147,   149,     0,    71,     0,    34,    99,
       0,    98,     0,     0,    95,     0,     0,    96,     0,     0,
      88,    67,    65,    66,     0,     0,   126,   128,   108,     0,
     107,     0,    73,     0,    81,     0,     0,     0,    97,     0,
       0,    69,    68,   116,   154,    80,     0,    95,     0,     0,
       0,     0,     0,    89,    91,    92,     0,    95,     0,    93,
       0,    90,     0,    94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,  -194,   302,  -194,   258,    24,  -194,  -194,   271,
     -28,  -194,  -194,   270,   -42,  -194,   156,  -194,   283,   238,
      -4,    -7,   -15,  -103,   -40,  -194,  -194,   216,   -47,  -106,
     -93,  -194,  -151,  -194,    31,  -194,  -194,  -194,  -194,  -194,
    -193,  -194,  -194,  -194,  -194,  -194,   -13,   -53,   217,   -44,
      74,    61,   183,   185,  -194,   -83,   -43,   -50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    12,    13,    14,    15,    58,    17,    32,    33,
      18,    19,    20,    55,    56,   101,   102,    21,    46,    47,
      22,    23,    24,    77,   182,    60,    61,    62,   183,   114,
      98,   158,   174,   175,   176,    57,   108,   177,   178,   179,
     226,   180,    78,    79,   196,   197,    80,    81,   124,    82,
      83,    84,    85,    86,    87,    88,   181,    90
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,    99,    59,    28,   157,    27,   185,   184,    41,   155,
      54,   113,    34,   105,    93,   223,     1,    94,   152,   127,
     128,   129,   130,   131,    16,    54,    25,    54,   125,    39,
      37,   246,     1,     1,   153,   116,    16,    10,   190,    49,
     110,    35,    36,    51,   117,    96,    50,    99,    10,    89,
     103,   112,     9,    40,   111,   119,   121,   122,   105,   126,
     126,   126,   126,   126,   262,    52,    26,    89,     9,     9,
      38,   244,    54,    29,   270,   125,   192,   125,    10,    10,
     220,   107,    39,    31,   235,   185,   198,   202,   203,   204,
     154,   160,   255,    94,   199,   123,   201,    41,   161,   205,
     206,     2,   112,    96,    42,    27,    43,   263,   264,   265,
     215,     1,     1,     4,    45,   216,   191,   271,   217,     6,
      89,   273,     8,   186,   242,   187,   227,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     237,   104,   123,     2,    89,    44,   234,   109,   109,   110,
     110,    92,     1,     2,    48,     4,   103,    10,     3,    53,
     190,     6,   110,   115,     8,     4,   132,    99,   143,   144,
       5,     6,   139,     7,     8,   145,   146,   147,   148,   151,
     126,   227,   247,   191,    51,   249,   250,   193,   109,   253,
     110,   254,    63,   194,    64,    65,    66,    67,    10,   162,
     163,   164,   165,   166,   149,   150,   167,   168,   169,    68,
     211,   212,   170,   261,   227,   171,    69,    70,     2,   207,
     208,   209,   210,   195,   227,   140,   141,   142,    71,   200,
       4,   219,    39,   172,   221,   222,     6,    72,    73,     8,
     224,    74,   225,   173,    75,    76,    63,   228,    64,    65,
      66,    67,   229,   162,   163,   164,   165,   166,   159,   230,
     167,   168,   169,    68,   231,   232,   170,     2,   236,   171,
      69,    70,     3,   233,   238,   240,   239,   241,   245,     4,
     243,   248,    71,   252,     5,     6,    39,     7,     8,   251,
     256,    72,    73,   257,   258,    74,   259,   173,    75,    76,
      63,     2,    64,    65,    66,    67,     3,   260,   266,   267,
     268,   269,   272,     4,    30,   106,   218,    68,     5,     6,
      95,     7,     8,   100,    69,    70,    63,    91,    64,    65,
      66,    67,   156,   188,   213,   189,    71,   214,     0,     0,
       0,     0,     0,    68,     0,    72,    73,     0,     0,    74,
      69,    70,    75,    76,     0,     0,    63,     0,    64,    65,
      66,    67,    71,     0,     0,     0,    97,     0,     0,     0,
       0,    72,    73,    68,     0,    74,     0,     0,    75,    76,
      69,    70,    63,     0,    64,    65,    66,    67,     0,     0,
       0,     0,    71,     0,     0,     0,     0,     0,     0,    68,
       0,    72,    73,     0,     0,    74,    69,    70,    75,    76,
       0,     0,    63,     0,    64,    65,    66,    67,   118,     0,
       1,     2,     0,     0,     0,     0,     3,    72,    73,    68,
       0,    74,     0,     4,    75,    76,    69,    70,     5,     6,
       0,     7,     8,     0,     0,     0,     0,     0,   120,     0,
       2,     0,     0,     0,     0,     3,     9,    72,    73,     0,
       0,    74,     4,     0,    75,    76,    10,     5,     6,     0,
       7,     8,   133,   134,   135,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,   190,   137,   110,     0,     0,
       0,   138,     0,     0,     0,    10
};

static const yytype_int16 yycheck[] =
{
      43,    51,    42,    10,    97,     9,   112,   110,    23,    92,
      38,    58,    16,    55,    44,   166,     3,    47,    37,    72,
      73,    74,    75,    76,     0,    53,     3,    55,    71,    43,
       3,   224,     3,     3,    53,    38,    12,    49,    39,    47,
      41,    17,    18,    57,    47,    49,    54,    97,    49,    92,
      54,    58,    39,    22,    58,    68,    69,    70,   100,    72,
      73,    74,    75,    76,   257,    34,    43,   110,    39,    39,
      43,   222,   100,     0,   267,   118,   123,   120,    49,    49,
     163,    57,    43,    54,   187,   191,   136,   140,   141,   142,
      44,    47,   243,    47,   137,    71,   139,   112,    54,   143,
     144,     4,   109,   107,    39,   109,    41,   258,   259,   260,
     153,     3,     3,    16,     3,    44,   123,   268,    47,    22,
     163,   272,    25,    39,   217,    41,   169,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     193,    44,   118,     4,   187,    43,   186,    39,    39,    41,
      41,    57,     3,     4,    40,    16,   160,    49,     9,    43,
      39,    22,    41,    40,    25,    16,    42,   217,    55,    56,
      21,    22,    57,    24,    25,    30,    31,    32,    33,    36,
     193,   224,   225,   190,    57,   228,   229,    40,    39,   239,
      41,   241,     3,    40,     5,     6,     7,     8,    49,    10,
      11,    12,    13,    14,    34,    35,    17,    18,    19,    20,
     149,   150,    23,   256,   257,    26,    27,    28,     4,   145,
     146,   147,   148,     3,   267,    49,    50,    51,    39,     3,
      16,    54,    43,    44,    54,    45,    22,    48,    49,    25,
      39,    52,    39,    54,    55,    56,     3,    39,     5,     6,
       7,     8,    39,    10,    11,    12,    13,    14,    44,    54,
      17,    18,    19,    20,    40,    40,    23,     4,    40,    26,
      27,    28,     9,    42,    40,    42,    47,    45,    26,    16,
      45,    54,    39,    42,    21,    22,    43,    24,    25,    40,
      39,    48,    49,    54,    40,    52,    40,    54,    55,    56,
       3,     4,     5,     6,     7,     8,     9,    40,    40,    54,
      15,    54,    40,    16,    12,    57,   160,    20,    21,    22,
      49,    24,    25,    53,    27,    28,     3,    44,     5,     6,
       7,     8,    94,   117,   151,   118,    39,   152,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    48,    49,    -1,    -1,    52,
      27,    28,    55,    56,    -1,    -1,     3,    -1,     5,     6,
       7,     8,    39,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    48,    49,    20,    -1,    52,    -1,    -1,    55,    56,
      27,    28,     3,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    48,    49,    -1,    -1,    52,    27,    28,    55,    56,
      -1,    -1,     3,    -1,     5,     6,     7,     8,    39,    -1,
       3,     4,    -1,    -1,    -1,    -1,     9,    48,    49,    20,
      -1,    52,    -1,    16,    55,    56,    27,    28,    21,    22,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    39,    -1,
       4,    -1,    -1,    -1,    -1,     9,    39,    48,    49,    -1,
      -1,    52,    16,    -1,    55,    56,    49,    21,    22,    -1,
      24,    25,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    39,    41,    41,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     9,    16,    21,    22,    24,    25,    39,
      49,    59,    60,    61,    62,    63,    64,    65,    68,    69,
      70,    75,    78,    79,    80,     3,    43,    78,    79,     0,
      61,    54,    66,    67,    78,    64,    64,     3,    43,    43,
      92,    80,    39,    41,    43,     3,    76,    77,    40,    47,
      54,    57,    92,    43,    68,    71,    72,    93,    64,    82,
      83,    84,    85,     3,     5,     6,     7,     8,    20,    27,
      28,    39,    48,    49,    52,    55,    56,    81,   100,   101,
     104,   105,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    76,    57,    44,    47,    67,    78,    43,    88,   115,
      71,    73,    74,    78,    44,    72,    63,    64,    94,    39,
      41,    78,    79,    86,    87,    40,    38,    47,    39,   104,
      39,   104,   104,    64,   106,   114,   104,   105,   105,   105,
     105,   105,    42,    27,    28,    29,    39,    41,    46,    57,
      49,    50,    51,    55,    56,    30,    31,    32,    33,    34,
      35,    36,    37,    53,    44,   113,    77,    88,    89,    44,
      47,    54,    10,    11,    12,    13,    14,    17,    18,    19,
      23,    26,    44,    54,    90,    91,    92,    95,    96,    97,
      99,   114,    82,    86,    81,    87,    39,    41,    85,   106,
      39,    79,    86,    40,    40,     3,   102,   103,   115,   114,
       3,   114,   105,   105,   105,   107,   107,   108,   108,   108,
     108,   109,   109,   110,   111,   114,    44,    47,    74,    54,
     113,    54,    45,    90,    39,    39,    98,   114,    39,    39,
      54,    40,    40,    42,    82,    81,    40,   105,    40,    47,
      42,    45,    88,    45,    90,    26,    98,   114,    54,   114,
     114,    40,    42,   115,   115,    90,    39,    54,    40,    40,
      40,   114,    98,    90,    90,    90,    40,    54,    15,    54,
      98,    90,    40,    90
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    64,    64,    65,    65,    65,    66,    66,
      67,    67,    68,    68,    68,    69,    69,    69,    70,    70,
      71,    71,    72,    73,    73,    74,    75,    75,    75,    76,
      76,    77,    77,    78,    78,    79,    79,    80,    80,    80,
      80,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    85,    86,    86,    86,    87,    87,    87,    87,    87,
      88,    88,    89,    89,    90,    90,    90,    90,    90,    90,
      91,    91,    92,    93,    93,    94,    94,    95,    95,    96,
      96,    96,    97,    97,    97,    98,    98,    99,    99,    99,
     100,   100,   100,   100,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   103,   103,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   105,   105,   106,
     106,   107,   107,   107,   107,   108,   108,   108,   109,   109,
     109,   109,   109,   110,   110,   110,   111,   111,   112,   112,
     113,   114,   115,   115,   115
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     2,
       3,     1,     1,     2,     2,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     1,     3,     1,     5,     4,     2,     1,
       3,     1,     3,     2,     1,     1,     2,     1,     3,     4,
       4,     0,     1,     0,     1,     1,     2,     1,     3,     2,
       2,     1,     1,     1,     2,     3,     3,     3,     4,     4,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       4,     3,     4,     0,     2,     0,     2,     1,     2,     5,
       7,     5,     5,     7,     9,     0,     1,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     1,     4,     4,     3,
       3,     2,     2,     0,     1,     1,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     1,     4,     1,
       2,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     1,     1,     3,     5
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

#line 1434 "oh.tab.c"

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

#line 343 "oh.y"


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
