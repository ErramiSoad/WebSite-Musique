%{
#include <string.h>
#include "unitesLexicales.h"
%}
nbr [0-9]
integer {nbr}+
reel {nbr}+VIRG{nbr}+
char [a-zA-Z_]
boolean [0-1]
identif [a-zA-Z_][0-9a-zA-Z_]*
lettre [A-Za-z]
speech [ -!#-~]

 
%%


[" "\t\n]   { ECHO; /* rien */ }
{nbr}+  { ECHO; valNombre = atoi(yytext); return NOMBRE; };
algo 			{ECHO; ; return ALGO; }
var 			{ECHO; ; return VAR; }
integer 		{ECHO; ; return INTEGER; }
reel 			{ECHO; ; return REEL; }
char			{ECHO; ; return CHAR; }
start 			{ECHO; ; return START; }
boolean 		{ECHO; ; return BOOLEAN; }
const 			{ECHO; ; return CONST; }
end 			{ECHO; ; return END; }
write 			{ECHO; ; return WRITE; }
read 			{ECHO; ; return READ; }
if          	{ECHO; return IF; }
then        	{ECHO; return THEN; }
elseif			{ECHO; ; return ELSEIF; }
else			{ECHO; ; return ELSE; }
endif			{ECHO; ; return ENDIF; }
for				{ECHO; ; return FOR; }
from			{ECHO; ; return FROM; }
to				{ECHO; ; return TO; }
endfor			{ECHO; ; return ENDFOR; }
while			{ECHO; ; return WHILE; }
do				{ECHO; ; return DO; }
endwhile		{ECHO; ; return ENDWHILE; }
loop			{ECHO; ; return LOOP; }
till			{ECHO; ; return TILL; }
switch			{ECHO; ; return SWITCH; }
endswitch		{ECHO; ; return ENDSWITCH; }
function		{ECHO; ; return FUNCTION; }
endfunction 	{ECHO; ; return ENDFUNCTION; }
procedure 		{ECHO; ; return PROCEDURE; }
endprocedure	{ECHO; ; return ENDPROCEDURE; }
[ -!#-~] 		{ECHO; ; return SPEECH; }

{lettre}({lettre}|{nbr})* {ECHO; strcpy(valIdentif, yytext); return IDENTIF; }
{lettre}({lettre}|{nbr})* {ECHO; strcpy(valIdentif, yytext); return IDENTIF; }

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
""" 		{ return DBQUOTE; }
":" 		{ return DEUXPTS; }
.           { ECHO; return yytext[0]; }


%%

int valNombre;
char valIdentif[256];


int yywrap(void) {
    return 1;
}