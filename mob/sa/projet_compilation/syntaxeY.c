
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntaxe.y"
/*-------- syntaxe.y -----------*/

#include <stdio.h>
#include <string.h>
extern FILE* yyin; //file pointer by default points to terminal
int yylex(void); // defini dans lexiqueL.c, utilise par yyparse()
void yyerror(const char * msg);
char nom[50];
char valIdentif[256];
int lineNumber;
char vars[50][50] = {""};
char typ[50];
int i; 


/* Line 189 of yacc.c  */
#line 89 "syntaxeY.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 194 "syntaxeY.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   482

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNRULES -- Number of states.  */
#define YYNSTATES  212

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    16,    21,    24,    27,    30,    32,
      34,    50,    65,    80,    82,    84,    94,   103,   112,   120,
     126,   130,   136,   143,   147,   153,   157,   161,   163,   165,
     167,   169,   171,   174,   176,   181,   190,   198,   204,   213,
     221,   229,   237,   246,   254,   257,   260,   263,   266,   268,
     274,   276,   280,   284,   288,   292,   294,   296,   298,   300,
     302,   304,   306,   308,   310,   312,   314,   318,   322,   326,
     330,   332,   334,   336,   338,   340,   342,   344,   346
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    66,    67,    72,     3,    76,     4,    -1,
      66,    72,     3,    76,     4,    -1,    66,    72,     3,     4,
      -1,     8,     7,    -1,    68,    67,    -1,    70,    67,    -1,
      68,    -1,    70,    -1,    34,     7,    53,    71,    54,    57,
      75,    72,    76,    63,    53,    69,    54,    35,     5,    -1,
      34,     7,    53,    71,    54,    57,    75,    76,    63,    53,
      69,    54,    35,     5,    -1,    34,     7,    53,    54,    57,
      75,    72,    76,    63,    53,    69,    54,    35,     5,    -1,
      86,    -1,     7,    -1,    36,     7,    53,    71,    54,    72,
      76,    37,     5,    -1,    36,     7,    53,    54,    72,    76,
      37,     5,    -1,    36,     7,    53,    71,    54,    76,    37,
       5,    -1,    36,     7,    53,    54,    76,    37,     5,    -1,
       7,    57,    75,    58,    71,    -1,     7,    57,    75,    -1,
       9,    74,    57,    75,     5,    -1,     9,    74,    57,    75,
       5,    72,    -1,    14,    73,     5,    -1,     7,    38,    86,
      58,    73,    -1,     7,    38,    86,    -1,     7,    58,    74,
      -1,     7,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,    76,    77,    -1,    77,    -1,     7,    38,    84,     5,
      -1,    15,    53,    55,    56,    55,     7,    54,     5,    -1,
      15,    53,    55,    56,    55,    54,     5,    -1,    16,    53,
       7,    54,     5,    -1,    22,     7,    23,    86,    24,    86,
      76,    25,    -1,    26,    53,    80,    54,    27,    76,    28,
      -1,    27,    76,    26,    53,    80,    54,     5,    -1,    29,
      76,    30,    53,    80,    54,     5,    -1,    31,    53,     7,
      54,    78,    57,    76,     5,    -1,    17,    53,    80,    54,
      18,    79,    21,    -1,    86,    78,    -1,    86,    32,    -1,
      77,    79,    -1,    20,    79,    -1,    77,    -1,    53,    81,
      54,    82,    80,    -1,    81,    -1,    53,    81,    54,    -1,
       7,    83,     7,    -1,     7,    83,    86,    -1,    86,    83,
       7,    -1,    50,    -1,    51,    -1,    38,    -1,    39,    -1,
      40,    -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,
      86,    -1,     7,    -1,     7,    85,     7,    -1,     7,    85,
      86,    -1,    86,    85,    86,    -1,    86,    85,     7,    -1,
      45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,
      62,    -1,    59,    -1,    60,    -1,    61,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    82,    82,    83,    84,    87,    90,    91,    92,    93,
      96,    97,    99,   103,   104,   107,   108,   109,   110,   113,
     114,   117,   118,   119,   122,   123,   126,   127,   130,   131,
     132,   133,   135,   136,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   153,   154,   157,   158,   159,   162,
     163,   164,   167,   168,   169,   172,   173,   176,   177,   178,
     179,   180,   181,   182,   185,   186,   187,   188,   189,   190,
     192,   193,   194,   195,   196,   198,   199,   200,   201
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "START", "END", "PTVIRG", "NOMBRE",
  "IDENTIF", "ALGO", "VAR", "INTEGER", "REEL", "CHAR", "BOOLEAN", "CONST",
  "WRITE", "READ", "IF", "THEN", "ELSEIF", "ELSE", "ENDIF", "FOR", "FROM",
  "TO", "ENDFOR", "WHILE", "DO", "ENDWHILE", "LOOP", "TILL", "SWITCH",
  "OTHER", "ENDSWITCH", "FUNCTION", "ENDFUNCTION", "PROCEDURE",
  "ENDPROCEDURE", "AFFECT", "EGAL", "DIFF", "SUP", "INF", "SUPEGAL",
  "INFEGAL", "ADD", "SOUST", "DIV", "MULT", "RESTDIV", "AND", "OR", "NO",
  "PAROV", "PARFER", "DBQUOTE", "SPEECH", "DEUXPTS", "VIRG", "RL", "BL",
  "CH", "INT", "TURNBACK", "$accept", "program", "nomalgo", "declarfunct",
  "funct", "retourner", "proced", "declarvf", "declar", "listconst",
  "listident", "type", "listInstr", "inst", "val", "instdonne", "condinst",
  "cond1", "op", "comp", "expr", "operateur", "value", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    65,    66,    67,    67,    67,    67,
      68,    68,    68,    69,    69,    70,    70,    70,    70,    71,
      71,    72,    72,    72,    73,    73,    74,    74,    75,    75,
      75,    75,    76,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    79,    79,    79,    80,
      80,    80,    81,    81,    81,    82,    82,    83,    83,    83,
      83,    83,    83,    83,    84,    84,    84,    84,    84,    84,
      85,    85,    85,    85,    85,    86,    86,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     5,     4,     2,     2,     2,     1,     1,
      15,    14,    14,     1,     1,     9,     8,     8,     7,     5,
       3,     5,     6,     3,     5,     3,     3,     1,     1,     1,
       1,     1,     2,     1,     4,     8,     7,     5,     8,     7,
       7,     7,     8,     7,     2,     2,     2,     2,     1,     5,
       1,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     5,     1,     0,     0,     0,     0,
       0,     8,     9,     0,    27,     0,     0,     0,     0,     0,
       0,     6,     7,     0,     0,     0,     0,    23,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    26,    28,    29,    30,    31,     0,    76,
      77,    78,    75,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
      32,    21,     0,     0,     0,     0,     0,     0,     0,     2,
      65,     0,    64,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     0,     0,    22,    24,    20,     0,     0,
       0,     0,     0,     0,    70,    71,    72,    73,    74,     0,
      34,     0,     0,     0,    57,    58,    59,    60,    61,    62,
      63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,    66,    67,    69,
      68,     0,    37,    52,    53,    51,     0,    54,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,    16,     0,
      17,     0,     0,    55,    56,     0,     0,    48,     0,     0,
       0,     0,     0,     0,    45,    44,     0,     0,     0,    15,
       0,    36,    49,    47,    46,    43,     0,    39,    40,    41,
       0,     0,     0,     0,    35,    38,    42,    14,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
      11,    10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    10,    11,   198,    12,    56,    13,    17,
      15,    48,    41,    42,   152,   168,    87,    88,   165,   121,
      81,   109,    89
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -186
static const yytype_int16 yypact[] =
{
      -4,     6,    17,    16,  -186,  -186,    26,    28,    31,    40,
       5,   -18,   -18,    19,   -10,    12,    23,    66,    24,    41,
      73,  -186,  -186,   263,    26,    76,   256,  -186,    -1,     0,
     421,  -186,    43,    45,    54,    59,    72,    61,   421,   421,
      63,   280,  -186,  -186,  -186,  -186,  -186,  -186,    77,  -186,
    -186,  -186,  -186,    35,    27,    39,    64,   336,    67,   297,
     102,    65,   116,    13,   103,    13,   438,   353,   124,  -186,
    -186,     5,    28,    76,    76,    79,   421,   195,   336,  -186,
     433,   132,   433,    82,    87,   432,   118,    88,  -186,   432,
     256,    95,   107,   113,   114,  -186,  -186,    98,     5,    76,
     212,   164,   421,   229,  -186,  -186,  -186,  -186,  -186,   123,
    -186,   133,   115,   167,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,   139,   119,   158,   174,   163,   161,    13,    13,   256,
     182,   421,   336,   185,  -186,   246,   191,  -186,  -186,  -186,
    -186,     3,  -186,  -186,  -186,   -27,   370,  -186,   256,   421,
     143,   149,   147,   154,  -186,    29,   421,    84,  -186,   204,
    -186,   166,   213,  -186,  -186,    13,   370,   370,   202,   421,
     387,     4,   220,   421,  -186,  -186,   177,   128,   178,  -186,
     228,  -186,  -186,  -186,  -186,  -186,   404,  -186,  -186,  -186,
     315,   146,   184,   146,  -186,  -186,  -186,  -186,   181,  -186,
     146,   186,   207,   193,   215,   243,   217,   249,  -186,   252,
    -186,  -186
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -186,  -186,  -186,    15,  -186,  -185,  -186,   -28,    -8,   187,
     240,   -62,     2,   -38,   112,  -124,   -60,   183,  -186,   192,
    -186,   189,   -26
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      53,    58,    20,    70,     1,    91,    54,    54,   201,   188,
     161,    97,    98,     4,     6,   203,     8,     5,     9,     7,
      85,    70,    23,   163,   164,     6,    21,    22,    70,    70,
       7,   149,    59,    14,    82,    16,    32,   132,    18,    70,
      66,    67,   183,   184,    33,    34,    35,    19,    24,    76,
       8,    36,     9,    55,    57,    37,    38,   162,    39,    77,
      40,    26,    70,    95,   125,    70,    86,   150,   151,    25,
     102,    27,    49,    50,    51,    52,    30,    28,   100,    64,
     103,    60,    71,   138,    73,   140,    44,    45,    46,    47,
     131,    32,   176,    72,    29,   144,    74,    70,    61,    33,
      34,    35,   154,   153,   135,   182,    36,    62,   167,    80,
      37,    38,    63,    39,    65,    40,    68,    70,    75,    70,
      83,    78,   169,    84,   156,    85,    90,   153,   167,   167,
     137,    94,    70,   155,   157,    32,    99,   110,   112,    70,
     139,   113,   123,    33,    34,    35,   143,   178,    70,   126,
      36,   170,    70,   197,    37,    38,   130,    39,   177,    40,
     127,    49,    50,    51,    52,   199,   128,   199,   129,   134,
     141,   186,   142,   145,   199,   190,   146,    49,    50,    51,
      52,   147,    49,    50,    51,    52,   174,   148,   149,    54,
     158,   192,    49,    50,    51,    52,   160,   171,    49,    50,
      51,    52,    32,   172,   173,    49,    50,    51,    52,   179,
      33,    34,    35,    49,    50,    51,    52,    36,   181,    32,
     180,    37,    38,   185,    39,   189,    40,    33,    34,    35,
     191,   193,   101,   194,    36,   202,    32,   200,    37,    38,
     204,    39,   205,    40,    33,    34,    35,   206,   208,   133,
     207,    36,   209,    32,   210,    37,    38,   211,    39,    96,
      40,    33,    34,    35,    43,   175,   136,    31,    36,   122,
      32,   111,    37,    38,     0,    39,     0,    40,    33,    34,
      35,   124,     0,   159,    69,    36,     0,    32,     0,    37,
      38,     0,    39,     0,    40,    33,    34,    35,     0,     0,
       0,    79,    36,     0,    32,     0,    37,    38,     0,    39,
       0,    40,    33,    34,    35,    49,    50,    51,    52,    36,
     196,     0,    32,    37,    38,     0,    39,     0,    40,     0,
      33,    34,    35,     0,     0,     0,     0,    36,     0,     0,
       0,    37,    38,    32,    39,     6,    40,     0,     0,     0,
       7,    33,    34,    35,     0,     0,     0,     0,    36,     0,
      32,     0,    37,    38,     0,    39,     0,    40,    33,    34,
      35,     0,     0,     0,     0,    36,     0,    32,     0,    37,
      38,     0,    39,    93,    40,    33,    34,    35,     0,     0,
     166,     0,    36,     0,    32,     0,    37,    38,     0,    39,
       0,    40,    33,    34,    35,     0,     0,     0,     0,    36,
       0,    32,     0,    37,    38,   187,    39,     0,    40,    33,
      34,    35,     0,     0,     0,     0,    36,     0,    32,   195,
      37,    38,     0,    39,     0,    40,    33,    34,    35,     0,
       0,     0,     0,    36,     0,    32,     0,    37,    38,     0,
      39,     0,    40,    33,    34,    35,     0,     0,     0,     0,
      36,     0,     0,     0,    92,    38,     0,    39,     0,    40,
     114,   115,   116,   117,   118,   119,   120,     0,   104,   105,
     106,   107,   108
};

static const yytype_int16 yycheck[] =
{
      26,    29,    10,    41,     8,    65,     7,     7,   193,     5,
       7,    73,    74,     7,     9,   200,    34,     0,    36,    14,
       7,    59,     3,    50,    51,     9,    11,    12,    66,    67,
      14,    27,    30,     7,    60,     7,     7,    99,     7,    77,
      38,    39,   166,   167,    15,    16,    17,     7,    58,    57,
      34,    22,    36,    54,    54,    26,    27,    54,    29,    57,
      31,    38,   100,    71,    90,   103,    53,   127,   128,    57,
      78,     5,    59,    60,    61,    62,     3,    53,    76,     7,
      78,    38,     5,   109,    57,   111,    10,    11,    12,    13,
      98,     7,    63,    58,    53,   121,    57,   135,    53,    15,
      16,    17,   130,   129,   102,   165,    22,    53,   146,     7,
      26,    27,    53,    29,    53,    31,    53,   155,    54,   157,
      55,    54,   148,     7,   132,     7,    23,   153,   166,   167,
       7,     7,   170,   131,   132,     7,    57,     5,    56,   177,
       7,    54,    54,    15,    16,    17,     7,    63,   186,    54,
      22,   149,   190,     7,    26,    27,    58,    29,   156,    31,
      53,    59,    60,    61,    62,   191,    53,   193,    54,     5,
      55,   169,     5,    54,   200,   173,    18,    59,    60,    61,
      62,     7,    59,    60,    61,    62,    32,    24,    27,     7,
       5,    63,    59,    60,    61,    62,     5,    54,    59,    60,
      61,    62,     7,    54,    57,    59,    60,    61,    62,     5,
      15,    16,    17,    59,    60,    61,    62,    22,     5,     7,
      54,    26,    27,    21,    29,     5,    31,    15,    16,    17,
      53,    53,    37,     5,    22,    54,     7,    53,    26,    27,
      54,    29,    35,    31,    15,    16,    17,    54,     5,    37,
      35,    22,    35,     7,     5,    26,    27,     5,    29,    72,
      31,    15,    16,    17,    24,   153,    37,     4,    22,    86,
       7,    82,    26,    27,    -1,    29,    -1,    31,    15,    16,
      17,    89,    -1,    37,     4,    22,    -1,     7,    -1,    26,
      27,    -1,    29,    -1,    31,    15,    16,    17,    -1,    -1,
      -1,     4,    22,    -1,     7,    -1,    26,    27,    -1,    29,
      -1,    31,    15,    16,    17,    59,    60,    61,    62,    22,
       5,    -1,     7,    26,    27,    -1,    29,    -1,    31,    -1,
      15,    16,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    27,     7,    29,     9,    31,    -1,    -1,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    22,    -1,
       7,    -1,    26,    27,    -1,    29,    -1,    31,    15,    16,
      17,    -1,    -1,    -1,    -1,    22,    -1,     7,    -1,    26,
      27,    -1,    29,    30,    31,    15,    16,    17,    -1,    -1,
      20,    -1,    22,    -1,     7,    -1,    26,    27,    -1,    29,
      -1,    31,    15,    16,    17,    -1,    -1,    -1,    -1,    22,
      -1,     7,    -1,    26,    27,    28,    29,    -1,    31,    15,
      16,    17,    -1,    -1,    -1,    -1,    22,    -1,     7,    25,
      26,    27,    -1,    29,    -1,    31,    15,    16,    17,    -1,
      -1,    -1,    -1,    22,    -1,     7,    -1,    26,    27,    -1,
      29,    -1,    31,    15,    16,    17,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    26,    27,    -1,    29,    -1,    31,
      38,    39,    40,    41,    42,    43,    44,    -1,    45,    46,
      47,    48,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    65,    66,     7,     0,     9,    14,    34,    36,
      67,    68,    70,    72,     7,    74,     7,    73,     7,     7,
      72,    67,    67,     3,    58,    57,    38,     5,    53,    53,
       3,     4,     7,    15,    16,    17,    22,    26,    27,    29,
      31,    76,    77,    74,    10,    11,    12,    13,    75,    59,
      60,    61,    62,    86,     7,    54,    71,    54,    71,    76,
      38,    53,    53,    53,     7,    53,    76,    76,    53,     4,
      77,     5,    58,    57,    57,    54,    72,    76,    54,     4,
       7,    84,    86,    55,     7,     7,    53,    80,    81,    86,
      23,    80,    26,    30,     7,    72,    73,    75,    75,    57,
      76,    37,    72,    76,    45,    46,    47,    48,    49,    85,
       5,    85,    56,    54,    38,    39,    40,    41,    42,    43,
      44,    83,    81,    54,    83,    86,    54,    53,    53,    54,
      58,    72,    75,    37,     5,    76,    37,     7,    86,     7,
      86,    55,     5,     7,    86,    54,    18,     7,    24,    27,
      80,    80,    78,    86,    71,    76,    72,    76,     5,    37,
       5,     7,    54,    50,    51,    82,    20,    77,    79,    86,
      76,    54,    54,    57,    32,    78,    63,    76,    63,     5,
      54,     5,    80,    79,    79,    21,    76,    28,     5,     5,
      76,    53,    63,    53,     5,    25,     5,     7,    69,    86,
      53,    69,    54,    69,    54,    35,    54,    35,     5,    35,
       5,     5
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 82 "syntaxe.y"
    {printf(" squelette correcte \n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 83 "syntaxe.y"
    {printf(" squelette correcte \n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 84 "syntaxe.y"
    {printf(" squelette correcte \n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 87 "syntaxe.y"
    {recunom(valIdentif,nom);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 93 "syntaxe.y"
    {printf(" declaration du procedure \n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 96 "syntaxe.y"
    {printf(" definition du fonction \n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 98 "syntaxe.y"
    {printf(" definition du fonction \n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 100 "syntaxe.y"
    {printf(" definition du fonction \n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 107 "syntaxe.y"
    {printf(" definition de procedure \n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 108 "syntaxe.y"
    {printf(" definition de procedure \n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 109 "syntaxe.y"
    {printf(" definition de procedure \n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 110 "syntaxe.y"
    {printf(" definition de procedure \n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 119 "syntaxe.y"
    {printf(" declaration des constantes \n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 126 "syntaxe.y"
    {recuvar(valIdentif,vars);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 127 "syntaxe.y"
    {recuvar(valIdentif,vars);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 130 "syntaxe.y"
    {recutype(valIdentif,typ);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 131 "syntaxe.y"
    {recutype(valIdentif,typ);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 132 "syntaxe.y"
    {recutype(valIdentif,typ);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 133 "syntaxe.y"
    {recutype(valIdentif,typ);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 141 "syntaxe.y"
    {printf(" instr affectation \n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 142 "syntaxe.y"
    {printf(" instr write \n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 143 "syntaxe.y"
    {printf(" instr write \n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 144 "syntaxe.y"
    {printf(" instr read \n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 145 "syntaxe.y"
    {printf(" instr for \n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 146 "syntaxe.y"
    {printf(" instr while \n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 147 "syntaxe.y"
    {printf(" instr do while \n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 148 "syntaxe.y"
    {printf(" instr loop \n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 149 "syntaxe.y"
    {printf(" instr switch \n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 150 "syntaxe.y"
    {printf(" instr if \n");;}
    break;



/* Line 1455 of yacc.c  */
#line 1821 "syntaxeY.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 203 "syntaxe.y"

void yyerror( const char * msg){

printf("line %d : %s", lineNumber, msg);

}

void recunom(char ch[],char nom[]){
	strcpy(nom,ch);
}
void recuvar(char *ch,char vars[][50]){
	strcpy(vars[i++],ch);
}
void recutype(char ch[],char type[]){
	strcpy(type,ch);
}

int main(int argc,char ** argv){
FILE * exemple;
int i = 0;
if(argc>1) yyin=fopen(argv[1],"r");
lineNumber=1;
if(!yyparse())
printf("Expression correct\n");
	exemple = fopen(nom,"w");
	fprintf(exemple,"#include<stdio.h>\n");
	fprintf(exemple,"void main() {\n");
	if(strcmp(typ,"integer")){
		fprintf(exemple,"int\t");
	}
	else if(strcmp(typ,"reel")){
			fprintf(exemple,"float\t");
		}
	for(i=0;i<2;i++)
		fprintf(exemple,"%s,",vars[i]);
	fprintf(exemple,"%s;\n",vars[i]);
	fprintf(exemple,"}\n");
	fclose(exemple);

return(0);
}