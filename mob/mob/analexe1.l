%{
#include <string.h>
#include "syntaxeY.h"
int valNombre;
char valIdentif[256];
%}
nbr [0-9]
int {nbr}+
rl {nbr}+VIRG{nbr}+
ch [a-zA-Z_]
bl [0-1]
identif [a-zA-Z_][0-9a-zA-Z_]*
lettre [A-Za-z]
speech [ -!#-~]
 
%%

[" "\t\n]   { ECHO; /* rien */ }
"="        	{ ECHO; return AFFECT; }
"=="        { ECHO; return EGAL; }
"<>"        { ECHO; return DIFF; }
">"			{ ECHO; return SUP; }
"<"			{ ECHO; return INF; }
">="		{ ECHO; return SUPEGAL; }
"<="		{ ECHO; return INFEGAL; }
"+"        	{ ECHO; return ADD; }
"-"        	{ ECHO; return SOUST; }
"/"			{ ECHO; return DIV; }
"*"			{ ECHO; return MULT; }
"%"			{ ECHO; return RESTDIV; }
"&"			{ ECHO; return AND; }
"|"			{ ECHO; return OR; }
"?"			{ ECHO; return NO; }
";" 		{ return PTVIRG; }
"," 		{ return VIRG; }
"(" 		{ return PAROV; }
")" 		{ return PARFER; }
"'" 		{ return DBQUOTE; }
":" 		{ return DEUXPTS; }
{nbr}+  { ECHO; valNombre = atoi(yytext); return NOMBRE; };
.           { ECHO; return yytext[0]; }


%%

int yywrap(void) {
    return 1;
}