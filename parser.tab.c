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

typedef struct ASTNode {
    char *type;                 
    char *value;                
    struct ASTNode **children;  
    int child_count;
} ASTNode;

ASTNode* create_node(char *type, char *value);
void add_child(ASTNode *parent, ASTNode *child);
void print_tree(ASTNode *node, int level);
void free_tree(ASTNode *node);

int yylex();
void yyerror(const char *s);
extern FILE *yyin;

#line 93 "parser.tab.c"

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
  YYSYMBOL_T_NADA = 16,                    /* T_NADA  */
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
  YYSYMBOL_programa = 44,                  /* programa  */
  YYSYMBOL_lista_comandos = 45,            /* lista_comandos  */
  YYSYMBOL_comando = 46,                   /* comando  */
  YYSYMBOL_bloco = 47,                     /* bloco  */
  YYSYMBOL_declaracao = 48,                /* declaracao  */
  YYSYMBOL_declaracao_serpente = 49,       /* declaracao_serpente  */
  YYSYMBOL_elementos_serpente = 50,        /* elementos_serpente  */
  YYSYMBOL_tipo = 51,                      /* tipo  */
  YYSYMBOL_atribuicao = 52,                /* atribuicao  */
  YYSYMBOL_comando_se = 53,                /* comando_se  */
  YYSYMBOL_comando_enquanto = 54,          /* comando_enquanto  */
  YYSYMBOL_comando_ate = 55,               /* comando_ate  */
  YYSYMBOL_definicao_funcao = 56,          /* definicao_funcao  */
  YYSYMBOL_lista_parametros = 57,          /* lista_parametros  */
  YYSYMBOL_parametro = 58,                 /* parametro  */
  YYSYMBOL_comando_receba = 59,            /* comando_receba  */
  YYSYMBOL_comando_imprima = 60,           /* comando_imprima  */
  YYSYMBOL_comando_devolva = 61,           /* comando_devolva  */
  YYSYMBOL_expressao = 62,                 /* expressao  */
  YYSYMBOL_expressao_simples = 63,         /* expressao_simples  */
  YYSYMBOL_termo = 64,                     /* termo  */
  YYSYMBOL_fator = 65                      /* fator  */
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
#define YYLAST   143

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  125

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
       0,    67,    67,    76,    80,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   101,   104,   111,   116,
     126,   134,   138,   145,   146,   147,   148,   149,   150,   155,
     163,   170,   183,   193,   203,   212,   213,   217,   224,   231,
     237,   244,   251,   252,   255,   258,   261,   264,   267,   273,
     274,   277,   280,   286,   287,   290,   293,   299,   300,   303,
     308,   311,   314,   317
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
  "T_FATO_KW", "T_SERPENTE_KW", "T_NADA", "T_E", "T_OU", "T_NAO", "T_ID",
  "T_TEXTO_LIT", "T_CARACTERE_LIT", "T_FATO_LIT", "T_QUEBRADO_LIT",
  "T_INTEIRO_LIT", "T_IGUAL", "T_DIFERENTE", "T_MENOR", "T_MAIOR",
  "T_MENOR_IGUAL", "T_MAIOR_IGUAL", "T_SOMA", "T_SUB", "T_MULT", "T_DIV",
  "T_ATRIBUICAO", "T_PV", "T_VIRGULA", "T_LPAREN", "T_RPAREN", "T_LCHAVE",
  "T_RCHAVE", "$accept", "programa", "lista_comandos", "comando", "bloco",
  "declaracao", "declaracao_serpente", "elementos_serpente", "tipo",
  "atribuicao", "comando_se", "comando_enquanto", "comando_ate",
  "definicao_funcao", "lista_parametros", "parametro", "comando_receba",
  "comando_imprima", "comando_devolva", "expressao", "expressao_simples",
  "termo", "fator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-77)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      69,   -24,    -7,     2,    77,     3,     4,   -77,   -77,   -77,
     -77,   -77,    32,   -77,    17,    13,    57,    69,   -77,   -77,
      33,    49,    51,    50,   -77,   -77,   -77,   -77,    55,    56,
      67,    77,    77,    77,    77,   -77,   -77,   -77,   -77,   -77,
      77,   -77,    91,    -4,   -77,    77,    70,    64,    77,   -77,
      53,   -77,   -77,   -77,   -77,    11,   -77,   -77,   -77,   -77,
      65,    68,    71,   -77,    72,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    73,    74,   115,
     -77,   -77,    77,   115,    89,    89,    89,   -77,    -4,    16,
      16,    16,    16,    16,    16,    -4,    -4,   -77,   -77,   -77,
     -77,   -77,    75,   -77,   118,   -32,   -77,   135,   -77,   -77,
     104,   -77,   115,    89,    89,   102,   -77,   -77,   -77,    77,
      -3,   -77,    77,   -77,   -77
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,     0,    28,     0,     0,     0,     2,     4,    15,
       0,     0,     0,     0,     9,    10,    11,     8,     0,     0,
       0,     0,     0,     0,     0,    58,    61,    62,    60,    59,
       0,    41,    42,    49,    53,     0,     0,     0,     0,    17,
       0,     1,     3,     5,     6,    18,     7,    12,    13,    14,
       0,     0,     0,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,    16,     0,    35,     0,     0,     0,    57,    52,    43,
      44,    45,    46,    47,    48,    50,    51,    56,    54,    55,
      40,    39,     0,    19,     0,     0,    36,    30,    32,    33,
       0,    38,     0,     0,     0,     0,    37,    34,    31,     0,
       0,    22,     0,    20,    21
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -77,   -77,   127,   -12,   -74,   -77,   -77,   -77,   -76,   -77,
     -77,   -77,   -77,   -77,   -77,    31,   -77,   -77,   -77,   -31,
      66,    34,   -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    16,    17,    18,    19,    20,    21,   120,    22,    23,
      24,    25,    26,    27,   105,   106,    28,    29,    30,    41,
      42,    43,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      60,    61,    62,   102,    63,    52,   112,   104,   113,    64,
     107,   108,   109,    74,    77,    31,     1,    80,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      75,    76,    32,    14,    65,   122,   104,   123,    52,   117,
     118,    33,    45,    46,    97,    98,    99,    82,    72,    73,
      83,   103,    47,    48,    15,    49,     1,    51,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      53,    55,     1,    14,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    54,    56,   121,    14,
      78,   124,    57,    58,    15,    81,    34,    35,    36,    88,
      37,    38,    39,    79,    59,    84,    95,    96,    85,    65,
      15,    86,    87,   100,   101,   110,    40,    66,    67,    68,
      69,    70,    71,    72,    73,     7,     8,     9,    10,    11,
      15,    13,    89,    90,    91,    92,    93,    94,   111,   114,
     115,   119,    50,   116
};

static const yytype_int8 yycheck[] =
{
      31,    32,    33,    79,    34,    17,    38,    83,    40,    40,
      84,    85,    86,    17,    45,    39,     3,    48,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      34,    35,    39,    20,    18,    38,   112,    40,    50,   113,
     114,    39,    39,    39,    74,    75,    76,    36,    32,    33,
      39,    82,    20,    36,    41,    42,     3,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      37,    20,     3,    20,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    37,    37,   119,    20,
      20,   122,    37,    37,    41,    42,    19,    20,    21,    65,
      23,    24,    25,    39,    37,    40,    72,    73,    40,    18,
      41,    40,    40,    40,    40,    40,    39,    26,    27,    28,
      29,    30,    31,    32,    33,    10,    11,    12,    13,    14,
      41,    16,    66,    67,    68,    69,    70,    71,    20,     4,
      36,    39,    15,   112
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
      62,    62,    62,    65,    62,    18,    26,    27,    28,    29,
      30,    31,    32,    33,    17,    34,    35,    62,    20,    39,
      62,    42,    36,    39,    40,    40,    40,    40,    64,    63,
      63,    63,    63,    63,    63,    64,    64,    65,    65,    65,
      40,    40,    51,    62,    51,    57,    58,    47,    47,    47,
      40,    20,    38,    40,     4,    36,    58,    47,    47,    39,
      50,    62,    38,    40,    62
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    47,    47,    48,    48,
      49,    50,    50,    51,    51,    51,    51,    51,    51,    52,
      53,    53,    54,    55,    56,    57,    57,    57,    58,    59,
      60,    61,    62,    62,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    64,    64,    64,    64,    65,    65,    65,
      65,    65,    65,    65
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     1,     1,
       1,     1,     2,     2,     2,     1,     3,     2,     2,     4,
       9,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     7,     5,     5,     6,     0,     1,     3,     2,     4,
       4,     2,     1,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     2
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
  case 2: /* programa: lista_comandos  */
#line 67 "parser.y"
                   {
        ASTNode *root = create_node("programa", NULL);
        add_child(root, (yyvsp[0].node));
        print_tree(root, 0);
        free_tree(root);
    }
#line 1238 "parser.tab.c"
    break;

  case 3: /* lista_comandos: lista_comandos comando  */
#line 76 "parser.y"
                           {
        (yyval.node) = (yyvsp[-1].node);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1247 "parser.tab.c"
    break;

  case 4: /* lista_comandos: comando  */
#line 80 "parser.y"
              {
        (yyval.node) = create_node("lista_comandos", NULL);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1256 "parser.tab.c"
    break;

  case 5: /* comando: declaracao T_PV  */
#line 87 "parser.y"
                             { (yyval.node) = (yyvsp[-1].node); }
#line 1262 "parser.tab.c"
    break;

  case 6: /* comando: declaracao_serpente T_PV  */
#line 88 "parser.y"
                               { (yyval.node) = (yyvsp[-1].node); }
#line 1268 "parser.tab.c"
    break;

  case 7: /* comando: atribuicao T_PV  */
#line 89 "parser.y"
                             { (yyval.node) = (yyvsp[-1].node); }
#line 1274 "parser.tab.c"
    break;

  case 8: /* comando: definicao_funcao  */
#line 90 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1280 "parser.tab.c"
    break;

  case 9: /* comando: comando_se  */
#line 91 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1286 "parser.tab.c"
    break;

  case 10: /* comando: comando_enquanto  */
#line 92 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1292 "parser.tab.c"
    break;

  case 11: /* comando: comando_ate  */
#line 93 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1298 "parser.tab.c"
    break;

  case 12: /* comando: comando_receba T_PV  */
#line 94 "parser.y"
                             { (yyval.node) = (yyvsp[-1].node); }
#line 1304 "parser.tab.c"
    break;

  case 13: /* comando: comando_imprima T_PV  */
#line 95 "parser.y"
                             { (yyval.node) = (yyvsp[-1].node); }
#line 1310 "parser.tab.c"
    break;

  case 14: /* comando: comando_devolva T_PV  */
#line 96 "parser.y"
                             { (yyval.node) = (yyvsp[-1].node); }
#line 1316 "parser.tab.c"
    break;

  case 15: /* comando: bloco  */
#line 97 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1322 "parser.tab.c"
    break;

  case 16: /* bloco: T_LCHAVE lista_comandos T_RCHAVE  */
#line 101 "parser.y"
                                     {
        (yyval.node) = (yyvsp[-1].node); 
    }
#line 1330 "parser.tab.c"
    break;

  case 17: /* bloco: T_LCHAVE T_RCHAVE  */
#line 104 "parser.y"
                        {
        (yyval.node) = create_node("bloco_vazio", NULL);
    }
#line 1338 "parser.tab.c"
    break;

  case 18: /* declaracao: tipo T_ID  */
#line 111 "parser.y"
              {
        (yyval.node) = create_node("declaracao", NULL);
        add_child((yyval.node), (yyvsp[-1].node));
        add_child((yyval.node), create_node("id", (yyvsp[0].strval)));
    }
#line 1348 "parser.tab.c"
    break;

  case 19: /* declaracao: tipo T_ID T_ATRIBUICAO expressao  */
#line 116 "parser.y"
                                       {
        (yyval.node) = create_node("declaracao_init", NULL);
        add_child((yyval.node), (yyvsp[-3].node));
        add_child((yyval.node), create_node("id", (yyvsp[-2].strval)));
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1359 "parser.tab.c"
    break;

  case 20: /* declaracao_serpente: T_SERPENTE_KW T_ID T_LPAREN tipo T_RPAREN T_ATRIBUICAO T_LPAREN elementos_serpente T_RPAREN  */
#line 126 "parser.y"
                                                                                                {
        (yyval.node) = create_node("serpente_declaracao", (yyvsp[-7].strval)); 
        add_child((yyval.node), (yyvsp[-5].node)); 
        add_child((yyval.node), (yyvsp[-1].node)); 
    }
#line 1369 "parser.tab.c"
    break;

  case 21: /* elementos_serpente: elementos_serpente T_VIRGULA expressao  */
#line 134 "parser.y"
                                           {
        (yyval.node) = (yyvsp[-2].node);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1378 "parser.tab.c"
    break;

  case 22: /* elementos_serpente: expressao  */
#line 138 "parser.y"
                {
        (yyval.node) = create_node("elementos", NULL);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1387 "parser.tab.c"
    break;

  case 23: /* tipo: T_INTEIRO_KW  */
#line 145 "parser.y"
                    { (yyval.node) = create_node("tipo", "inteiro"); }
#line 1393 "parser.tab.c"
    break;

  case 24: /* tipo: T_QUEBRADO_KW  */
#line 146 "parser.y"
                    { (yyval.node) = create_node("tipo", "quebrado"); }
#line 1399 "parser.tab.c"
    break;

  case 25: /* tipo: T_CARACTERE_KW  */
#line 147 "parser.y"
                    { (yyval.node) = create_node("tipo", "caractere"); }
#line 1405 "parser.tab.c"
    break;

  case 26: /* tipo: T_TEXTO_KW  */
#line 148 "parser.y"
                    { (yyval.node) = create_node("tipo", "texto"); }
#line 1411 "parser.tab.c"
    break;

  case 27: /* tipo: T_FATO_KW  */
#line 149 "parser.y"
                    { (yyval.node) = create_node("tipo", "fato"); }
#line 1417 "parser.tab.c"
    break;

  case 28: /* tipo: T_NADA  */
#line 150 "parser.y"
                    { (yyval.node) = create_node("tipo", "nada"); }
#line 1423 "parser.tab.c"
    break;

  case 29: /* atribuicao: T_ID T_ATRIBUICAO expressao  */
#line 155 "parser.y"
                                {
        (yyval.node) = create_node("atribuicao", NULL);
        add_child((yyval.node), create_node("id", (yyvsp[-2].strval)));
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1433 "parser.tab.c"
    break;

  case 30: /* comando_se: T_SE T_LPAREN expressao T_RPAREN bloco  */
#line 163 "parser.y"
                                           {
        (yyval.node) = create_node("se_statement", NULL);
        ASTNode *cond = create_node("condicao", NULL);
        add_child(cond, (yyvsp[-2].node));
        add_child((yyval.node), cond);
        add_child((yyval.node), (yyvsp[0].node)); 
    }
#line 1445 "parser.tab.c"
    break;

  case 31: /* comando_se: T_SE T_LPAREN expressao T_RPAREN bloco T_SENAO bloco  */
#line 170 "parser.y"
                                                           {
        (yyval.node) = create_node("se_senao_statement", NULL);
        ASTNode *cond = create_node("condicao", NULL);
        add_child(cond, (yyvsp[-4].node));
        add_child((yyval.node), cond);
        add_child((yyval.node), (yyvsp[-2].node)); 
        ASTNode *else_bk = create_node("bloco_senao", NULL);
        add_child(else_bk, (yyvsp[0].node));
        add_child((yyval.node), else_bk);
    }
#line 1460 "parser.tab.c"
    break;

  case 32: /* comando_enquanto: T_ENQUANTO T_LPAREN expressao T_RPAREN bloco  */
#line 183 "parser.y"
                                                 {
        (yyval.node) = create_node("enquanto_loop", NULL);
        ASTNode *cond = create_node("condicao", NULL);
        add_child(cond, (yyvsp[-2].node));
        add_child((yyval.node), cond);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1472 "parser.tab.c"
    break;

  case 33: /* comando_ate: T_ATE T_LPAREN expressao T_RPAREN bloco  */
#line 193 "parser.y"
                                            {
        (yyval.node) = create_node("ate_loop", NULL);
        ASTNode *cond = create_node("condicao", NULL);
        add_child(cond, (yyvsp[-2].node));
        add_child((yyval.node), cond);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1484 "parser.tab.c"
    break;

  case 34: /* definicao_funcao: tipo T_ID T_LPAREN lista_parametros T_RPAREN bloco  */
#line 203 "parser.y"
                                                       {
        (yyval.node) = create_node("funcao_definicao", (yyvsp[-4].strval));
        add_child((yyval.node), (yyvsp[-5].node)); 
        add_child((yyval.node), (yyvsp[-2].node)); 
        add_child((yyval.node), (yyvsp[0].node)); 
    }
#line 1495 "parser.tab.c"
    break;

  case 35: /* lista_parametros: %empty  */
#line 212 "parser.y"
                { (yyval.node) = create_node("parametros", "nenhum"); }
#line 1501 "parser.tab.c"
    break;

  case 36: /* lista_parametros: parametro  */
#line 213 "parser.y"
                {
        (yyval.node) = create_node("parametros", NULL);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1510 "parser.tab.c"
    break;

  case 37: /* lista_parametros: lista_parametros T_VIRGULA parametro  */
#line 217 "parser.y"
                                           {
        (yyval.node) = (yyvsp[-2].node);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1519 "parser.tab.c"
    break;

  case 38: /* parametro: tipo T_ID  */
#line 224 "parser.y"
              {
        (yyval.node) = create_node("parametro", (yyvsp[0].strval));
        add_child((yyval.node), (yyvsp[-1].node));
    }
#line 1528 "parser.tab.c"
    break;

  case 39: /* comando_receba: T_RECEBA T_LPAREN T_ID T_RPAREN  */
#line 231 "parser.y"
                                    {
        (yyval.node) = create_node("receba", (yyvsp[-1].strval));
    }
#line 1536 "parser.tab.c"
    break;

  case 40: /* comando_imprima: T_IMPRIMA T_LPAREN expressao T_RPAREN  */
#line 237 "parser.y"
                                          {
        (yyval.node) = create_node("imprima", NULL);
        add_child((yyval.node), (yyvsp[-1].node));
    }
#line 1545 "parser.tab.c"
    break;

  case 41: /* comando_devolva: T_DEVOLVA expressao  */
#line 244 "parser.y"
                        { 
        (yyval.node) = create_node("devolva", NULL);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1554 "parser.tab.c"
    break;

  case 42: /* expressao: expressao_simples  */
#line 251 "parser.y"
                      { (yyval.node) = (yyvsp[0].node); }
#line 1560 "parser.tab.c"
    break;

  case 43: /* expressao: expressao_simples T_IGUAL expressao_simples  */
#line 252 "parser.y"
                                                  {
        (yyval.node) = create_node("op_relacional", "=="); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1568 "parser.tab.c"
    break;

  case 44: /* expressao: expressao_simples T_DIFERENTE expressao_simples  */
#line 255 "parser.y"
                                                      {
        (yyval.node) = create_node("op_relacional", "!="); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1576 "parser.tab.c"
    break;

  case 45: /* expressao: expressao_simples T_MENOR expressao_simples  */
#line 258 "parser.y"
                                                  {
        (yyval.node) = create_node("op_relacional", "<"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1584 "parser.tab.c"
    break;

  case 46: /* expressao: expressao_simples T_MAIOR expressao_simples  */
#line 261 "parser.y"
                                                  {
        (yyval.node) = create_node("op_relacional", ">"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1592 "parser.tab.c"
    break;

  case 47: /* expressao: expressao_simples T_MENOR_IGUAL expressao_simples  */
#line 264 "parser.y"
                                                        {
        (yyval.node) = create_node("op_relacional", "<="); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1600 "parser.tab.c"
    break;

  case 48: /* expressao: expressao_simples T_MAIOR_IGUAL expressao_simples  */
#line 267 "parser.y"
                                                        {
        (yyval.node) = create_node("op_relacional", ">="); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1608 "parser.tab.c"
    break;

  case 49: /* expressao_simples: termo  */
#line 273 "parser.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 1614 "parser.tab.c"
    break;

  case 50: /* expressao_simples: expressao_simples T_SOMA termo  */
#line 274 "parser.y"
                                     {
        (yyval.node) = create_node("op_aritmetica", "+"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1622 "parser.tab.c"
    break;

  case 51: /* expressao_simples: expressao_simples T_SUB termo  */
#line 277 "parser.y"
                                    {
        (yyval.node) = create_node("op_aritmetica", "-"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1630 "parser.tab.c"
    break;

  case 52: /* expressao_simples: expressao_simples T_OU termo  */
#line 280 "parser.y"
                                   {
        (yyval.node) = create_node("op_logica", "ou"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1638 "parser.tab.c"
    break;

  case 53: /* termo: fator  */
#line 286 "parser.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 1644 "parser.tab.c"
    break;

  case 54: /* termo: termo T_MULT fator  */
#line 287 "parser.y"
                         {
        (yyval.node) = create_node("op_aritmetica", "*"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1652 "parser.tab.c"
    break;

  case 55: /* termo: termo T_DIV fator  */
#line 290 "parser.y"
                        {
        (yyval.node) = create_node("op_aritmetica", "/"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1660 "parser.tab.c"
    break;

  case 56: /* termo: termo T_E fator  */
#line 293 "parser.y"
                      {
        (yyval.node) = create_node("op_logica", "e"); add_child((yyval.node), (yyvsp[-2].node)); add_child((yyval.node), (yyvsp[0].node));
    }
#line 1668 "parser.tab.c"
    break;

  case 57: /* fator: T_LPAREN expressao T_RPAREN  */
#line 299 "parser.y"
                                { (yyval.node) = (yyvsp[-1].node); }
#line 1674 "parser.tab.c"
    break;

  case 58: /* fator: T_ID  */
#line 300 "parser.y"
           {
        (yyval.node) = create_node("id", (yyvsp[0].strval));
    }
#line 1682 "parser.tab.c"
    break;

  case 59: /* fator: T_INTEIRO_LIT  */
#line 303 "parser.y"
                    {
        char buffer[20];
        sprintf(buffer, "%d", (yyvsp[0].intval));
        (yyval.node) = create_node("literal_inteiro", strdup(buffer));
    }
#line 1692 "parser.tab.c"
    break;

  case 60: /* fator: T_QUEBRADO_LIT  */
#line 308 "parser.y"
                     {
        (yyval.node) = create_node("literal_quebrado", (yyvsp[0].strval));
    }
#line 1700 "parser.tab.c"
    break;

  case 61: /* fator: T_TEXTO_LIT  */
#line 311 "parser.y"
                  {
        (yyval.node) = create_node("literal_texto", (yyvsp[0].strval));
    }
#line 1708 "parser.tab.c"
    break;

  case 62: /* fator: T_FATO_LIT  */
#line 314 "parser.y"
                 {
        (yyval.node) = create_node("literal_fato", (yyvsp[0].strval));
    }
#line 1716 "parser.tab.c"
    break;

  case 63: /* fator: T_NAO fator  */
#line 317 "parser.y"
                  {
        (yyval.node) = create_node("nao", NULL);
        add_child((yyval.node), (yyvsp[0].node));
    }
#line 1725 "parser.tab.c"
    break;


#line 1729 "parser.tab.c"

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

#line 323 "parser.y"


ASTNode* create_node(char *type, char *value) {
    ASTNode *node = (ASTNode*) malloc(sizeof(ASTNode));
    node->type = strdup(type);
    if (value) node->value = strdup(value);
    else node->value = NULL;
    node->children = NULL;
    node->child_count = 0;
    return node;
}

void add_child(ASTNode *parent, ASTNode *child) {
    parent->child_count++;
    parent->children = (ASTNode**) realloc(parent->children, parent->child_count * sizeof(ASTNode*));
    parent->children[parent->child_count - 1] = child;
}

void print_tree(ASTNode *node, int level) {
    if (!node) return;

    for (int i = 0; i < level; i++) printf("  ");
    printf("%s", node->type);
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
