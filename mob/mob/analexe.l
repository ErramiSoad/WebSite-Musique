%{
#include <string.h>
#include "syntaxeY.h"
int valNombre;
char valIdentif[256];
%}
nbr [0-9]
lettre [A-Za-z]
 
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
algo 			{ return ALGO; }
start 			{ return START; }
var 			{ return VAR; }
const 			{ return CONST; }
end 			{ return END; }
write 			{ return WRITE; }
read 			{ return READ; }
if          	{ return IF; }
then        	{ return THEN; }
else			{ return ELSE; }
endif			{ return ENDIF; }
for				{ return FOR; }
from			{ return FROM; }
to				{ return TO; }
endfor			{ return ENDFOR; }
while			{ return WHILE; }
do				{ return DO; }
endwhile		{ return ENDWHILE; }
loop			{ return LOOP; }
till			{ return TILL; }
switch			{ return SWITCH; }
endswitch		{ return ENDSWITCH; }
function		{ return FUNCTION; }
endfunction 	{ return ENDFUNCTION; }
procedure 		{ return PROCEDURE; }
endprocedure	{ return ENDPROCEDURE; }
[ -!#-~] 		{ return SPEECH; }
integer 		{ return INTEGER; }
reel 			{ return REEL; }
char			{ return CHAR; }
boolean 		{ return BOOLEAN; }
turnback 		{ return TURNBACK; }
[01]			{ return BL; }
{nbr}+ 			{ return INT; }
{nbr}+,{nbr}+ 	{ return RL; }
[a-zA-Z_]		{ return CH; }

[a-zA-Z_][0-9a-zA-Z_]*		{ strcpy(valIdentif, yytext); return IDENTIF; }

.           { ECHO; return yytext[0]; }


%%

int yywrap(void) {
    return 1;
}