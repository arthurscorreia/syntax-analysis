%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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
%}


%union {
    int intval;
    double floatval;
    char *strval;
    struct ASTNode *node;
}


/* Palavras-chave */
%token T_SE T_SENAO T_ENQUANTO T_ATE T_DEVOLVA T_IMPRIMA T_RECEBA
%token T_INTEIRO_KW T_QUEBRADO_KW T_CARACTERE_KW T_TEXTO_KW T_FATO_KW T_SERPENTE_KW T_VAZIO_KW
%token T_E T_OU T_NAO

/* Literais e Identificadores (com tipos associados da union) */
%token <strval> T_ID T_TEXTO_LIT T_CARACTERE_LIT T_FATO_LIT T_QUEBRADO_LIT
%token <intval> T_INTEIRO_LIT

/* Operadores e Símbolos */
%token T_IGUAL T_DIFERENTE T_MENOR T_MAIOR T_MENOR_IGUAL T_MAIOR_IGUAL
%token T_SOMA T_SUB T_MULT T_DIV T_ATRIBUICAO
%token T_PV T_VIRGULA T_LPAREN T_RPAREN T_LCHAVE T_RCHAVE

/* Definição dos Tipos Não-Terminais */
%type <node> program statement_list statement block
%type <node> declaration assignment input_stmt output_stmt return_stmt
%type <node> if_stmt while_stmt loop_ate_stmt
%type <node> expression simple_expression term factor
%type <node> type var_type function_def param_list param
%type <node> vector_decl vector_elements

/* Precedência de operadores */
%nonassoc T_SENAO
%left T_OU
%left T_E
%left T_IGUAL T_DIFERENTE
%left T_MENOR T_MAIOR T_MENOR_IGUAL T_MAIOR_IGUAL
%left T_SOMA T_SUB
%left T_MULT T_DIV
%right T_NAO

%%

/* Gramática */

program:
    statement_list {
        ASTNode *root = create_node("program", NULL);
        add_child(root, $1);
        print_tree(root, 0);
        free_tree(root);
    }
    ;

statement_list:
    statement_list statement {
        $$ = $1;
        add_child($$, $2);
    }
    | statement {
        $$ = create_node("statement list", NULL);
        add_child($$, $1);
    }
    ;

statement:
    declaration T_PV    { $$ = $1; }
    | vector_decl T_PV  { $$ = $1; }
    | assignment T_PV   { $$ = $1; }
    | function_def      { $$ = $1; }
    | if_stmt           { $$ = $1; }
    | while_stmt        { $$ = $1; }
    | loop_ate_stmt     { $$ = $1; }
    | input_stmt T_PV   { $$ = $1; }
    | output_stmt T_PV  { $$ = $1; }
    | return_stmt T_PV  { $$ = $1; }
    | block             { $$ = $1; }
    ;

block:
    T_LCHAVE statement_list T_RCHAVE {
        $$ = $2; /* Bloco retorna a lista de statements dentro dele */
    }
    | T_LCHAVE T_RCHAVE {
        $$ = create_node("empty block", NULL);
    }
    ;

/* Declaração de Variáveis */
declaration:
    type T_ID {
        $$ = create_node("declaration", NULL);
        add_child($$, $1);
        add_child($$, create_node("id", $2));
    }
    | type T_ID T_ATRIBUICAO expression {
        $$ = create_node("declaration_init", NULL);
        add_child($$, $1);
        add_child($$, create_node("id", $2));
        add_child($$, $4);
    }
    ;

/* Declaração de Vetores */
vector_decl:
    T_SERPENTE_KW T_ID T_LPAREN type T_RPAREN T_ATRIBUICAO T_LPAREN vector_elements T_RPAREN {
        $$ = create_node("vector_declaration", $2); // ID no value
        add_child($$, $4); // Tipo
        add_child($$, $8); // Elementos
    }
    ;

vector_elements:
    vector_elements T_VIRGULA expression {
        $$ = $1;
        add_child($$, $3);
    }
    | expression {
        $$ = create_node("elements", NULL);
        add_child($$, $1);
    }
    ;

/* Tipos Primitivos */
type:
    T_INTEIRO_KW    { $$ = create_node("type", "inteiro"); }
    | T_QUEBRADO_KW { $$ = create_node("type", "quebrado"); }
    | T_CARACTERE_KW{ $$ = create_node("type", "caractere"); }
    | T_TEXTO_KW    { $$ = create_node("type", "texto"); }
    | T_FATO_KW     { $$ = create_node("type", "fato"); }
    | T_VAZIO_KW    { $$ = create_node("type", "vazio"); }
    ;

/* Atribuição */
assignment:
    T_ID T_ATRIBUICAO expression {
        $$ = create_node("attribution", NULL);
        add_child($$, create_node("id", $1));
        add_child($$, $3);
    }
    ;

/* Controle de Fluxo */
if_stmt:
    T_SE T_LPAREN expression T_RPAREN block {
        $$ = create_node("if_statement", NULL);
        add_child($$, create_node("condition", NULL));
        add_child($$->children[0], $3); // Adiciona expr na condition
        add_child($$, $5); // Bloco then
    }
    | T_SE T_LPAREN expression T_RPAREN block T_SENAO block {
        $$ = create_node("if_else_statement", NULL);
        add_child($$, create_node("condition", NULL));
        add_child($$->children[0], $3);
        add_child($$, $5); // Then
        add_child($$, create_node("else_block", NULL));
        add_child($$->children[2], $7); // Else
    }
    ;

/* Laços */
while_stmt:
    T_ENQUANTO T_LPAREN expression T_RPAREN block {
        $$ = create_node("while_loop", NULL);
        add_child($$, create_node("condition", NULL));
        add_child($$->children[0], $3);
        add_child($$, $5);
    }
    ;

loop_ate_stmt:
    T_ATE T_LPAREN expression T_RPAREN block {
        $$ = create_node("ate_loop", NULL);
        add_child($$, create_node("condition", NULL));
        add_child($$->children[0], $3);
        add_child($$, $5);
    }
    ;

/* Definição de Função */
function_def:
    type T_ID T_LPAREN param_list T_RPAREN block {
        $$ = create_node("function_definition", $2);
        add_child($$, $1); // Tipo Retorno
        add_child($$, $4); // Params
        add_child($$, $6); // Corpo
    }
    ;

param_list:
    /* vazio */ { $$ = create_node("params", "none"); }
    | param {
        $$ = create_node("params", NULL);
        add_child($$, $1);
    }
    | param_list T_VIRGULA param {
        $$ = $1;
        add_child($$, $3);
    }
    ;

param:
    type T_ID {
        $$ = create_node("param", $2);
        add_child($$, $1);
    }
    ;

input_stmt:
    T_RECEBA T_LPAREN T_ID T_RPAREN {
        $$ = create_node("receba", $3);
    }
    ;

output_stmt:
    T_IMPRIMA T_LPAREN expression T_RPAREN {
        $$ = create_node("imprima", NULL);
        add_child($$, $3);
    }
    ;

return_stmt:
    T_DEVOLVA T_LPAREN expression T_RPAREN { /* Com parenteses */
        $$ = create_node("devolva", NULL);
        add_child($$, $3);
    }
    | T_DEVOLVA expression { /* Sem parenteses */
        $$ = create_node("devolva", NULL);
        add_child($$, $2);
    }
    ;

/* Expressões Aritméticas e Lógicas */
expression:
    simple_expression { $$ = $1; }
    | simple_expression T_IGUAL simple_expression {
        $$ = create_node("relop", "=="); add_child($$, $1); add_child($$, $3);
    }
    | simple_expression T_DIFERENTE simple_expression {
        $$ = create_node("relop", "!="); add_child($$, $1); add_child($$, $3);
    }
    | simple_expression T_MENOR simple_expression {
        $$ = create_node("relop", "<"); add_child($$, $1); add_child($$, $3);
    }
    | simple_expression T_MAIOR simple_expression {
        $$ = create_node("relop", ">"); add_child($$, $1); add_child($$, $3);
    }
    | simple_expression T_MENOR_IGUAL simple_expression {
        $$ = create_node("relop", "<="); add_child($$, $1); add_child($$, $3);
    }
    | simple_expression T_MAIOR_IGUAL simple_expression {
        $$ = create_node("relop", ">="); add_child($$, $1); add_child($$, $3);
    }
    ;

simple_expression:
    term { $$ = $1; }
    | simple_expression T_SOMA term {
        $$ = create_node("op", "+"); add_child($$, $1); add_child($$, $3);
    }
    | simple_expression T_SUB term {
        $$ = create_node("op", "-"); add_child($$, $1); add_child($$, $3);
    }
    | simple_expression T_OU term {
        $$ = create_node("logic", "ou"); add_child($$, $1); add_child($$, $3);
    }
    ;

term:
    factor { $$ = $1; }
    | term T_MULT factor {
        $$ = create_node("op", "*"); add_child($$, $1); add_child($$, $3);
    }
    | term T_DIV factor {
        $$ = create_node("op", "/"); add_child($$, $1); add_child($$, $3);
    }
    | term T_E factor {
        $$ = create_node("logic", "e"); add_child($$, $1); add_child($$, $3);
    }
    ;

factor:
    T_LPAREN expression T_RPAREN { $$ = $2; }
    | T_ID {
        $$ = create_node("id", $1);
    }
    | T_INTEIRO_LIT {
        char buffer[20];
        sprintf(buffer, "%d", $1);
        $$ = create_node("literal_int", strdup(buffer));
    }
    | T_QUEBRADO_LIT {
        $$ = create_node("literal_float", $1);
    }
    | T_TEXTO_LIT {
        $$ = create_node("literal_string", $1);
    }
    | T_FATO_LIT {
        $$ = create_node("literal_bool", $1);
    }
    | T_NAO factor {
        $$ = create_node("not", NULL);
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