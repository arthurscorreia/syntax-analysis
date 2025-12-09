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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    T_SE = 258,                    /* T_SE  */
    T_SENAO = 259,                 /* T_SENAO  */
    T_ENQUANTO = 260,              /* T_ENQUANTO  */
    T_ATE = 261,                   /* T_ATE  */
    T_DEVOLVA = 262,               /* T_DEVOLVA  */
    T_IMPRIMA = 263,               /* T_IMPRIMA  */
    T_RECEBA = 264,                /* T_RECEBA  */
    T_INTEIRO_KW = 265,            /* T_INTEIRO_KW  */
    T_QUEBRADO_KW = 266,           /* T_QUEBRADO_KW  */
    T_CARACTERE_KW = 267,          /* T_CARACTERE_KW  */
    T_TEXTO_KW = 268,              /* T_TEXTO_KW  */
    T_FATO_KW = 269,               /* T_FATO_KW  */
    T_SERPENTE_KW = 270,           /* T_SERPENTE_KW  */
    T_VAZIO_KW = 271,              /* T_VAZIO_KW  */
    T_E = 272,                     /* T_E  */
    T_OU = 273,                    /* T_OU  */
    T_NAO = 274,                   /* T_NAO  */
    T_ID = 275,                    /* T_ID  */
    T_TEXTO_LIT = 276,             /* T_TEXTO_LIT  */
    T_CARACTERE_LIT = 277,         /* T_CARACTERE_LIT  */
    T_FATO_LIT = 278,              /* T_FATO_LIT  */
    T_QUEBRADO_LIT = 279,          /* T_QUEBRADO_LIT  */
    T_INTEIRO_LIT = 280,           /* T_INTEIRO_LIT  */
    T_IGUAL = 281,                 /* T_IGUAL  */
    T_DIFERENTE = 282,             /* T_DIFERENTE  */
    T_MENOR = 283,                 /* T_MENOR  */
    T_MAIOR = 284,                 /* T_MAIOR  */
    T_MENOR_IGUAL = 285,           /* T_MENOR_IGUAL  */
    T_MAIOR_IGUAL = 286,           /* T_MAIOR_IGUAL  */
    T_SOMA = 287,                  /* T_SOMA  */
    T_SUB = 288,                   /* T_SUB  */
    T_MULT = 289,                  /* T_MULT  */
    T_DIV = 290,                   /* T_DIV  */
    T_ATRIBUICAO = 291,            /* T_ATRIBUICAO  */
    T_PV = 292,                    /* T_PV  */
    T_VIRGULA = 293,               /* T_VIRGULA  */
    T_LPAREN = 294,                /* T_LPAREN  */
    T_RPAREN = 295,                /* T_RPAREN  */
    T_LCHAVE = 296,                /* T_LCHAVE  */
    T_RCHAVE = 297                 /* T_RCHAVE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "parser.y"

    int intval;
    double floatval;
    char *strval;
    struct ASTNode *node;

#line 113 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
