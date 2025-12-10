%{
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
%}

%union {
    int intval;
    double floatval;
    char *strval;
    struct ASTNode *node;
}

/* Palavras-chave */
%token T_SE T_SENAO T_ENQUANTO T_ATE T_DEVOLVA T_IMPRIMA T_RECEBA
%token T_INTEIRO_KW T_QUEBRADO_KW T_CARACTERE_KW T_TEXTO_KW T_FATO_KW T_SERPENTE_KW T_NADA

/* Operadores Lógicos */
%token T_E T_OU T_NAO

/* Literais e Identificadores */
%token <strval> T_ID T_TEXTO_LIT T_CARACTERE_LIT T_FATO_LIT T_QUEBRADO_LIT
%token <intval> T_INTEIRO_LIT

/* Operadores e Símbolos */
%token T_IGUAL T_DIFERENTE T_MENOR T_MAIOR T_MENOR_IGUAL T_MAIOR_IGUAL
%token T_SOMA T_SUB T_MULT T_DIV T_ATRIBUICAO
%token T_PV T_VIRGULA T_LPAREN T_RPAREN T_LCHAVE T_RCHAVE

/* Definição dos Tipos Não-Terminais (Traduzidos para Português) */
%type <node> programa lista_comandos comando bloco
%type <node> declaracao atribuicao comando_receba comando_imprima comando_devolva
%type <node> comando_se comando_enquanto comando_ate
%type <node> expressao expressao_simples termo fator
%type <node> tipo definicao_funcao lista_parametros parametro
%type <node> declaracao_serpente elementos_serpente

/* Precedência */
%nonassoc T_SENAO
%left T_OU
%left T_E
%left T_IGUAL T_DIFERENTE
%left T_MENOR T_MAIOR T_MENOR_IGUAL T_MAIOR_IGUAL
%left T_SOMA T_SUB
%left T_MULT T_DIV
%right T_NAO

%%

programa:
    lista_comandos {
        ASTNode *root = create_node("programa", NULL);
        add_child(root, $1);
        print_tree(root, 0);
        free_tree(root);
    }
    ;

lista_comandos:
    lista_comandos comando {
        $$ = $1;
        add_child($$, $2);
    }
    | comando {
        $$ = create_node("lista_comandos", NULL);
        add_child($$, $1);
    }
    ;

comando:
    declaracao T_PV          { $$ = $1; }
    | declaracao_serpente T_PV { $$ = $1; }
    | atribuicao T_PV        { $$ = $1; }
    | definicao_funcao       { $$ = $1; }
    | comando_se             { $$ = $1; }
    | comando_enquanto       { $$ = $1; }
    | comando_ate            { $$ = $1; }
    | comando_receba T_PV    { $$ = $1; }
    | comando_imprima T_PV   { $$ = $1; }
    | comando_devolva T_PV   { $$ = $1; }
    | bloco                  { $$ = $1; }
    ;

bloco:
    T_LCHAVE lista_comandos T_RCHAVE {
        $$ = $2; 
    }
    | T_LCHAVE T_RCHAVE {
        $$ = create_node("bloco_vazio", NULL);
    }
    ;

/* Declaração de Variáveis */
declaracao:
    tipo T_ID {
        $$ = create_node("declaracao", NULL);
        add_child($$, $1);
        add_child($$, create_node("id", $2));
    }
    | tipo T_ID T_ATRIBUICAO expressao {
        $$ = create_node("declaracao_init", NULL);
        add_child($$, $1);
        add_child($$, create_node("id", $2));
        add_child($$, $4);
    }
    ;

/* Declaração de Vetores (Serpente) */
declaracao_serpente:
    T_SERPENTE_KW T_ID T_LPAREN tipo T_RPAREN T_ATRIBUICAO T_LPAREN elementos_serpente T_RPAREN {
        $$ = create_node("serpente_declaracao", $2); 
        add_child($$, $4); 
        add_child($$, $8); 
    }
    ;

elementos_serpente:
    elementos_serpente T_VIRGULA expressao {
        $$ = $1;
        add_child($$, $3);
    }
    | expressao {
        $$ = create_node("elementos", NULL);
        add_child($$, $1);
    }
    ;

tipo:
    T_INTEIRO_KW    { $$ = create_node("tipo", "inteiro"); }
    | T_QUEBRADO_KW { $$ = create_node("tipo", "quebrado"); }
    | T_CARACTERE_KW{ $$ = create_node("tipo", "caractere"); }
    | T_TEXTO_KW    { $$ = create_node("tipo", "texto"); }
    | T_FATO_KW     { $$ = create_node("tipo", "fato"); }
    | T_NADA        { $$ = create_node("tipo", "nada"); } 
    ;

/* Atribuição */
atribuicao:
    T_ID T_ATRIBUICAO expressao {
        $$ = create_node("atribuicao", NULL);
        add_child($$, create_node("id", $1));
        add_child($$, $3);
    }
    ;

comando_se:
    T_SE T_LPAREN expressao T_RPAREN bloco {
        $$ = create_node("se_statement", NULL);
        ASTNode *cond = create_node("condicao", NULL);
        add_child(cond, $3);
        add_child($$, cond);
        add_child($$, $5); 
    }
    | T_SE T_LPAREN expressao T_RPAREN bloco T_SENAO bloco {
        $$ = create_node("se_senao_statement", NULL);
        ASTNode *cond = create_node("condicao", NULL);
        add_child(cond, $3);
        add_child($$, cond);
        add_child($$, $5); 
        ASTNode *else_bk = create_node("bloco_senao", NULL);
        add_child(else_bk, $7);
        add_child($$, else_bk);
    }
    ;

comando_enquanto:
    T_ENQUANTO T_LPAREN expressao T_RPAREN bloco {
        $$ = create_node("enquanto_loop", NULL);
        ASTNode *cond = create_node("condicao", NULL);
        add_child(cond, $3);
        add_child($$, cond);
        add_child($$, $5);
    }
    ;

comando_ate:
    T_ATE T_LPAREN expressao T_RPAREN bloco {
        $$ = create_node("ate_loop", NULL);
        ASTNode *cond = create_node("condicao", NULL);
        add_child(cond, $3);
        add_child($$, cond);
        add_child($$, $5);
    }
    ;

definicao_funcao:
    tipo T_ID T_LPAREN lista_parametros T_RPAREN bloco {
        $$ = create_node("funcao_definicao", $2);
        add_child($$, $1); 
        add_child($$, $4); 
        add_child($$, $6); 
    }
    ;

lista_parametros:
    /* vazio */ { $$ = create_node("parametros", "nenhum"); }
    | parametro {
        $$ = create_node("parametros", NULL);
        add_child($$, $1);
    }
    | lista_parametros T_VIRGULA parametro {
        $$ = $1;
        add_child($$, $3);
    }
    ;

parametro:
    tipo T_ID {
        $$ = create_node("parametro", $2);
        add_child($$, $1);
    }
    ;

comando_receba:
    T_RECEBA T_LPAREN T_ID T_RPAREN {
        $$ = create_node("receba", $3);
    }
    ;

comando_imprima:
    T_IMPRIMA T_LPAREN expressao T_RPAREN {
        $$ = create_node("imprima", NULL);
        add_child($$, $3);
    }
    ;

comando_devolva:
    T_DEVOLVA expressao { 
        $$ = create_node("devolva", NULL);
        add_child($$, $2);
    }
    ;

expressao:
    expressao_simples { $$ = $1; }
    | expressao_simples T_IGUAL expressao_simples {
        $$ = create_node("op_relacional", "=="); add_child($$, $1); add_child($$, $3);
    }
    | expressao_simples T_DIFERENTE expressao_simples {
        $$ = create_node("op_relacional", "!="); add_child($$, $1); add_child($$, $3);
    }
    | expressao_simples T_MENOR expressao_simples {
        $$ = create_node("op_relacional", "<"); add_child($$, $1); add_child($$, $3);
    }
    | expressao_simples T_MAIOR expressao_simples {
        $$ = create_node("op_relacional", ">"); add_child($$, $1); add_child($$, $3);
    }
    | expressao_simples T_MENOR_IGUAL expressao_simples {
        $$ = create_node("op_relacional", "<="); add_child($$, $1); add_child($$, $3);
    }
    | expressao_simples T_MAIOR_IGUAL expressao_simples {
        $$ = create_node("op_relacional", ">="); add_child($$, $1); add_child($$, $3);
    }
    ;

expressao_simples:
    termo { $$ = $1; }
    | expressao_simples T_SOMA termo {
        $$ = create_node("op_aritmetica", "+"); add_child($$, $1); add_child($$, $3);
    }
    | expressao_simples T_SUB termo {
        $$ = create_node("op_aritmetica", "-"); add_child($$, $1); add_child($$, $3);
    }
    | expressao_simples T_OU termo {
        $$ = create_node("op_logica", "ou"); add_child($$, $1); add_child($$, $3);
    }
    ;

termo:
    fator { $$ = $1; }
    | termo T_MULT fator {
        $$ = create_node("op_aritmetica", "*"); add_child($$, $1); add_child($$, $3);
    }
    | termo T_DIV fator {
        $$ = create_node("op_aritmetica", "/"); add_child($$, $1); add_child($$, $3);
    }
    | termo T_E fator {
        $$ = create_node("op_logica", "e"); add_child($$, $1); add_child($$, $3);
    }
    ;

fator:
    T_LPAREN expressao T_RPAREN { $$ = $2; }
    | T_ID {
        $$ = create_node("id", $1);
    }
    | T_INTEIRO_LIT {
        char buffer[20];
        sprintf(buffer, "%d", $1);
        $$ = create_node("literal_inteiro", strdup(buffer));
    }
    | T_QUEBRADO_LIT {
        $$ = create_node("literal_quebrado", $1);
    }
    | T_TEXTO_LIT {
        $$ = create_node("literal_texto", $1);
    }
    | T_FATO_LIT {
        $$ = create_node("literal_fato", $1);
    }
    | T_NAO fator {
        $$ = create_node("nao", NULL);
        add_child($$, $2);
    }
    ;

%%

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