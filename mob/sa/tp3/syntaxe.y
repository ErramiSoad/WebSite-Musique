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
%token RL
%token BL
%token CH
%token INT
%token TURNBACK



%start program 
%%
program : nomalgo declarfunct declar START listInstr END {printf(" squelette correcte \n");}
		  | nomalgo declar START listInstr END {printf(" squelette correcte \n");}
;

nomalgo : ALGO IDENTIF {printf(" nom de l'algorithme \n");}
;

declarfunct : funct declarfunct 
			| proced declarfunct 
			| funct {printf(" declaration du fonction \n");}
			| proced {printf(" declaration du procedure \n");}
;

funct : FUNCTION  IDENTIF PAROV declarvf PARFER DEUXPTS type declar listInstr TURNBACK PAROV retourner PARFER ENDFUNCTION PTVIRG 			{printf(" definition du fonction \n");}
		| FUNCTION  IDENTIF PAROV declarvf PARFER DEUXPTS type listInstr TURNBACK PAROV retourner PARFER  ENDFUNCTION PTVIRG
			{printf(" definition du fonction \n");}
		| FUNCTION  IDENTIF PAROV PARFER DEUXPTS type declar listInstr TURNBACK PAROV retourner PARFER ENDFUNCTION PTVIRG
			{printf(" definition du fonction \n");}
;

retourner : value 
		  | IDENTIF
;

proced : PROCEDURE IDENTIF PAROV declarvf PARFER declar listInstr ENDPROCEDURE PTVIRG {printf(" definition de procedure \n");}
		| PROCEDURE IDENTIF PAROV PARFER declar listInstr ENDPROCEDURE PTVIRG {printf(" definition de procedure \n");}
		| PROCEDURE IDENTIF PAROV declarvf PARFER listInstr ENDPROCEDURE PTVIRG {printf(" definition de procedure \n");}
		| PROCEDURE IDENTIF PAROV PARFER listInstr ENDPROCEDURE PTVIRG {printf(" definition de procedure \n");}
;

declarvf : IDENTIF DEUXPTS type VIRG declarvf 
		 | IDENTIF DEUXPTS type
; 

declar : VAR listident DEUXPTS type PTVIRG {declaration(listident, type);}
		 | CONST listconst PTVIRG {;}
;

listconst : IDENTIF AFFECT value VIRG listconst
			| IDENTIF AFFECT value
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
;



inst : IDENTIF AFFECT expr PTVIRG {printf(" instr affectation \n");}
	 | WRITE PAROV DBQUOTE SPEECH DBQUOTE IDENTIF PARFER PTVIRG {printf(" instr write \n");}
	 | WRITE PAROV DBQUOTE SPEECH DBQUOTE PARFER PTVIRG {printf(" instr write \n");}
	 | READ PAROV IDENTIF PARFER PTVIRG {printf(" instr read \n");}
	 | FOR IDENTIF FROM value TO value listInstr ENDFOR {printf(" instr for \n");}
	 | WHILE PAROV condinst PARFER DO listInstr ENDWHILE {printf(" instr while \n");}
	 | DO listInstr WHILE PAROV condinst PARFER PTVIRG {printf(" instr do while \n");}
	 | LOOP listInstr TILL PAROV condinst PARFER PTVIRG {printf(" instr loop \n");}
	 | SWITCH PAROV IDENTIF PARFER val DEUXPTS listInstr PTVIRG {printf(" instr switch \n");}
	 | IF PAROV condinst PARFER THEN instdonne  ENDIF {printf(" instr if \n");}
     ;

val : value val
	  | value OTHER
;

instdonne :  inst instdonne
			| ELSE instdonne
			| inst
;

condinst :  PAROV cond1 PARFER op condinst 
		  | cond1
		  | PAROV cond1 PARFER
;

cond1 : IDENTIF comp IDENTIF
	    | IDENTIF comp value
	    | value comp IDENTIF
;

op : AND 
	| OR
;

comp : AFFECT
	  | EGAL
	  | DIFF
	  | SUP
	  | INF
	  | SUPEGAL
      | INFEGAL
;

expr : value 
     | IDENTIF 
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
value :  INT
		| RL
		| BL
		| CH
;
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