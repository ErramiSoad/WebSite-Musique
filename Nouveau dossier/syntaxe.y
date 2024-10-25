%{/*-------- syntaxe.y -----------*/

#include <stdio.h>
extern FILE* yyin; //file pointer by default points to terminal
int yylex(void); // defini dans lexiqueL.c, utilise par yyparse()
void yyerror(const char * msg);
int lineNumber; // notre compteur de lignes
%}

%token START END // les lexemes que doit fournir yylex() 
%token PTVIRG
%token NOMBRE 
%token IDENTIF
%token ALGO 
%token VAR 
%token INTEGER 
%token REEL 
%token CHAR 
%token BOOLEAN
%token CONST
%token WRITE
%token READ
%token IF
%token THEN
%token ELSEIF
%token ELSE
%token ENDIF
%token FOR
%token FROM
%token TO
%token ENDFOR
%token WHILE
%token DO
%token ENDWHILE
%token LOOP
%token TILL
%token SWITCH
%token OTHER
%token ENDSWITCH
%token FUNCTION
%token ENDFUNCTION
%token PROCEDURE
%token ENDPROCEDURE
%token AFFECT
%token EGAL
%token DIFF
%token SUP
%token INF
%token SUPEGAL
%token INFEGAL
%token ADD
%token SOUST
%token DIV
%token MULT
%token RESTDIV
%token AND
%token OR
%token NO

%token PAROV
%token PARFER
%token DBQUOTE
%token SPEECH
%token DEUXPTS
%token VIRG
%token ALGO



%start program // l’axiome de notre grammaire
%%
program : nomalgo declar START listInstr END {printf(" squelette programme \n");}
;

nomalgo : ALGO IDENTIF
;

declar : VAR listident DEUXPTS type PTVIRG {printf(" declaration des variables \n");}
		 | CONST listconst PTVIRG {printf(" declaration des constantes \n");}
;

listconst : IDENTIF AFFECT NOMBRE VIRG listconst
			| IDENTIF AFFECT NOMBRE
;

listident : IDENTIF  VIRG listident
			| IDENTIF
			;

type : INTEGER 
	  | REEL 
	  | CHAR 
	  | BOOLEAN
	  ;
listInstr : listInstr inst

          | inst
          | cond

          ;
cond : IF PAROV condinst PARFER THEN instdonne  ENDIF {printf(" declaration des variables \n");}
;

instdonne : instdonne 
			| cond
			| ELSE instdonne
			| inst
;
condinst : IDENTIF comp IDENTIF
;
comp : AFFECT
	  | EGAL
	  | DIFF
	  | SUP
	  | INF
	  | SUPEGAL
      | INFEGAL
;

inst : IDENTIF AFFECT expr PTVIRG {printf(" instr affectation \n");}
	 | WRITE PAROV DBQUOTE SPEECH DBQUOTE IDENTIF PARFER PTVIRG
	 | WRITE PAROV DBQUOTE SPEECH DBQUOTE PARFER PTVIRG
	 | READ PAROV IDENTIF PARFER PTVIRG
	 | FOR IDENTIF FROM value TO value listInstr ENDFOR 
	 | WHILE PAROV condinst PARFER DO listInstr ENDWHILE
	 | DO listInstr WHILE PAROV condinst PARFER PTVIRG
	 | LOOP listInstr TILL PAROV condinst PARFER PTVIRG
	 | SWITCH PAROV IDENTIF PARFER value DEUXPTS listInstr PTVIRG
	 | SWITCH PAROV IDENTIF PARFER OTHER DEUXPTS listInstr PTVIRG
     ;

expr : value {printf(" expr  value \n");}
     | IDENTIF {printf(" expr  identif \n");}
     | IDENTIF  operateur IDENTIF
     | IDENTIF  operateur value
     | value  operateur value
     | value  operateur IDENTIF
     ;
operateur : ADD
		  | SOUST
		  | DIV
		  | MULT
		  | RESTDIV
;
value : 
%%
void yyerror( const char * msg){

printf("line %d : %s", lineNumber, msg);

}
int main(int argc,char ** argv){

if(argc>1) yyin=fopen(argv[1],"r"); // vérifier résultat !!!
lineNumber=1;
if(!yyparse())

printf("Expression correct\n");

return(0);

}