%{
#include <string.h>
#include "syntaxeY.h"
extern char valIdentif[256];
int lineNumber;
%}
nbr [0-9]
lettre [A-Za-z]

 
%%


[" "\t]   		{ ECHO; /* rien */ }
"\n"       		{ ++lineNumber; }
"="       		{ return AFFECT; }
"=="        	{  return EGAL; }
"<>"        	{  return DIFF; }
">"				{  return SUP; }
"<"				{  return INF; }
">="			{  return SUPEGAL; }
"<="			{  return INFEGAL; }
"+"        		{  return ADD; }
"-"        		{  return SOUST; }
"/"				{  return DIV; }
"*"				{  return MULT; }
"%"				{  return RESTDIV; }
"&"				{  return AND; }
"|"				{  return OR; }
"?"				{  return NO; }
";" 			{ return PTVIRG; }
"," 			{ return VIRG; }
"(" 			{ return PAROV; }
")" 			{ return PARFER; }
"'" 			{ return DBQUOTE; }
":" 			{ return DEUXPTS; }
algo 			{  return ALGO; }
var 			{  return VAR; }
start 			{  return START; }
[0-1] 			{  return BL; }
{nbr}+ 			{  return INT; }
{nbr}+,{nbr}+   {  return RL; }
[a-zA-Z_]		{  return CH; }
const 			{  return CONST; }
end 			{  return END; }
write 			{  return WRITE; }
read 			{  return READ; }
if          	{  return IF; }
then        	{  return THEN; }
else			{  return ELSE; }
endif			{  return ENDIF; }
for				{  return FOR; }
from			{  return FROM; }
to				{  return TO; }
endfor			{  return ENDFOR; }
while			{  return WHILE; }
do				{  return DO; }
endwhile		{  return ENDWHILE; }
loop			{  return LOOP; }
till			{  return TILL; }
switch			{  return SWITCH; }
endswitch		{  return ENDSWITCH; }
function		{  return FUNCTION; }
endfunction 	{  return ENDFUNCTION; }
procedure 		{  return PROCEDURE; }
endprocedure	{  return ENDPROCEDURE; }
[-!#-~] 		{  return SPEECH; }
integer 		{  return INTEGER; }
reel 			{  return REEL; }
char			{  return CHAR; }
boolean 		{  return BOOLEAN; }
turnback 		{  return TURNBACK;}


[a-zA-Z_][0-9a-zA-Z_]* 	{strcpy(valIdentif, yytext); return IDENTIF; }
.           	{ return yytext[0]; }


%%

int yywrap(void) {
    return 1;
}