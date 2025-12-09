%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "parser.tab.h" // Inclui os tokens gerados pelo Bison

/* Não precisamos mais definir TokenType enum aqui, o Bison define */
%}

%option noyywrap
%option yylineno

/* Definições */
DIGITO         [0-9]
LETRA          [a-zA-Z_]
ID             {LETRA}({LETRA}|{DIGITO})*
INTEIRO        {DIGITO}+
QUEBRADO       {DIGITO}+\.{DIGITO}+
COMENTARIO_LINHA \/\/[^\n]*
COMENTARIO_BLOCO \/\*([^*]|\*+[^*/])*\*+\/
TEXTO_LITERAL \"[^"]*\"
CARACTERE_LITERAL   '[^']'

%%

[ \t\n]+       { /* Ignorar espaços e quebras de linha */ }
{COMENTARIO_LINHA} { /* Ignora */ }
{COMENTARIO_BLOCO} { /* Ignora */ }

"se"           { return T_SE; }
"senao"        { return T_SENAO; }
"enquanto"     { return T_ENQUANTO; }
"ate"          { return T_ATE; }
"inteiro"      { return T_INTEIRO_KW; }
"quebrado"     { return T_QUEBRADO_KW; }
"devolva"      { return T_DEVOLVA; }
"caractere"    { return T_CARACTERE_KW; }
"texto"        { return T_TEXTO_KW; }
"vazio"        { return T_VAZIO_KW; }
"imprima"      { return T_IMPRIMA; }
"receba"       { return T_RECEBA; }
"serpente"     { return T_SERPENTE_KW; }
"e"            { return T_E; }
"ou"           { return T_OU; }
"nao"          { return T_NAO; }
"fato"         { return T_FATO_KW; }

{INTEIRO}      { yylval.intval = atoi(yytext); return T_INTEIRO_LIT; }
{QUEBRADO}     { yylval.strval = strdup(yytext); return T_QUEBRADO_LIT; }
{TEXTO_LITERAL} { yylval.strval = strdup(yytext); return T_TEXTO_LIT; }
{CARACTERE_LITERAL} { yylval.strval = strdup(yytext); return T_CARACTERE_LIT; }
"real"         { yylval.strval = strdup(yytext); return T_FATO_LIT; }
"fake"         { yylval.strval = strdup(yytext); return T_FATO_LIT; }

{ID}           {
                 yylval.strval = strdup(yytext); // Passamos o nome para a árvore
                 return T_ID;
               }

"=="           { return T_IGUAL; }
"!="           { return T_DIFERENTE; }
"<="           { return T_MENOR_IGUAL; }
">="           { return T_MAIOR_IGUAL; }
"<"            { return T_MENOR; }
">"            { return T_MAIOR; }
"+"            { return T_SOMA; }
"-"            { return T_SUB; }
"*"            { return T_MULT; }
"/"            { return T_DIV; }
"="            { return T_ATRIBUICAO; }

";"            { return T_PV; }
","            { return T_VIRGULA; }
"("            { return T_LPAREN; }
")"            { return T_RPAREN; }
"{"            { return T_LCHAVE; }
"}"            { return T_RCHAVE; }

.              {
                 fprintf(stderr, "Erro Léxico na linha %d: %s\n", yylineno, yytext);
                 /* Não retornamos erro fatal, tentamos continuar ou ignorar */
               }

