%{
#include <stdio.h>
#include <string.h>
#include "parserR.tab.h"

extern int token_count;
extern int symbol_count;
extern char* symbol_table[];

#define MAX_SYMBOLS 100

void add_symbols(const char* word){
    for (int i = 0; i < symbol_count; i++){
        if (strcmp(symbol_table[i], word) == 0)
            return;
    }
    if (symbol_count < MAX_SYMBOLS){
        symbol_table[symbol_count] = strdup(word);
        symbol_count++;
    }
}
%}

%%

"and"         { printf("KEYWORD: %s\n", yytext); token_count++; printf("AND\n"); return AND; }
"begin"       { printf("KEYWORD: %s\n", yytext); token_count++; printf("BEGIN_T\n"); return BEGIN_T; }
"forward"     { printf("KEYWORD: %s\n", yytext); token_count++; printf("FORWARD\n"); return FORWARD; }
"div"         { printf("KEYWORD: %s\n", yytext); token_count++; printf("DIV\n"); return DIV; }
"do"          { printf("KEYWORD: %s\n", yytext); token_count++; printf("DO\n"); return DO; }
"else"        { printf("KEYWORD: %s\n", yytext); token_count++; printf("ELSE\n"); return ELSE; }
"end"         { printf("KEYWORD: %s\n", yytext); token_count++; printf("END\n"); return END; }
"for"         { printf("KEYWORD: %s\n", yytext); token_count++; printf("FOR\n"); return FOR; }
"function"    { printf("KEYWORD: %s\n", yytext); token_count++; printf("FUNCTION\n"); return FUNCTION; }
"if"          { printf("KEYWORD: %s\n", yytext); token_count++; printf("IF\n"); return IF; }
"array"       { printf("KEYWORD: %s\n", yytext); token_count++; printf("ARRAY\n"); return ARRAY; }
"mod"         { printf("KEYWORD: %s\n", yytext); token_count++; printf("MOD\n"); return MOD; }
"not"         { printf("KEYWORD: %s\n", yytext); token_count++; printf("NOT\n"); return NOT; }
"of"          { printf("KEYWORD: %s\n", yytext); token_count++; printf("OF\n"); return OF; }
"or"          { printf("KEYWORD: %s\n", yytext); token_count++; printf("OR\n"); return OR; }
"procedure"   { printf("KEYWORD: %s\n", yytext); token_count++; printf("PROCEDURE\n"); return PROCEDURE; }
"program"     { printf("KEYWORD: %s\n", yytext); token_count++; printf("PROGRAM\n"); return PROGRAM; }
"record"      { printf("KEYWORD: %s\n", yytext); token_count++; printf("RECORD\n"); return RECORD; }
"then"        { printf("KEYWORD: %s\n", yytext); token_count++; printf("THEN\n"); return THEN; }
"to"          { printf("KEYWORD: %s\n", yytext); token_count++; printf("TO\n"); return TO; }
"type"        { printf("KEYWORD: %s\n", yytext); token_count++; printf("TYPE\n"); return TYPE; }
"var"         { printf("KEYWORD: %s\n", yytext); token_count++; printf("VAR\n"); return VAR; }
"while"       { printf("KEYWORD: %s\n", yytext); token_count++; printf("WHILE\n"); return WHILE; }

"+"           { printf("SYM: +\n"); token_count++; printf("PLUS\n"); return PLUS; }
"-"           { printf("SYM: -\n"); token_count++; printf("MINUS\n"); return MINUS; }
"*"           { printf("SYM: *\n"); token_count++; printf("MUL\n"); return MUL; }
"="           { printf("SYM: =\n"); token_count++; printf("EQUAL\n"); return EQUAL; }
"<="          { printf("SYM: <=\n"); token_count++; printf("LTE\n"); return LTE; }
">="          { printf("SYM: >=\n"); token_count++; printf("GTE\n"); return GTE; }
"<>"          { printf("SYM: <>\n"); token_count++; printf("NEQ\n"); return NEQ; }
">"           { printf("SYM: >\n"); token_count++; printf("GT\n"); return GT; }
"<"           { printf("SYM: <\n"); token_count++; printf("LT\n"); return LT; }
"."           { printf("SYM: .\n"); token_count++; printf("DOT\n"); return DOT; }
","           { printf("SYM: ,\n"); token_count++; printf("COMMA\n"); return COMMA; }
":"           { printf("SYM: :\n"); token_count++; printf("COLON\n"); return COLON; }
";"           { printf("SYM: ;\n"); token_count++; printf("SEMICOLON\n"); return SEMICOLON; }
":="          { printf("SYM: :=\n"); token_count++; printf("ASSIGN\n"); return ASSIGN; }
".."          { printf("SYM: ..\n"); token_count++; printf("DOTDOT\n"); return DOTDOT; }
"("           { printf("SYM: (\n"); token_count++; printf("LPAREN\n"); return LPAREN; }
")"           { printf("SYM: )\n"); token_count++; printf("RPAREN\n"); return RPAREN; }
"["           { printf("SYM: [\n"); token_count++; printf("LBRACKET\n"); return LBRACKET; }
"]"           { printf("SYM: ]\n"); token_count++; printf("RBRACKET\n"); return RBRACKET; }

[a-zA-Z_][a-zA-Z0-9_]*   { printf("ID: %s\n", yytext); add_symbols(yytext); token_count++; return ID; }
[0-9]+                  { printf("INT: %s\n", yytext); token_count++; printf("INT\n"); return INT; }
\"[^\"]*\"              { printf("STR: %s\n", yytext); token_count++; printf("STR\n"); return STR; }

\{[^}]*\}               { }
[ \t\n\r]+              { }

[^ \t\n\rA-Za-z0-9\"{}();:+=\[\]<>.,*-]+ {
    printf("UNKNOWN: %s\n", yytext);
    token_count++;
}

%%

int yywrap() {
    return 1;
}










