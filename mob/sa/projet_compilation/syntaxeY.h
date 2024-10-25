
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     START = 258,
     END = 259,
     PTVIRG = 260,
     NOMBRE = 261,
     IDENTIF = 262,
     ALGO = 263,
     VAR = 264,
     INTEGER = 265,
     REEL = 266,
     CHAR = 267,
     BOOLEAN = 268,
     CONST = 269,
     WRITE = 270,
     READ = 271,
     IF = 272,
     THEN = 273,
     ELSEIF = 274,
     ELSE = 275,
     ENDIF = 276,
     FOR = 277,
     FROM = 278,
     TO = 279,
     ENDFOR = 280,
     WHILE = 281,
     DO = 282,
     ENDWHILE = 283,
     LOOP = 284,
     TILL = 285,
     SWITCH = 286,
     OTHER = 287,
     ENDSWITCH = 288,
     FUNCTION = 289,
     ENDFUNCTION = 290,
     PROCEDURE = 291,
     ENDPROCEDURE = 292,
     AFFECT = 293,
     EGAL = 294,
     DIFF = 295,
     SUP = 296,
     INF = 297,
     SUPEGAL = 298,
     INFEGAL = 299,
     ADD = 300,
     SOUST = 301,
     DIV = 302,
     MULT = 303,
     RESTDIV = 304,
     AND = 305,
     OR = 306,
     NO = 307,
     PAROV = 308,
     PARFER = 309,
     DBQUOTE = 310,
     SPEECH = 311,
     DEUXPTS = 312,
     VIRG = 313,
     RL = 314,
     BL = 315,
     CH = 316,
     INT = 317,
     TURNBACK = 318
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


