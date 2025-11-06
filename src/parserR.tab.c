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
#line 1 "parserR.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex();
void yyerror(const char *s);
extern FILE *yyin;

int token_count = 0;
int symbol_count = 0;
char* symbol_table[100];

#line 85 "parserR.tab.c"

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

#include "parserR.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_STR = 5,                        /* STR  */
  YYSYMBOL_PROGRAM = 6,                    /* PROGRAM  */
  YYSYMBOL_VAR = 7,                        /* VAR  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_WHILE = 9,                      /* WHILE  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_BEGIN_T = 11,                   /* BEGIN_T  */
  YYSYMBOL_END = 12,                       /* END  */
  YYSYMBOL_THEN = 13,                      /* THEN  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_DO = 15,                        /* DO  */
  YYSYMBOL_FUNCTION = 16,                  /* FUNCTION  */
  YYSYMBOL_PROCEDURE = 17,                 /* PROCEDURE  */
  YYSYMBOL_RECORD = 18,                    /* RECORD  */
  YYSYMBOL_ARRAY = 19,                     /* ARRAY  */
  YYSYMBOL_TYPE = 20,                      /* TYPE  */
  YYSYMBOL_OF = 21,                        /* OF  */
  YYSYMBOL_TO = 22,                        /* TO  */
  YYSYMBOL_NOT = 23,                       /* NOT  */
  YYSYMBOL_MOD = 24,                       /* MOD  */
  YYSYMBOL_DIV = 25,                       /* DIV  */
  YYSYMBOL_FORWARD = 26,                   /* FORWARD  */
  YYSYMBOL_AND = 27,                       /* AND  */
  YYSYMBOL_OR = 28,                        /* OR  */
  YYSYMBOL_PLUS = 29,                      /* PLUS  */
  YYSYMBOL_MINUS = 30,                     /* MINUS  */
  YYSYMBOL_MUL = 31,                       /* MUL  */
  YYSYMBOL_EQUAL = 32,                     /* EQUAL  */
  YYSYMBOL_LT = 33,                        /* LT  */
  YYSYMBOL_LTE = 34,                       /* LTE  */
  YYSYMBOL_GT = 35,                        /* GT  */
  YYSYMBOL_GTE = 36,                       /* GTE  */
  YYSYMBOL_NEQ = 37,                       /* NEQ  */
  YYSYMBOL_DOT = 38,                       /* DOT  */
  YYSYMBOL_COMMA = 39,                     /* COMMA  */
  YYSYMBOL_COLON = 40,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 41,                 /* SEMICOLON  */
  YYSYMBOL_ASSIGN = 42,                    /* ASSIGN  */
  YYSYMBOL_DOTDOT = 43,                    /* DOTDOT  */
  YYSYMBOL_LPAREN = 44,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 45,                    /* RPAREN  */
  YYSYMBOL_LBRACKET = 46,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 47,                  /* RBRACKET  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_program = 49,                   /* program  */
  YYSYMBOL_type_definitions = 50,          /* type_definitions  */
  YYSYMBOL_type_definition = 51,           /* type_definition  */
  YYSYMBOL_type = 52,                      /* type  */
  YYSYMBOL_standard_type = 53,             /* standard_type  */
  YYSYMBOL_var_declarations = 54,          /* var_declarations  */
  YYSYMBOL_var_declaration = 55,           /* var_declaration  */
  YYSYMBOL_identifier_list = 56,           /* identifier_list  */
  YYSYMBOL_subprog_declarations = 57,      /* subprog_declarations  */
  YYSYMBOL_subprog_declaration = 58,       /* subprog_declaration  */
  YYSYMBOL_procedure_decl = 59,            /* procedure_decl  */
  YYSYMBOL_function_decl = 60,             /* function_decl  */
  YYSYMBOL_formal_params = 61,             /* formal_params  */
  YYSYMBOL_param_list = 62,                /* param_list  */
  YYSYMBOL_param = 63,                     /* param  */
  YYSYMBOL_proc_body = 64,                 /* proc_body  */
  YYSYMBOL_block = 65,                     /* block  */
  YYSYMBOL_compound_stmt = 66,             /* compound_stmt  */
  YYSYMBOL_stmt_seq = 67,                  /* stmt_seq  */
  YYSYMBOL_statement = 68,                 /* statement  */
  YYSYMBOL_simple_stmt = 69,               /* simple_stmt  */
  YYSYMBOL_assignment_stmt = 70,           /* assignment_stmt  */
  YYSYMBOL_proc_stmt = 71,                 /* proc_stmt  */
  YYSYMBOL_actual_params = 72,             /* actual_params  */
  YYSYMBOL_structured_stmt = 73,           /* structured_stmt  */
  YYSYMBOL_opt_else = 74,                  /* opt_else  */
  YYSYMBOL_expression = 75,                /* expression  */
  YYSYMBOL_relop = 76,                     /* relop  */
  YYSYMBOL_simple_expr = 77,               /* simple_expr  */
  YYSYMBOL_addop = 78,                     /* addop  */
  YYSYMBOL_term = 79,                      /* term  */
  YYSYMBOL_mulop = 80,                     /* mulop  */
  YYSYMBOL_factor = 81,                    /* factor  */
  YYSYMBOL_variable = 82,                  /* variable  */
  YYSYMBOL_func_ref = 83                   /* func_ref  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   140

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    34,    34,    40,    41,    43,    48,    53,    55,    57,
      62,    68,    69,    71,    76,    81,    83,    89,    90,    95,
      97,   102,   107,   113,   114,   119,   121,   126,   131,   133,
     138,   143,   148,   150,   155,   157,   163,   164,   166,   171,
     176,   182,   183,   185,   190,   192,   194,   196,   202,   203,
     208,   210,   215,   216,   217,   218,   219,   220,   224,   226,
     231,   232,   233,   237,   239,   244,   245,   246,   247,   251,
     252,   253,   254,   255,   256,   260,   264
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INT", "STR",
  "PROGRAM", "VAR", "IF", "WHILE", "FOR", "BEGIN_T", "END", "THEN", "ELSE",
  "DO", "FUNCTION", "PROCEDURE", "RECORD", "ARRAY", "TYPE", "OF", "TO",
  "NOT", "MOD", "DIV", "FORWARD", "AND", "OR", "PLUS", "MINUS", "MUL",
  "EQUAL", "LT", "LTE", "GT", "GTE", "NEQ", "DOT", "COMMA", "COLON",
  "SEMICOLON", "ASSIGN", "DOTDOT", "LPAREN", "RPAREN", "LBRACKET",
  "RBRACKET", "$accept", "program", "type_definitions", "type_definition",
  "type", "standard_type", "var_declarations", "var_declaration",
  "identifier_list", "subprog_declarations", "subprog_declaration",
  "procedure_decl", "function_decl", "formal_params", "param_list",
  "param", "proc_body", "block", "compound_stmt", "stmt_seq", "statement",
  "simple_stmt", "assignment_stmt", "proc_stmt", "actual_params",
  "structured_stmt", "opt_else", "expression", "relop", "simple_expr",
  "addop", "term", "mulop", "factor", "variable", "func_ref", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-70)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      12,    46,    71,   -28,   -70,    54,    72,    36,    50,    39,
      78,    42,    78,    17,   -70,   -70,    43,     7,   -70,    44,
      14,   -70,    79,    41,   -70,   -70,   -70,    85,    17,   -70,
      48,    86,    87,    52,   -70,   -70,    53,    11,    90,   -70,
     -70,    56,     6,     6,    93,   -70,     0,   -70,   -70,   -70,
     -70,   -70,    55,    57,    58,   -70,   -70,   -70,    60,     6,
      61,   -70,   -70,     6,     6,    91,    33,    -3,   -70,   -70,
     -70,    83,    64,   -70,    48,     6,    78,    78,   103,    -1,
     -70,     6,   -70,    63,    48,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     6,     6,   -70,   -70,   -70,   -70,
       6,    48,     6,   -70,   -70,    13,    65,    68,   -70,    66,
      67,     6,   -70,     3,   -70,    98,    49,    -3,   -70,   -70,
      94,    17,    73,    78,    76,    97,   -70,   -70,    48,   -70,
       6,   -70,   116,   -70,     8,   118,   -70,   107,    82,   -70,
      16,   -70,   -70,   -70,    48,     8,   -70,   -70,   -70
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     0,    11,     0,     0,
       0,     0,    17,     0,     4,    15,     0,     0,     5,     0,
       0,    10,    11,     0,     6,     7,    12,     0,     0,    13,
      36,     0,     0,     0,    19,    20,     0,     0,     0,    16,
      14,    75,     0,     0,     0,    44,     0,    32,    34,    37,
      38,    35,     0,     0,     0,    18,     2,     9,     0,    41,
      75,    69,    70,     0,     0,     0,    50,    58,    63,    71,
      72,     0,     0,    31,    36,     0,    23,    23,     0,     0,
      42,    41,    73,     0,    36,    62,    60,    61,    56,    52,
      53,    54,    55,    57,     0,     0,    67,    66,    68,    65,
       0,    36,     0,    33,    39,     0,     0,    24,    25,     0,
       0,     0,    40,     0,    74,    48,    51,    59,    64,    46,
       0,     0,     0,     0,     0,     0,    43,    76,    36,    45,
       0,    27,     0,    26,    11,     0,    49,     0,     0,    28,
       0,    21,    29,     8,    36,    11,    30,    47,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -70,   -70,   -70,   117,   -26,   -10,    10,   119,   -69,   -70,
     -70,   -70,   -70,    51,   -70,     4,   -19,   -70,   -20,   -70,
     -68,   -70,   -70,   -70,    59,   -70,   -70,   -38,   -70,    37,
     -70,    35,   -70,   -60,   -29,   -70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     7,     9,    24,    25,   140,    19,    17,    20,
      33,    34,    35,   106,   107,   108,   141,   142,    45,    46,
      47,    48,    49,    50,    79,    51,   129,    80,    94,    66,
      95,    67,   100,    68,    69,    70
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      36,    52,    40,    82,    65,    71,   103,   105,   105,    60,
      61,    62,    73,     5,    15,    10,   115,    12,     1,    15,
      21,    96,    97,    57,    98,    30,    83,    30,    99,    63,
      31,    32,    37,   119,   139,    22,    23,   104,   111,     8,
     118,    74,   111,    10,   112,    52,    27,    28,   127,     3,
      64,    41,    27,   121,   105,    52,    42,    43,    44,    30,
     136,    85,    86,    87,   120,    88,    89,    90,    91,    92,
      93,     4,    52,   126,     6,     8,   147,    85,    86,    87,
      14,    15,    13,    18,    26,    29,    10,    38,    39,    53,
      54,    56,   137,    55,    58,   131,    72,    75,   101,    52,
      59,    76,    77,    78,    84,    81,   102,   110,   114,   123,
     122,   124,   128,   132,   125,    52,   130,   134,   135,   138,
     146,    21,   144,   145,    11,   143,   148,   133,   109,    16,
     117,   116,     0,     0,     0,     0,     0,     0,     0,     0,
     113
};

static const yytype_int16 yycheck[] =
{
      20,    30,    28,    63,    42,    43,    74,    76,    77,     3,
       4,     5,    12,    41,     3,     7,    84,     7,     6,     3,
       3,    24,    25,    12,    27,    11,    64,    11,    31,    23,
      16,    17,    22,   101,    26,    18,    19,    75,    39,     3,
     100,    41,    39,     7,    45,    74,    39,    40,    45,     3,
      44,     3,    39,    40,   123,    84,     8,     9,    10,    11,
     128,    28,    29,    30,   102,    32,    33,    34,    35,    36,
      37,     0,   101,   111,    20,     3,   144,    28,    29,    30,
      41,     3,    32,    41,    41,    41,     7,    46,     3,     3,
       3,    38,   130,    41,     4,   121,     3,    42,    15,   128,
      44,    44,    44,    43,    13,    44,    42,     4,    45,    41,
      45,    45,    14,    40,    47,   144,    22,    41,    21,     3,
     140,     3,    15,    41,     7,   135,   145,   123,    77,    10,
      95,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    49,     3,     0,    41,    20,    50,     3,    51,
       7,    51,    54,    32,    41,     3,    55,    56,    41,    55,
      57,     3,    18,    19,    52,    53,    41,    39,    40,    41,
      11,    16,    17,    58,    59,    60,    66,    54,    46,     3,
      52,     3,     8,     9,    10,    66,    67,    68,    69,    70,
      71,    73,    82,     3,     3,    41,    38,    12,     4,    44,
       3,     4,     5,    23,    44,    75,    77,    79,    81,    82,
      83,    75,     3,    12,    41,    42,    44,    44,    43,    72,
      75,    44,    81,    75,    13,    28,    29,    30,    32,    33,
      34,    35,    36,    37,    76,    78,    24,    25,    27,    31,
      80,    15,    42,    68,    75,    56,    61,    62,    63,    61,
       4,    39,    45,    72,    45,    68,    77,    79,    81,    68,
      75,    40,    45,    41,    45,    47,    75,    45,    14,    74,
      22,    52,    40,    63,    41,    21,    68,    75,     3,    26,
      54,    64,    65,    53,    15,    41,    66,    68,    64
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    51,    52,    52,    52,
      53,    54,    54,    54,    55,    56,    56,    57,    57,    58,
      58,    59,    60,    61,    61,    62,    62,    63,    64,    64,
      65,    66,    67,    67,    68,    68,    69,    69,    69,    70,
      71,    72,    72,    72,    73,    73,    73,    73,    74,    74,
      75,    75,    76,    76,    76,    76,    76,    76,    77,    77,
      78,    78,    78,    79,    79,    80,    80,    80,    80,    81,
      81,    81,    81,    81,    81,    82,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     8,     0,     3,     3,     3,     1,     8,     3,
       1,     0,     3,     3,     3,     1,     3,     0,     3,     1,
       1,     7,     9,     0,     1,     1,     3,     3,     1,     1,
       2,     3,     1,     3,     1,     1,     0,     1,     1,     3,
       4,     0,     1,     3,     1,     5,     4,     8,     0,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     4
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
  case 2: /* program: PROGRAM ID SEMICOLON type_definitions var_declarations subprog_declarations compound_stmt DOT  */
#line 35 "parserR.y"
    { printf("program\n"); }
#line 1255 "parserR.tab.c"
    break;

  case 3: /* type_definitions: %empty  */
#line 40 "parserR.y"
    { printf("type_definitions\n"); }
#line 1261 "parserR.tab.c"
    break;

  case 4: /* type_definitions: TYPE type_definition SEMICOLON  */
#line 42 "parserR.y"
    { printf("type_definitions\n"); }
#line 1267 "parserR.tab.c"
    break;

  case 5: /* type_definitions: type_definitions type_definition SEMICOLON  */
#line 44 "parserR.y"
    { printf("type_definitions\n"); }
#line 1273 "parserR.tab.c"
    break;

  case 6: /* type_definition: ID EQUAL type  */
#line 49 "parserR.y"
    { printf("type_definition\n"); }
#line 1279 "parserR.tab.c"
    break;

  case 7: /* type: standard_type  */
#line 54 "parserR.y"
    { printf("type\n"); }
#line 1285 "parserR.tab.c"
    break;

  case 8: /* type: ARRAY LBRACKET INT DOTDOT INT RBRACKET OF standard_type  */
#line 56 "parserR.y"
    { printf("type\n"); }
#line 1291 "parserR.tab.c"
    break;

  case 9: /* type: RECORD var_declarations END  */
#line 58 "parserR.y"
    { printf("type\n"); }
#line 1297 "parserR.tab.c"
    break;

  case 10: /* standard_type: ID  */
#line 63 "parserR.y"
    { printf("standard_type\n"); }
#line 1303 "parserR.tab.c"
    break;

  case 11: /* var_declarations: %empty  */
#line 68 "parserR.y"
    { printf("var_declarations\n"); }
#line 1309 "parserR.tab.c"
    break;

  case 12: /* var_declarations: VAR var_declaration SEMICOLON  */
#line 70 "parserR.y"
    { printf("var_declarations\n"); }
#line 1315 "parserR.tab.c"
    break;

  case 13: /* var_declarations: var_declarations var_declaration SEMICOLON  */
#line 72 "parserR.y"
    { printf("var_declarations\n"); }
#line 1321 "parserR.tab.c"
    break;

  case 14: /* var_declaration: identifier_list COLON type  */
#line 77 "parserR.y"
    { printf("var_declaration\n"); }
#line 1327 "parserR.tab.c"
    break;

  case 15: /* identifier_list: ID  */
#line 82 "parserR.y"
    { printf("identifier_list\n"); }
#line 1333 "parserR.tab.c"
    break;

  case 16: /* identifier_list: identifier_list COMMA ID  */
#line 84 "parserR.y"
    { printf("identifier_list\n"); }
#line 1339 "parserR.tab.c"
    break;

  case 17: /* subprog_declarations: %empty  */
#line 89 "parserR.y"
    { printf("subprog_declarations\n"); }
#line 1345 "parserR.tab.c"
    break;

  case 18: /* subprog_declarations: subprog_declarations subprog_declaration SEMICOLON  */
#line 91 "parserR.y"
    { printf("subprog_declarations\n"); }
#line 1351 "parserR.tab.c"
    break;

  case 19: /* subprog_declaration: procedure_decl  */
#line 96 "parserR.y"
    { printf("subprog_declaration\n"); }
#line 1357 "parserR.tab.c"
    break;

  case 20: /* subprog_declaration: function_decl  */
#line 98 "parserR.y"
    { printf("subprog_declaration\n"); }
#line 1363 "parserR.tab.c"
    break;

  case 21: /* procedure_decl: PROCEDURE ID LPAREN formal_params RPAREN SEMICOLON proc_body  */
#line 103 "parserR.y"
    { printf("procedure_decl\n"); }
#line 1369 "parserR.tab.c"
    break;

  case 22: /* function_decl: FUNCTION ID LPAREN formal_params RPAREN COLON ID SEMICOLON proc_body  */
#line 108 "parserR.y"
    { printf("function_decl\n"); }
#line 1375 "parserR.tab.c"
    break;

  case 23: /* formal_params: %empty  */
#line 113 "parserR.y"
    { printf("formal_params\n"); }
#line 1381 "parserR.tab.c"
    break;

  case 24: /* formal_params: param_list  */
#line 115 "parserR.y"
    { printf("formal_params\n"); }
#line 1387 "parserR.tab.c"
    break;

  case 25: /* param_list: param  */
#line 120 "parserR.y"
    { printf("param_list\n"); }
#line 1393 "parserR.tab.c"
    break;

  case 26: /* param_list: param_list SEMICOLON param  */
#line 122 "parserR.y"
    { printf("param_list\n"); }
#line 1399 "parserR.tab.c"
    break;

  case 27: /* param: identifier_list COLON type  */
#line 127 "parserR.y"
    { printf("param\n"); }
#line 1405 "parserR.tab.c"
    break;

  case 28: /* proc_body: FORWARD  */
#line 132 "parserR.y"
    { printf("proc_body\n"); }
#line 1411 "parserR.tab.c"
    break;

  case 29: /* proc_body: block  */
#line 134 "parserR.y"
    { printf("proc_body\n"); }
#line 1417 "parserR.tab.c"
    break;

  case 30: /* block: var_declarations compound_stmt  */
#line 139 "parserR.y"
    { printf("block\n"); }
#line 1423 "parserR.tab.c"
    break;

  case 31: /* compound_stmt: BEGIN_T stmt_seq END  */
#line 144 "parserR.y"
    { printf("compound_stmt\n"); }
#line 1429 "parserR.tab.c"
    break;

  case 32: /* stmt_seq: statement  */
#line 149 "parserR.y"
    { printf("stmt_seq\n"); }
#line 1435 "parserR.tab.c"
    break;

  case 33: /* stmt_seq: stmt_seq SEMICOLON statement  */
#line 151 "parserR.y"
    { printf("stmt_seq\n"); }
#line 1441 "parserR.tab.c"
    break;

  case 34: /* statement: simple_stmt  */
#line 156 "parserR.y"
    { printf("statement\n"); }
#line 1447 "parserR.tab.c"
    break;

  case 35: /* statement: structured_stmt  */
#line 158 "parserR.y"
    { printf("statement\n"); }
#line 1453 "parserR.tab.c"
    break;

  case 36: /* simple_stmt: %empty  */
#line 163 "parserR.y"
    { printf("simple_stmt\n"); }
#line 1459 "parserR.tab.c"
    break;

  case 37: /* simple_stmt: assignment_stmt  */
#line 165 "parserR.y"
    { printf("simple_stmt\n"); }
#line 1465 "parserR.tab.c"
    break;

  case 38: /* simple_stmt: proc_stmt  */
#line 167 "parserR.y"
    { printf("simple_stmt\n"); }
#line 1471 "parserR.tab.c"
    break;

  case 39: /* assignment_stmt: variable ASSIGN expression  */
#line 172 "parserR.y"
    { printf("assignment_stmt\n"); }
#line 1477 "parserR.tab.c"
    break;

  case 40: /* proc_stmt: ID LPAREN actual_params RPAREN  */
#line 177 "parserR.y"
    { printf("proc_stmt\n"); }
#line 1483 "parserR.tab.c"
    break;

  case 41: /* actual_params: %empty  */
#line 182 "parserR.y"
    { printf("actual_params\n"); }
#line 1489 "parserR.tab.c"
    break;

  case 42: /* actual_params: expression  */
#line 184 "parserR.y"
    { printf("actual_params\n"); }
#line 1495 "parserR.tab.c"
    break;

  case 43: /* actual_params: actual_params COMMA expression  */
#line 186 "parserR.y"
    { printf("actual_params\n"); }
#line 1501 "parserR.tab.c"
    break;

  case 44: /* structured_stmt: compound_stmt  */
#line 191 "parserR.y"
    { printf("structured_stmt\n"); }
#line 1507 "parserR.tab.c"
    break;

  case 45: /* structured_stmt: IF expression THEN statement opt_else  */
#line 193 "parserR.y"
    { printf("structured_stmt\n"); }
#line 1513 "parserR.tab.c"
    break;

  case 46: /* structured_stmt: WHILE expression DO statement  */
#line 195 "parserR.y"
    { printf("structured_stmt\n"); }
#line 1519 "parserR.tab.c"
    break;

  case 47: /* structured_stmt: FOR ID ASSIGN expression TO expression DO statement  */
#line 197 "parserR.y"
    { printf("structured_stmt\n"); }
#line 1525 "parserR.tab.c"
    break;

  case 48: /* opt_else: %empty  */
#line 202 "parserR.y"
    { printf("opt_else\n"); }
#line 1531 "parserR.tab.c"
    break;

  case 49: /* opt_else: ELSE statement  */
#line 204 "parserR.y"
    { printf("opt_else\n"); }
#line 1537 "parserR.tab.c"
    break;

  case 50: /* expression: simple_expr  */
#line 209 "parserR.y"
    { printf("expression\n"); }
#line 1543 "parserR.tab.c"
    break;

  case 51: /* expression: simple_expr relop simple_expr  */
#line 211 "parserR.y"
    { printf("expression\n"); }
#line 1549 "parserR.tab.c"
    break;

  case 52: /* relop: LT  */
#line 215 "parserR.y"
          { printf("relop\n"); }
#line 1555 "parserR.tab.c"
    break;

  case 53: /* relop: LTE  */
#line 216 "parserR.y"
          { printf("relop\n"); }
#line 1561 "parserR.tab.c"
    break;

  case 54: /* relop: GT  */
#line 217 "parserR.y"
          { printf("relop\n"); }
#line 1567 "parserR.tab.c"
    break;

  case 55: /* relop: GTE  */
#line 218 "parserR.y"
          { printf("relop\n"); }
#line 1573 "parserR.tab.c"
    break;

  case 56: /* relop: EQUAL  */
#line 219 "parserR.y"
            { printf("relop\n"); }
#line 1579 "parserR.tab.c"
    break;

  case 57: /* relop: NEQ  */
#line 220 "parserR.y"
          { printf("relop\n"); }
#line 1585 "parserR.tab.c"
    break;

  case 58: /* simple_expr: term  */
#line 225 "parserR.y"
    { printf("simple_expr\n"); }
#line 1591 "parserR.tab.c"
    break;

  case 59: /* simple_expr: simple_expr addop term  */
#line 227 "parserR.y"
    { printf("simple_expr\n"); }
#line 1597 "parserR.tab.c"
    break;

  case 60: /* addop: PLUS  */
#line 231 "parserR.y"
           { printf("addop\n"); }
#line 1603 "parserR.tab.c"
    break;

  case 61: /* addop: MINUS  */
#line 232 "parserR.y"
            { printf("addop\n"); }
#line 1609 "parserR.tab.c"
    break;

  case 62: /* addop: OR  */
#line 233 "parserR.y"
         { printf("addop\n"); }
#line 1615 "parserR.tab.c"
    break;

  case 63: /* term: factor  */
#line 238 "parserR.y"
    { printf("term\n"); }
#line 1621 "parserR.tab.c"
    break;

  case 64: /* term: term mulop factor  */
#line 240 "parserR.y"
    { printf("term\n"); }
#line 1627 "parserR.tab.c"
    break;

  case 65: /* mulop: MUL  */
#line 244 "parserR.y"
          { printf("mulop\n"); }
#line 1633 "parserR.tab.c"
    break;

  case 66: /* mulop: DIV  */
#line 245 "parserR.y"
          { printf("mulop\n"); }
#line 1639 "parserR.tab.c"
    break;

  case 67: /* mulop: MOD  */
#line 246 "parserR.y"
          { printf("mulop\n"); }
#line 1645 "parserR.tab.c"
    break;

  case 68: /* mulop: AND  */
#line 247 "parserR.y"
          { printf("mulop\n"); }
#line 1651 "parserR.tab.c"
    break;

  case 69: /* factor: INT  */
#line 251 "parserR.y"
          { printf("factor\n"); }
#line 1657 "parserR.tab.c"
    break;

  case 70: /* factor: STR  */
#line 252 "parserR.y"
          { printf("factor\n"); }
#line 1663 "parserR.tab.c"
    break;

  case 71: /* factor: variable  */
#line 253 "parserR.y"
               { printf("factor\n"); }
#line 1669 "parserR.tab.c"
    break;

  case 72: /* factor: func_ref  */
#line 254 "parserR.y"
               { printf("factor\n"); }
#line 1675 "parserR.tab.c"
    break;

  case 73: /* factor: NOT factor  */
#line 255 "parserR.y"
                 { printf("factor\n"); }
#line 1681 "parserR.tab.c"
    break;

  case 74: /* factor: LPAREN expression RPAREN  */
#line 256 "parserR.y"
                               { printf("factor\n"); }
#line 1687 "parserR.tab.c"
    break;

  case 75: /* variable: ID  */
#line 260 "parserR.y"
         { printf("variable\n"); }
#line 1693 "parserR.tab.c"
    break;

  case 76: /* func_ref: ID LPAREN actual_params RPAREN  */
#line 264 "parserR.y"
                                     { printf("func_ref\n"); }
#line 1699 "parserR.tab.c"
    break;


#line 1703 "parserR.tab.c"

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

#line 267 "parserR.y"


void yyerror(const char *s) {
    printf("Parse error: %s\n", s);
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("Cannot open input file");
            return 1;
        }
    }

    printf("Parsing...\n\n");
    yyparse();
    printf("\nParsing complete.\n");
    printf("Total tokens: %d\n", token_count);
    return 0;
}
