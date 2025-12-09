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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* --- Estrutura da Árvore Sintática (AST) --- */
typedef struct ASTNode {
    char *type;                 // Ex: "declaration", "if statement", "soma"
    char *value;                // Ex: "x", "5", "inteiro" (pode ser NULL)
    struct ASTNode **children;  // Array de ponteiros para filhos
    int child_count;
} ASTNode;

ASTNode* create_node(char *type, char *value);
void add_child(ASTNode *parent, ASTNode *child);
void print_tree(ASTNode *node, int level);
void free_tree(ASTNode *node);

/* Declarações externas */
int yylex();
void yyerror(const char *s);
extern FILE *yyin;

#line 95 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_SE = 3,                       /* T_SE  */
  YYSYMBOL_T_SENAO = 4,                    /* T_SENAO  */
  YYSYMBOL_T_ENQUANTO = 5,                 /* T_ENQUANTO  */
  YYSYMBOL_T_ATE = 6,                      /* T_ATE  */
  YYSYMBOL_T_DEVOLVA = 7,                  /* T_DEVOLVA  */
  YYSYMBOL_T_IMPRIMA = 8,                  /* T_IMPRIMA  */
  YYSYMBOL_T_RECEBA = 9,                   /* T_RECEBA  */
  YYSYMBOL_T_INTEIRO_KW = 10,              /* T_INTEIRO_KW  */
  YYSYMBOL_T_QUEBRADO_KW = 11,             /* T_QUEBRADO_KW  */
  YYSYMBOL_T_CARACTERE_KW = 12,            /* T_CARACTERE_KW  */
  YYSYMBOL_T_TEXTO_KW = 13,                /* T_TEXTO_KW  */
  YYSYMBOL_T_FATO_KW = 14,                 /* T_FATO_KW  */
  YYSYMBOL_T_SERPENTE_KW = 15,             /* T_SERPENTE_KW  */
  YYSYMBOL_T_VAZIO_KW = 16,                /* T_VAZIO_KW  */
  YYSYMBOL_T_E = 17,                       /* T_E  */
  YYSYMBOL_T_OU = 18,                      /* T_OU  */
  YYSYMBOL_T_NAO = 19,                     /* T_NAO  */
  YYSYMBOL_T_ID = 20,                      /* T_ID  */
  YYSYMBOL_T_TEXTO_LIT = 21,               /* T_TEXTO_LIT  */
  YYSYMBOL_T_CARACTERE_LIT = 22,           /* T_CARACTERE_LIT  */
  YYSYMBOL_T_FATO_LIT = 23,                /* T_FATO_LIT  */
  YYSYMBOL_T_QUEBRADO_LIT = 24,            /* T_QUEBRADO_LIT  */
  YYSYMBOL_T_INTEIRO_LIT = 25,             /* T_INTEIRO_LIT  */
  YYSYMBOL_T_IGUAL = 26,                   /* T_IGUAL  */
  YYSYMBOL_T_DIFERENTE = 27,               /* T_DIFERENTE  */
  YYSYMBOL_T_MENOR = 28,                   /* T_MENOR  */
  YYSYMBOL_T_MAIOR = 29,                   /* T_MAIOR  */
  YYSYMBOL_T_MENOR_IGUAL = 30,             /* T_MENOR_IGUAL  */
  YYSYMBOL_T_MAIOR_IGUAL = 31,             /* T_MAIOR_IGUAL  */
  YYSYMBOL_T_SOMA = 32,                    /* T_SOMA  */
  YYSYMBOL_T_SUB = 33,                     /* T_SUB  */
  YYSYMBOL_T_MULT = 34,                    /* T_MULT  */
  YYSYMBOL_T_DIV = 35,                     /* T_DIV  */
  YYSYMBOL_T_ATRIBUICAO = 36,              /* T_ATRIBUICAO  */
  YYSYMBOL_T_PV = 37,                      /* T_PV  */
  YYSYMBOL_T_VIRGULA = 38,                 /* T_VIRGULA  */
  YYSYMBOL_T_LPAREN = 39,                  /* T_LPAREN  */
  YYSYMBOL_T_RPAREN = 40,                  /* T_RPAREN  */
  YYSYMBOL_T_LCHAVE = 41,                  /* T_LCHAVE  */
  YYSYMBOL_T_RCHAVE = 42,                  /* T_RCHAVE  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_statement_list = 45,            /* statement_list  */
  YYSYMBOL_statement = 46,                 /* statement  */
  YYSYMBOL_block = 47,                     /* block  */
  YYSYMBOL_declaration = 48,               /* declaration  */
  YYSYMBOL_vector_decl = 49,               /* vector_decl  */
  YYSYMBOL_vector_elements = 50,           /* vector_elements  */
  YYSYMBOL_type = 51,                      /* type  */
  YYSYMBOL_assignment = 52,                /* assignment  */
  YYSYMBOL_if_stmt = 53,                   /* if_stmt  */
  YYSYMBOL_while_stmt = 54,                /* while_stmt  */
  YYSYMBOL_loop_ate_stmt = 55,             /* loop_ate_stmt  */
  YYSYMBOL_function_def = 56,              /* function_def  */
  YYSYMBOL_param_list = 57,                /* param_list  */
  YYSYMBOL_param = 58,                     /* param  */
  YYSYMBOL_input_stmt = 59,                /* input_stmt  */
  YYSYMBOL_output_stmt = 60,               /* output_stmt  */
  YYSYMBOL_return_stmt = 61,               /* return_stmt  */
  YYSYMBOL_expression = 62,                /* expression  */
  YYSYMBOL_simple_expression = 63,         /* simple_expression  */
  YYSYMBOL_term = 64,                      /* term  */
  YYSYMBOL_factor = 65                     /* factor  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   153

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  128

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    71,    71,    80,    84,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   105,   108,   115,   120,
     130,   138,   142,   150,   151,   152,   153,   154,   155,   160,
     169,   175,   187,   196,   206,   215,   216,   220,   227,   234,
     240,   247,   251,   259,   260,   263,   266,   269,   272,   275,
     281,   282,   285,   288,   294,   295,   298,   301,   307,   308,
     311,   316,   319,   322,   325
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
  "\"end of file\"", "error", "\"invalid token\"", "T_SE", "T_SENAO",
  "T_ENQUANTO", "T_ATE", "T_DEVOLVA", "T_IMPRIMA", "T_RECEBA",
  "T_INTEIRO_KW", "T_QUEBRADO_KW", "T_CARACTERE_KW", "T_TEXTO_KW",
  "T_FATO_KW", "T_SERPENTE_KW", "T_VAZIO_KW", "T_E", "T_OU", "T_NAO",
  "T_ID", "T_TEXTO_LIT", "T_CARACTERE_LIT", "T_FATO_LIT", "T_QUEBRADO_LIT",
  "T_INTEIRO_LIT", "T_IGUAL", "T_DIFERENTE", "T_MENOR", "T_MAIOR",
  "T_MENOR_IGUAL", "T_MAIOR_IGUAL", "T_SOMA", "T_SUB", "T_MULT", "T_DIV",
  "T_ATRIBUICAO", "T_PV", "T_VIRGULA", "T_LPAREN", "T_RPAREN", "T_LCHAVE",
  "T_RCHAVE", "$accept", "program", "statement_list", "statement", "block",
  "declaration", "vector_decl", "vector_elements", "type", "assignment",
  "if_stmt", "while_stmt", "loop_ate_stmt", "function_def", "param_list",
  "param", "input_stmt", "output_stmt", "return_stmt", "expression",
  "simple_expression", "term", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-66)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-42)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      68,   -34,    -9,    -7,   -13,    33,    47,   -66,   -66,   -66,
     -66,   -66,    -2,   -66,    51,    28,   100,    68,   -66,   -66,
      67,    70,    86,    94,   -66,   -66,   -66,   -66,    96,    97,
      98,    78,    78,    78,    78,   -66,   -66,   -66,   -66,   -66,
      78,   -66,    92,   -14,   -66,    78,   117,    99,    78,   -66,
      48,   -66,   -66,   -66,   -66,    69,   -66,   -66,   -66,   -66,
      78,   101,   102,   103,   -66,   104,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,   105,   106,
     116,   -66,   -66,    78,   116,   107,    95,    95,    95,   111,
     -14,    -5,    -5,    -5,    -5,    -5,    -5,   -14,   -14,   -66,
     -66,   -66,   -66,   -66,   109,   -66,   119,   -16,   -66,   -66,
     136,   -66,   -66,   114,   -66,   116,    95,    95,   112,   -66,
     -66,   -66,    78,   -15,   -66,    78,   -66,   -66
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,     0,    28,     0,     0,     0,     2,     4,    15,
       0,     0,     0,     0,     9,    10,    11,     8,     0,     0,
       0,     0,     0,     0,     0,    59,    62,    63,    61,    60,
       0,    42,    43,    50,    54,     0,     0,     0,     0,    17,
       0,     1,     3,     5,     6,    18,     7,    12,    13,    14,
       0,     0,     0,     0,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    16,     0,    35,     0,     0,     0,     0,    58,
      53,    44,    45,    46,    47,    48,    49,    51,    52,    57,
      55,    56,    40,    39,     0,    19,     0,     0,    36,    58,
      30,    32,    33,     0,    38,     0,     0,     0,     0,    37,
      34,    31,     0,     0,    22,     0,    20,    21
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -66,   -66,   137,    -1,   -21,   -66,   -66,   -66,   -65,   -66,
     -66,   -66,   -66,   -66,   -66,    38,   -66,   -66,   -66,   -31,
      44,    19,   -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    16,    17,    18,    19,    20,    21,   123,    22,    23,
      24,    25,    26,    27,   107,   108,    28,    29,    30,    41,
      42,    43,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      61,    62,    63,    75,    64,    31,    34,    35,    36,    65,
      37,    38,    39,    66,    78,   104,    52,    81,    47,   106,
      76,    77,   115,   125,   116,   126,    40,    73,    74,    85,
      32,     1,    33,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    99,   100,   101,    14,    52,
     106,     1,   105,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   110,   111,   112,    14,    15,
      49,     1,    45,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    90,    46,    48,    14,    15,
      82,   124,    97,    98,   127,   120,   121,    34,    35,    36,
      51,    37,    38,    39,    53,    83,    55,    54,    84,    15,
      66,    91,    92,    93,    94,    95,    96,    60,    67,    68,
      69,    70,    71,    72,    73,    74,     7,     8,     9,    10,
      11,    56,    13,    57,    58,    59,    15,    79,    80,   114,
     117,    86,    87,    88,    89,   102,   103,   109,   -41,   113,
     118,   122,    50,   119
};

static const yytype_int8 yycheck[] =
{
      31,    32,    33,    17,    34,    39,    19,    20,    21,    40,
      23,    24,    25,    18,    45,    80,    17,    48,    20,    84,
      34,    35,    38,    38,    40,    40,    39,    32,    33,    60,
      39,     3,    39,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    75,    76,    77,    20,    50,
     115,     3,    83,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    86,    87,    88,    20,    41,
      42,     3,    39,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    66,    39,    36,    20,    41,
      42,   122,    73,    74,   125,   116,   117,    19,    20,    21,
       0,    23,    24,    25,    37,    36,    20,    37,    39,    41,
      18,    67,    68,    69,    70,    71,    72,    39,    26,    27,
      28,    29,    30,    31,    32,    33,    10,    11,    12,    13,
      14,    37,    16,    37,    37,    37,    41,    20,    39,    20,
       4,    40,    40,    40,    40,    40,    40,    40,    37,    40,
      36,    39,    15,   115
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    20,    41,    44,    45,    46,    47,
      48,    49,    51,    52,    53,    54,    55,    56,    59,    60,
      61,    39,    39,    39,    19,    20,    21,    23,    24,    25,
      39,    62,    63,    64,    65,    39,    39,    20,    36,    42,
      45,     0,    46,    37,    37,    20,    37,    37,    37,    37,
      39,    62,    62,    62,    65,    62,    18,    26,    27,    28,
      29,    30,    31,    32,    33,    17,    34,    35,    62,    20,
      39,    62,    42,    36,    39,    62,    40,    40,    40,    40,
      64,    63,    63,    63,    63,    63,    63,    64,    64,    65,
      65,    65,    40,    40,    51,    62,    51,    57,    58,    40,
      47,    47,    47,    40,    20,    38,    40,     4,    36,    58,
      47,    47,    39,    50,    62,    38,    40,    62
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    47,    47,    48,    48,
      49,    50,    50,    51,    51,    51,    51,    51,    51,    52,
      53,    53,    54,    55,    56,    57,    57,    57,    58,    59,
      60,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      63,    63,    63,    63,    64,    64,    64,    64,    65,    65,
      65,    65,    65,    65,    65
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     1,     1,
       1,     1,     2,     2,     2,     1,     3,     2,     2,     4,
       9,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     7,     5,     5,     6,     0,     1,     3,     2,     4,
       4,     4,     2,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     2
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
  case 2: /* program: statement_list  */
#line 71 "parser.y"
                   {
        ASTNode *root = create_node("program", NULL);
        add_child(root, (yyvsp[0].node));
        print_tree(root, 0);
        free_tree(root);
    }
#line 1241 "parser.tab.c"
    break;

  case 3: /* statement_list: statement_list statement  */
#line 80 "parser.y"
                             {
        (yyval.node) = (yyvsp[-1].node);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1250 "parser.tab.c"
    break;

  case 4: /* statement_list: statement  */
#line 84 "parser.y"
                {
        (yyval.node) = create_node("statement list", NULL);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1259 "parser.tab.c"
    break;

  case 5: /* statement: declaration T_PV  */
#line 91 "parser.y"
                        { (yyval.node) = (yyvsp[-1].node); }
#line 1265 "parser.tab.c"
    break;

  case 6: /* statement: vector_decl T_PV  */
#line 92 "parser.y"
                        { (yyval.node) = (yyvsp[-1].node); }
#line 1271 "parser.tab.c"
    break;

  case 7: /* statement: assignment T_PV  */
#line 93 "parser.y"
                        { (yyval.node) = (yyvsp[-1].node); }
#line 1277 "parser.tab.c"
    break;

  case 8: /* statement: function_def  */
#line 94 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1283 "parser.tab.c"
    break;

  case 9: /* statement: if_stmt  */
#line 95 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1289 "parser.tab.c"
    break;

  case 10: /* statement: while_stmt  */
#line 96 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1295 "parser.tab.c"
    break;

  case 11: /* statement: loop_ate_stmt  */
#line 97 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1301 "parser.tab.c"
    break;

  case 12: /* statement: input_stmt T_PV  */
#line 98 "parser.y"
                        { (yyval.node) = (yyvsp[-1].node); }
#line 1307 "parser.tab.c"
    break;

  case 13: /* statement: output_stmt T_PV  */
#line 99 "parser.y"
                        { (yyval.node) = (yyvsp[-1].node); }
#line 1313 "parser.tab.c"
    break;

  case 14: /* statement: return_stmt T_PV  */
#line 100 "parser.y"
                        { (yyval.node) = (yyvsp[-1].node); }
#line 1319 "parser.tab.c"
    break;

  case 15: /* statement: block  */
#line 101 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1325 "parser.tab.c"
    break;

  case 16: /* block: T_LCHAVE statement_list T_RCHAVE  */
#line 105 "parser.y"
                                     {
        (yyval.node) = (yyvsp[-1].node); /* Bloco retorna a lista de statements dentro dele */
    }
#line 1333 "parser.tab.c"
    break;

  case 17: /* block: T_LCHAVE T_RCHAVE  */
#line 108 "parser.y"
                        {
        (yyval.node) = create_node("empty block", NULL);
    }
#line 1341 "parser.tab.c"
    break;

  case 18: /* declaration: type T_ID  */
#line 115 "parser.y"
              {
        (yyval.node) = create_node("declaration", NULL);
        add_child((yyval.node), (yyvsp[-1].node));
        add_child((yyval.node), create_node("id", (yyvsp[0].strval)));
    }
#line 1351 "parser.tab.c"
    break;

  case 19: /* declaration: type T_ID T_ATRIBUICAO expression  */
#line 120 "parser.y"
                                        {
        (yyval.node) = create_node("declaration_init", NULL);
        add_child((yyval.node), (yyvsp[-3].node));
        add_child((yyval.node), create_node("id", (yyvsp[-2].strval)));
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1362 "parser.tab.c"
    break;

  case 20: /* vector_decl: T_SERPENTE_KW T_ID T_LPAREN type T_RPAREN T_ATRIBUICAO T_LPAREN vector_elements T_RPAREN  */
#line 130 "parser.y"
                                                                                             {
        (yyval.node) = create_node("vector_declaration", (yyvsp[-7].strval)); // ID no value
        add_child((yyval.node), (yyvsp[-5].node)); // Tipo
        add_child((yyval.node), (yyvsp[-1].node)); // Elementos
    }
#line 1372 "parser.tab.c"
    break;

  case 21: /* vector_elements: vector_elements T_VIRGULA expression  */
#line 138 "parser.y"
                                         {
        (yyval.node) = (yyvsp[-2].node);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1381 "parser.tab.c"
    break;

  case 22: /* vector_elements: expression  */
#line 142 "parser.y"
                 {
        (yyval.node) = create_node("elements", NULL);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1390 "parser.tab.c"
    break;

  case 23: /* type: T_INTEIRO_KW  */
#line 150 "parser.y"
                    { (yyval.node) = create_node("type", "inteiro"); }
#line 1396 "parser.tab.c"
    break;

  case 24: /* type: T_QUEBRADO_KW  */
#line 151 "parser.y"
                    { (yyval.node) = create_node("type", "quebrado"); }
#line 1402 "parser.tab.c"
    break;

  case 25: /* type: T_CARACTERE_KW  */
#line 152 "parser.y"
                    { (yyval.node) = create_node("type", "caractere"); }
#line 1408 "parser.tab.c"
    break;

  case 26: /* type: T_TEXTO_KW  */
#line 153 "parser.y"
                    { (yyval.node) = create_node("type", "texto"); }
#line 1414 "parser.tab.c"
    break;

  case 27: /* type: T_FATO_KW  */
#line 154 "parser.y"
                    { (yyval.node) = create_node("type", "fato"); }
#line 1420 "parser.tab.c"
    break;

  case 28: /* type: T_VAZIO_KW  */
#line 155 "parser.y"
                    { (yyval.node) = create_node("type", "vazio"); }
#line 1426 "parser.tab.c"
    break;

  case 29: /* assignment: T_ID T_ATRIBUICAO expression  */
#line 160 "parser.y"
                                 {
        (yyval.node) = create_node("attribution", NULL);
        add_child((yyval.node), create_node("id", (yyvsp[-2].strval)));
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1436 "parser.tab.c"
    break;

  case 30: /* if_stmt: T_SE T_LPAREN expression T_RPAREN block  */
#line 169 "parser.y"
                                            {
        (yyval.node) = create_node("if_statement", NULL);
        add_child((yyval.node), create_node("condition", NULL));
        add_child((yyval.node)->children[0], (yyvsp[-2].node)); // Adiciona expr na condition
        add_child((yyval.node), (yyvsp[0].node)); // Bloco then
    }
#line 1447 "parser.tab.c"
    break;

  case 31: /* if_stmt: T_SE T_LPAREN expression T_RPAREN block T_SENAO block  */
#line 175 "parser.y"
                                                            {
        (yyval.node) = create_node("if_else_statement", NULL);
        add_child((yyval.node), create_node("condition", NULL));
        add_child((yyval.node)->children[0], (yyvsp[-4].node));
        add_child((yyval.node), (yyvsp[-2].node)); // Then
        add_child((yyval.node), create_node("else_block", NULL));
        add_child((yyval.node)->children[2], (yyvsp[0].node)); // Else
    }
#line 1460 "parser.tab.c"
    break;

  case 32: /* while_stmt: T_ENQUANTO T_LPAREN expression T_RPAREN block  */
#line 187 "parser.y"
                                                  {
        (yyval.node) = create_node("while_loop", NULL);
        add_child((yyval.node), create_node("condition", NULL));
        add_child((yyval.node)->children[0], (yyvsp[-2].node));
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1471 "parser.tab.c"
    break;

  case 33: /* loop_ate_stmt: T_ATE T_LPAREN expression T_RPAREN block  */
#line 196 "parser.y"
                                             {
        (yyval.node) = create_node("ate_loop", NULL);
        add_child((yyval.node), create_node("condition", NULL));
        add_child((yyval.node)->children[0], (yyvsp[-2].node));
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1482 "parser.tab.c"
    break;

  case 34: /* function_def: type T_ID T_LPAREN param_list T_RPAREN block  */
#line 206 "parser.y"
                                                 {
        (yyval.node) = create_node("function_definition", (yyvsp[-4].strval));
        add_child((yyval.node), (yyvsp[-5].node)); // Tipo Retorno
        add_child((yyval.node), (yyvsp[-2].node)); // Params
        add_child((yyval.node), (yyvsp[0].node)); // Corpo
    }
#line 1493 "parser.tab.c"
    break;

  case 35: /* param_list: %empty  */
#line 215 "parser.y"
                { (yyval.node) = create_node("params", "none"); }
#line 1499 "parser.tab.c"
    break;

  case 36: /* param_list: param  */
#line 216 "parser.y"
            {
        (yyval.node) = create_node("params", NULL);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1508 "parser.tab.c"
    break;

  case 37: /* param_list: param_list T_VIRGULA param  */
#line 220 "parser.y"
                                 {
        (yyval.node) = (yyvsp[-2].node);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1517 "parser.tab.c"
    break;

  case 38: /* param: type T_ID  */
#line 227 "parser.y"
              {
        (yyval.node) = create_node("param", (yyvsp[0].strval));
        add_child((yyval.node), (yyvsp[-1].node));
    }
#line 1526 "parser.tab.c"
    break;

  case 39: /* input_stmt: T_RECEBA T_LPAREN T_ID T_RPAREN  */
#line 234 "parser.y"
                                    {
        (yyval.node) = create_node("receba", (yyvsp[-1].strval));
    }
#line 1534 "parser.tab.c"
    break;

  case 40: /* output_stmt: T_IMPRIMA T_LPAREN expression T_RPAREN  */
#line 240 "parser.y"
                                           {
        (yyval.node) = create_node("imprima", NULL);
        add_child((yyval.node), (yyvsp[-1].node));
    }
#line 1543 "parser.tab.c"
    break;

  case 41: /* return_stmt: T_DEVOLVA T_LPAREN expression T_RPAREN  */
#line 247 "parser.y"
                                           { /* Com parenteses */
        (yyval.node) = create_node("devolva", NULL);
        add_child((yyval.node), (yyvsp[-1].node));
    }
#line 1552 "parser.tab.c"
    break;

  case 42: /* return_stmt: T_DEVOLVA expression  */
#line 251 "parser.y"
                           { /* Sem parenteses */
        (yyval.node) = create_node("devolva", NULL);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1561 "parser.tab.c"
    break;

  case 43: /* expression: simple_expression  */
#line 259 "parser.y"
                      { (yyval.node) = (yyvsp[0].node); }
#line 1567 "parser.tab.c"
    break;

  case 44: /* expression: simple_expression T_IGUAL simple_expression  */
#line 260 "parser.y"
                                                  {
        (yyval.node) = create_node("relop", "=="); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1575 "parser.tab.c"
    break;

  case 45: /* expression: simple_expression T_DIFERENTE simple_expression  */
#line 263 "parser.y"
                                                      {
        (yyval.node) = create_node("relop", "!="); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1583 "parser.tab.c"
    break;

  case 46: /* expression: simple_expression T_MENOR simple_expression  */
#line 266 "parser.y"
                                                  {
        (yyval.node) = create_node("relop", "<"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1591 "parser.tab.c"
    break;

  case 47: /* expression: simple_expression T_MAIOR simple_expression  */
#line 269 "parser.y"
                                                  {
        (yyval.node) = create_node("relop", ">"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1599 "parser.tab.c"
    break;

  case 48: /* expression: simple_expression T_MENOR_IGUAL simple_expression  */
#line 272 "parser.y"
                                                        {
        (yyval.node) = create_node("relop", "<="); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1607 "parser.tab.c"
    break;

  case 49: /* expression: simple_expression T_MAIOR_IGUAL simple_expression  */
#line 275 "parser.y"
                                                        {
        (yyval.node) = create_node("relop", ">="); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1615 "parser.tab.c"
    break;

  case 50: /* simple_expression: term  */
#line 281 "parser.y"
         { (yyval.node) = (yyvsp[0].node); }
#line 1621 "parser.tab.c"
    break;

  case 51: /* simple_expression: simple_expression T_SOMA term  */
#line 282 "parser.y"
                                    {
        (yyval.node) = create_node("op", "+"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1629 "parser.tab.c"
    break;

  case 52: /* simple_expression: simple_expression T_SUB term  */
#line 285 "parser.y"
                                   {
        (yyval.node) = create_node("op", "-"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1637 "parser.tab.c"
    break;

  case 53: /* simple_expression: simple_expression T_OU term  */
#line 288 "parser.y"
                                  {
        (yyval.node) = create_node("logic", "ou"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1645 "parser.tab.c"
    break;

  case 54: /* term: factor  */
#line 294 "parser.y"
           { (yyval.node) = (yyvsp[0].node); }
#line 1651 "parser.tab.c"
    break;

  case 55: /* term: term T_MULT factor  */
#line 295 "parser.y"
                         {
        (yyval.node) = create_node("op", "*"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1659 "parser.tab.c"
    break;

  case 56: /* term: term T_DIV factor  */
#line 298 "parser.y"
                        {
        (yyval.node) = create_node("op", "/"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1667 "parser.tab.c"
    break;

  case 57: /* term: term T_E factor  */
#line 301 "parser.y"
                      {
        (yyval.node) = create_node("logic", "e"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1675 "parser.tab.c"
    break;

  case 58: /* factor: T_LPAREN expression T_RPAREN  */
#line 307 "parser.y"
                                 { (yyval.node) = (yyvsp[-1].node); }
#line 1681 "parser.tab.c"
    break;

  case 59: /* factor: T_ID  */
#line 308 "parser.y"
           {
        (yyval.node) = create_node("id", (yyvsp[0].strval));
    }
#line 1689 "parser.tab.c"
    break;

  case 60: /* factor: T_INTEIRO_LIT  */
#line 311 "parser.y"
                    {
        char buffer[20];
        sprintf(buffer, "%d", (yyvsp[0].intval));
        (yyval.node) = create_node("literal_int", strdup(buffer));
    }
#line 1699 "parser.tab.c"
    break;

  case 61: /* factor: T_QUEBRADO_LIT  */
#line 316 "parser.y"
                     {
        (yyval.node) = create_node("literal_float", (yyvsp[0].strval));
    }
#line 1707 "parser.tab.c"
    break;

  case 62: /* factor: T_TEXTO_LIT  */
#line 319 "parser.y"
                  {
        (yyval.node) = create_node("literal_string", (yyvsp[0].strval));
    }
#line 1715 "parser.tab.c"
    break;

  case 63: /* factor: T_FATO_LIT  */
#line 322 "parser.y"
                 {
        (yyval.node) = create_node("literal_bool", (yyvsp[0].strval));
    }
#line 1723 "parser.tab.c"
    break;

  case 64: /* factor: T_NAO factor  */
#line 325 "parser.y"
                   {
        (yyval.node) = create_node("not", NULL);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1732 "parser.tab.c"
    break;


#line 1736 "parser.tab.c"

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

#line 331 "parser.y"


/* --- Funções Auxiliares em C --- */

/* Cria um novo nó da AST */
ASTNode* create_node(char *type, char *value) {
    ASTNode *node = (ASTNode*) malloc(sizeof(ASTNode));
    node->type = strdup(type);
    if (value) node->value = strdup(value);
    else node->value = NULL;
    node->children = NULL;
    node->child_count = 0;
    return node;
}

/* Adiciona um filho a um nó pai */
void add_child(ASTNode *parent, ASTNode *child) {
    parent->child_count++;
    parent->children = (ASTNode**) realloc(parent->children, parent->child_count * sizeof(ASTNode*));
    parent->children[parent->child_count - 1] = child;
}

/* Imprime a árvore recursivamente (formato solicitado) */
void print_tree(ASTNode *node, int level) {
    if (!node) return;

    // Indentação baseada no nível
    for (int i = 0; i < level; i++) printf("  ");

    // Imprime Tipo
    printf("%s", node->type);

    // Se tiver valor, imprime na linha de baixo (ou ao lado, dependendo da preferência)
    // O exemplo do PDF mostra o valor na linha de baixo com mesma indentação do pai?
    // O exemplo mostra: "attribution" (pai), depois "X" (filho), depois "5" (filho).
    // Mas nós tipo INT X, o X é valor.
    // Vamos imprimir o valor se existir
    if (node->value) {
        printf("\n");
        for (int i = 0; i < level + 1; i++) printf("  ");
        printf("%s", node->value);
    }
    printf("\n");

    for (int i = 0; i < node->child_count; i++) {
        print_tree(node->children[i], level + 1);
    }
}

void free_tree(ASTNode *node) {
    if (!node) return;
    for (int i = 0; i < node->child_count; i++) {
        free_tree(node->children[i]);
    }
    free(node->children);
    free(node->type);
    if (node->value) free(node->value);
    free(node);
}

void yyerror(const char *s) {
    fprintf(stderr, "Erro sintático: %s\n", s);
}

int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror(argv[1]);
            return 1;
        }
    }
    yyparse();
    return 0;
}
