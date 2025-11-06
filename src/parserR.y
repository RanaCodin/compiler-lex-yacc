%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex();
void yyerror(const char *s);
extern FILE *yyin;

int token_count = 0;
int symbol_count = 0;
char* symbol_table[100];
%}

%token ID INT STR
%token PROGRAM VAR IF WHILE FOR BEGIN_T END THEN ELSE DO
%token FUNCTION PROCEDURE RECORD ARRAY TYPE OF TO NOT MOD DIV
%token FORWARD
%token AND OR
%token PLUS MINUS MUL EQUAL LT LTE GT GTE NEQ
%token DOT COMMA COLON SEMICOLON ASSIGN DOTDOT
%token LPAREN RPAREN LBRACKET RBRACKET

%left OR
%left AND
%left NOT
%left EQUAL NEQ LT LTE GT GTE
%left PLUS MINUS
%left MUL DIV MOD

%%

program
    : PROGRAM ID SEMICOLON type_definitions var_declarations subprog_declarations compound_stmt DOT
    { printf("program\n"); }
    ;

type_definitions
    :
    { printf("type_definitions\n"); }
    | TYPE type_definition SEMICOLON
    { printf("type_definitions\n"); }
    | type_definitions type_definition SEMICOLON
    { printf("type_definitions\n"); }
    ;

type_definition
    : ID EQUAL type
    { printf("type_definition\n"); }
    ;

type
    : standard_type
    { printf("type\n"); }
    | ARRAY LBRACKET INT DOTDOT INT RBRACKET OF standard_type
    { printf("type\n"); }
    | RECORD var_declarations END
    { printf("type\n"); }
    ;

standard_type
    : ID
    { printf("standard_type\n"); }
    ;

var_declarations
    :
    { printf("var_declarations\n"); }
    | VAR var_declaration SEMICOLON
    { printf("var_declarations\n"); }
    | var_declarations var_declaration SEMICOLON
    { printf("var_declarations\n"); }
    ;

var_declaration
    : identifier_list COLON type
    { printf("var_declaration\n"); }
    ;

identifier_list
    : ID
    { printf("identifier_list\n"); }
    | identifier_list COMMA ID
    { printf("identifier_list\n"); }
    ;

subprog_declarations
    :
    { printf("subprog_declarations\n"); }
    | subprog_declarations subprog_declaration SEMICOLON
    { printf("subprog_declarations\n"); }
    ;

subprog_declaration
    : procedure_decl
    { printf("subprog_declaration\n"); }
    | function_decl
    { printf("subprog_declaration\n"); }
    ;

procedure_decl
    : PROCEDURE ID LPAREN formal_params RPAREN SEMICOLON proc_body
    { printf("procedure_decl\n"); }
    ;

function_decl
    : FUNCTION ID LPAREN formal_params RPAREN COLON ID SEMICOLON proc_body
    { printf("function_decl\n"); }
    ;

formal_params
    :
    { printf("formal_params\n"); }
    | param_list
    { printf("formal_params\n"); }
    ;

param_list
    : param
    { printf("param_list\n"); }
    | param_list SEMICOLON param
    { printf("param_list\n"); }
    ;

param
    : identifier_list COLON type
    { printf("param\n"); }
    ;

proc_body
    : FORWARD
    { printf("proc_body\n"); }
    | block
    { printf("proc_body\n"); }
    ;

block
    : var_declarations compound_stmt
    { printf("block\n"); }
    ;

compound_stmt
    : BEGIN_T stmt_seq END
    { printf("compound_stmt\n"); }
    ;

stmt_seq
    : statement
    { printf("stmt_seq\n"); }
    | stmt_seq SEMICOLON statement
    { printf("stmt_seq\n"); }
    ;

statement
    : simple_stmt
    { printf("statement\n"); }
    | structured_stmt
    { printf("statement\n"); }
    ;

simple_stmt
    :
    { printf("simple_stmt\n"); }
    | assignment_stmt
    { printf("simple_stmt\n"); }
    | proc_stmt
    { printf("simple_stmt\n"); }
    ;

assignment_stmt
    : variable ASSIGN expression
    { printf("assignment_stmt\n"); }
    ;

proc_stmt
    : ID LPAREN actual_params RPAREN
    { printf("proc_stmt\n"); }
    ;

actual_params
    :
    { printf("actual_params\n"); }
    | expression
    { printf("actual_params\n"); }
    | actual_params COMMA expression
    { printf("actual_params\n"); }
    ;

structured_stmt
    : compound_stmt
    { printf("structured_stmt\n"); }
    | IF expression THEN statement opt_else
    { printf("structured_stmt\n"); }
    | WHILE expression DO statement
    { printf("structured_stmt\n"); }
    | FOR ID ASSIGN expression TO expression DO statement
    { printf("structured_stmt\n"); }
    ;

opt_else
    :
    { printf("opt_else\n"); }
    | ELSE statement
    { printf("opt_else\n"); }
    ;

expression
    : simple_expr
    { printf("expression\n"); }
    | simple_expr relop simple_expr
    { printf("expression\n"); }
    ;

relop
    : LT  { printf("relop\n"); }
    | LTE { printf("relop\n"); }
    | GT  { printf("relop\n"); }
    | GTE { printf("relop\n"); }
    | EQUAL { printf("relop\n"); }
    | NEQ { printf("relop\n"); }
    ;

simple_expr
    : term
    { printf("simple_expr\n"); }
    | simple_expr addop term
    { printf("simple_expr\n"); }
    ;

addop
    : PLUS { printf("addop\n"); }
    | MINUS { printf("addop\n"); }
    | OR { printf("addop\n"); }
    ;

term
    : factor
    { printf("term\n"); }
    | term mulop factor
    { printf("term\n"); }
    ;

mulop
    : MUL { printf("mulop\n"); }
    | DIV { printf("mulop\n"); }
    | MOD { printf("mulop\n"); }
    | AND { printf("mulop\n"); }
    ;

factor
    : INT { printf("factor\n"); }
    | STR { printf("factor\n"); }
    | variable { printf("factor\n"); }
    | func_ref { printf("factor\n"); }
    | NOT factor { printf("factor\n"); }
    | LPAREN expression RPAREN { printf("factor\n"); }
    ;

variable
    : ID { printf("variable\n"); }
    ;

func_ref
    : ID LPAREN actual_params RPAREN { printf("func_ref\n"); }
    ;

%%

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
