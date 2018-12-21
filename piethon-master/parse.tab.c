/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.2"

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
#line 3 "parse.y"

#include <iostream>
#include "exception.h"
#include "expression.h"
#include "statement.h"
#include "program.h"
#include "function.h"

using std::cerr;
using std::endl;

extern int yylex();
extern int yylineno;

bool error = false;

int parseResult = 1;

void yyerror(const char* s) {
   // bision seems to call both versions of yyerror, check a flag to supress the duplicate message
   if (!error) {
      cerr << "error (line " << yylineno << "): " << s << endl;
   }
}

void yyerror(const char* s, char c) {
   cerr << "error (line " << yylineno << "): " << s << " \"" << c << "\"" << endl;
   error = true;
}



/* Line 189 of yacc.c  */
#line 105 "parse.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     INTNUM = 258,
     FLOATNUM = 259,
     IDENT = 260,
     LMS = 261,
     LM = 262,
     RMS = 263,
     RM = 264,
     PLUSEQ = 265,
     MINUSEQ = 266,
     MULTEQ = 267,
     DIVEQ = 268,
     MODEQ = 269,
     POWEQ = 270,
     INC = 271,
     DEC = 272,
     LE = 273,
     GE = 274,
     EQ = 275,
     NE = 276,
     IF = 277,
     DS = 278,
     ELSE = 279,
     WHILE = 280,
     PRINT = 281,
     RETURN = 282,
     END = 283,
     FUNC = 284,
     CLASS = 285,
     LOWER_THAN_ELSE = 286,
     UFACTO = 287,
     UMINUS = 288,
     Arr = 289
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 35 "parse.y"

   int             intVal;
   double          floatVal;
   char*           ident;
   Expression*     exp;
   Statement*      stmt;
   StatementList*  stmtList;
   ParameterList*  paramList;
   ExpressionList* expList;



/* Line 214 of yacc.c  */
#line 188 "parse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 200 "parse.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNRULES -- Number of states.  */
#define YYNSTATES  133

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    38,     2,     2,
      44,    45,    36,    34,    49,    35,     2,    37,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,     2,
      32,    43,    33,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,    52,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    31,    35,    39,    43,    47,
      51,    55,    58,    61,    64,    67,    70,    79,    87,    95,
     102,   107,   113,   122,   130,   138,   145,   151,   156,   162,
     167,   170,   174,   176,   180,   182,   184,   188,   193,   195,
     199,   203,   207,   211,   215,   219,   223,   227,   231,   235,
     239,   243,   246,   249,   251,   256,   257,   261
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    -1,    55,    -1,    55,    56,    -1,    56,
      -1,    57,    -1,    58,    -1,    59,    -1,    61,    -1,    62,
      -1,    63,    -1,    64,    -1,    60,    -1,     5,    43,    66,
      -1,     5,    10,    66,    -1,     5,    11,    66,    -1,     5,
      12,    66,    -1,     5,    13,    66,    -1,     5,    14,    66,
      -1,     5,    15,    66,    -1,    16,     5,    -1,     5,    16,
      -1,    17,     5,    -1,     5,    17,    -1,    26,    66,    -1,
      29,     5,    44,    65,    45,    46,    55,    28,    -1,    29,
       5,    44,    65,    45,    46,    28,    -1,    29,     5,    44,
      45,    46,    55,    28,    -1,    29,     5,    44,    45,    46,
      28,    -1,     5,    44,    68,    45,    -1,    30,     5,    47,
      68,    48,    -1,    22,    66,    46,    55,    24,    46,    55,
      28,    -1,    22,    66,    46,    24,    46,    55,    28,    -1,
      22,    66,    46,    55,    24,    46,    28,    -1,    22,    66,
      46,    24,    46,    28,    -1,    22,    66,    46,    55,    28,
      -1,    22,    66,    46,    28,    -1,    25,    66,    46,    55,
      28,    -1,    25,    66,    46,    28,    -1,    27,    66,    -1,
      65,    49,     5,    -1,     5,    -1,    44,    66,    45,    -1,
       3,    -1,     4,    -1,    23,     5,    23,    -1,     5,    50,
       3,    51,    -1,     5,    -1,    66,    34,    66,    -1,    66,
      35,    66,    -1,    66,    36,    66,    -1,    66,    37,    66,
      -1,    66,    38,    66,    -1,    66,    39,    66,    -1,    66,
      32,    66,    -1,    66,    33,    66,    -1,    66,    18,    66,
      -1,    66,    19,    66,    -1,    66,    20,    66,    -1,    66,
      21,    66,    -1,    35,    66,    -1,    52,    66,    -1,    67,
      -1,     5,    44,    68,    45,    -1,    -1,    68,    49,    66,
      -1,    66,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,    97,   101,   103,   107,   108,   109,   110,
     111,   112,   113,   114,   117,   121,   125,   129,   133,   137,
     141,   145,   149,   153,   157,   163,   170,   174,   178,   182,
     188,   195,   198,   200,   202,   204,   206,   208,   212,   214,
     218,   222,   227,   234,   236,   238,   240,   242,   245,   249,
     251,   253,   255,   257,   259,   261,   263,   265,   267,   269,
     271,   273,   275,   277,   280,   287,   288,   292
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"int\"", "\"float\"", "\"identier\"",
  "LMS", "LM", "RMS", "RM", "\"+=\"", "\"-=\"", "\"*=\"", "\"/=\"",
  "\"%=\"", "\"^=\"", "\"++\"", "\"--\"", "\"<=\"", "\">=\"", "\"==\"",
  "\"!=\"", "\"if\"", "\"\\\"\"", "\"else\"", "\"while\"", "\"print\"",
  "\"return\"", "\"end\"", "\"func\"", "\"class\"", "LOWER_THAN_ELSE",
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UFACTO",
  "UMINUS", "Arr", "'='", "'('", "')'", "':'", "'{'", "'}'", "','", "'['",
  "']'", "'~'", "$accept", "Superior", "_STATEMENT_LIST", "_STATEMENT",
  "_ASSIGNMENT", "_PRINT", "_FUNCTION_DEF", "_FUNCTION_CALL", "_CLASS_DEF",
  "_IF_ELSE", "_WHILE", "_RETURN", "_PARAMETER_LIST", "_EXPRESSION",
  "_FUNC_CALL_EXP", "_EXPRESSION_LIST", 0
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
     285,   286,    60,    62,    43,    45,    42,    47,    37,    94,
     287,   288,   289,    61,    40,    41,    58,   123,   125,    44,
      91,    93,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    55,    56,    56,    56,    56,
      56,    56,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    59,    59,    59,    59,
      60,    61,    62,    62,    62,    62,    62,    62,    63,    63,
      64,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    67,    68,    68,    68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     8,     7,     7,     6,
       4,     5,     8,     7,     7,     6,     5,     4,     5,     4,
       2,     3,     1,     3,     1,     1,     3,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     1,     4,     0,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     5,     6,     7,     8,    13,     9,    10,    11,
      12,     0,     0,     0,     0,     0,     0,    22,    24,     0,
      65,    21,    23,    44,    45,    48,     0,     0,     0,     0,
       0,    63,     0,    25,    40,     0,     0,     1,     4,    15,
      16,    17,    18,    19,    20,    14,    67,     0,    65,     0,
       0,    61,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      30,     0,     0,     0,    46,    43,    57,    58,    59,    60,
      55,    56,    49,    50,    51,    52,    53,    54,     0,    37,
       0,    39,     0,    42,     0,     0,     0,    66,    64,    47,
       0,     0,    36,    38,     0,     0,     0,    31,    35,     0,
       0,    29,     0,     0,    41,    33,    34,     0,    28,    27,
       0,    32,    26
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   105,    56,    41,    57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -68
static const yytype_int16 yypact[] =
{
     335,    69,    23,    36,     2,     2,     2,     2,    39,    40,
      55,   335,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     2,     2,     2,     2,     2,     2,   -68,   -68,     2,
       2,   -68,   -68,   -68,   -68,   -20,    52,     2,     2,     2,
     102,   -68,   124,   348,   348,    14,    12,   -68,   -68,   348,
     348,   348,   348,   348,   348,   348,   348,   -18,     2,    57,
      50,   -68,   146,   -68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    71,   185,     3,     2,
     -68,     2,   -16,    24,   -68,   -68,   -22,   -22,   -22,   -22,
     -22,   -22,    13,    13,   -68,   -68,   -68,   -68,    28,   -68,
     170,   -68,   200,   -68,    31,    -7,    -9,   348,   -68,   -68,
     215,    44,   -68,   -68,   230,    46,    89,   -68,   -68,   245,
     260,   -68,   275,   290,   -68,   -68,   -68,   305,   -68,   -68,
     320,   -68,   -68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -68,   -68,   -67,   -11,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,    -3,   -68,   -47
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      48,    40,    42,    43,    44,    33,    34,    35,   103,   100,
     102,    82,    70,    71,    72,    73,    74,    75,    49,    50,
      51,    52,    53,    54,    58,    36,    55,    80,    31,   108,
      59,    81,   106,    81,    61,    62,    63,    37,   115,   117,
      81,    32,   116,   119,    45,    46,    38,   122,   104,    72,
      73,    74,    75,   127,    39,    47,   130,    60,    78,    79,
      83,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    84,   110,   109,     1,   114,   107,    21,
      22,    23,    24,    25,    26,    27,    28,     2,     3,    48,
     120,    48,   123,     4,   124,    98,     5,     6,     7,    99,
       8,     9,     0,     0,     0,     0,     0,     0,    48,     0,
       0,    48,    29,    30,     0,     0,    48,     0,     0,    48,
      64,    65,    66,    67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,    70,    71,    72,    73,
      74,    75,    64,    65,    66,    67,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    64,    65,    66,    67,     0,     0,
      77,     0,     0,     0,     0,     1,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,     2,     3,     0,     0,
       1,    85,     4,     0,   111,     5,     6,     7,   112,     8,
       9,     2,     3,     0,     0,     1,     0,     4,     0,     0,
       5,     6,     7,   101,     8,     9,     2,     3,     0,     0,
       1,     0,     4,     0,     0,     5,     6,     7,   113,     8,
       9,     2,     3,     0,     0,     1,     0,     4,     0,     0,
       5,     6,     7,   118,     8,     9,     2,     3,     0,     0,
       1,     0,     4,     0,     0,     5,     6,     7,   121,     8,
       9,     2,     3,     0,     0,     1,     0,     4,     0,     0,
       5,     6,     7,   125,     8,     9,     2,     3,     0,     0,
       1,     0,     4,     0,     0,     5,     6,     7,   126,     8,
       9,     2,     3,     0,     0,     1,     0,     4,     0,     0,
       5,     6,     7,   128,     8,     9,     2,     3,     0,     0,
       1,     0,     4,     0,     0,     5,     6,     7,   129,     8,
       9,     2,     3,     0,     0,     1,     0,     4,     0,     0,
       5,     6,     7,   131,     8,     9,     2,     3,     0,     0,
       1,     0,     4,     0,     0,     5,     6,     7,   132,     8,
       9,     2,     3,     0,     0,     0,     0,     4,     0,     0,
       5,     6,     7,     0,     8,     9,    64,    65,    66,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,    73,    74,    75
};

static const yytype_int16 yycheck[] =
{
      11,     4,     5,     6,     7,     3,     4,     5,     5,    76,
      77,    58,    34,    35,    36,    37,    38,    39,    21,    22,
      23,    24,    25,    26,    44,    23,    29,    45,     5,    45,
      50,    49,    79,    49,    37,    38,    39,    35,    45,    48,
      49,     5,    49,   110,     5,     5,    44,   114,    45,    36,
      37,    38,    39,   120,    52,     0,   123,     5,    44,    47,
       3,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    23,    46,    51,     5,    46,    81,    10,
      11,    12,    13,    14,    15,    16,    17,    16,    17,   100,
      46,   102,    46,    22,     5,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,   122,    43,    44,    -1,    -1,   127,    -1,    -1,   130,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    18,    19,    20,    21,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    18,    19,    20,    21,    -1,    -1,
      46,    -1,    -1,    -1,    -1,     5,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    16,    17,    -1,    -1,
       5,    45,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    16,    17,    -1,    -1,     5,    -1,    22,    -1,    -1,
      25,    26,    27,    28,    29,    30,    16,    17,    -1,    -1,
       5,    -1,    22,    -1,    -1,    25,    26,    27,    28,    29,
      30,    16,    17,    -1,    -1,     5,    -1,    22,    -1,    -1,
      25,    26,    27,    28,    29,    30,    16,    17,    -1,    -1,
       5,    -1,    22,    -1,    -1,    25,    26,    27,    28,    29,
      30,    16,    17,    -1,    -1,     5,    -1,    22,    -1,    -1,
      25,    26,    27,    28,    29,    30,    16,    17,    -1,    -1,
       5,    -1,    22,    -1,    -1,    25,    26,    27,    28,    29,
      30,    16,    17,    -1,    -1,     5,    -1,    22,    -1,    -1,
      25,    26,    27,    28,    29,    30,    16,    17,    -1,    -1,
       5,    -1,    22,    -1,    -1,    25,    26,    27,    28,    29,
      30,    16,    17,    -1,    -1,     5,    -1,    22,    -1,    -1,
      25,    26,    27,    28,    29,    30,    16,    17,    -1,    -1,
       5,    -1,    22,    -1,    -1,    25,    26,    27,    28,    29,
      30,    16,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,    29,    30,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    16,    17,    22,    25,    26,    27,    29,    30,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    10,    11,    12,    13,    14,    15,    16,    17,    43,
      44,     5,     5,     3,     4,     5,    23,    35,    44,    52,
      66,    67,    66,    66,    66,     5,     5,     0,    56,    66,
      66,    66,    66,    66,    66,    66,    66,    68,    44,    50,
       5,    66,    66,    66,    18,    19,    20,    21,    32,    33,
      34,    35,    36,    37,    38,    39,    46,    46,    44,    47,
      45,    49,    68,     3,    23,    45,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    24,    28,
      55,    28,    55,     5,    45,    65,    68,    66,    45,    51,
      46,    24,    28,    28,    46,    45,    49,    48,    28,    55,
      46,    28,    55,    46,     5,    28,    28,    55,    28,    28,
      55,    28,    28
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
        case 3:

/* Line 1464 of yacc.c  */
#line 98 "parse.y"
    { Program((yyvsp[(1) - (1)].stmtList)).eval(); ;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 102 "parse.y"
    { (yyvsp[(1) - (2)].stmtList)->add((yyvsp[(2) - (2)].stmt)); (yyval.stmtList) = (yyvsp[(1) - (2)].stmtList); ;}
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 104 "parse.y"
    { StatementList* sl = new StatementList; sl->add((yyvsp[(1) - (1)].stmt)); (yyval.stmtList) = sl; ;}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 118 "parse.y"
    { (yyval.stmt) = new Assignment((yyvsp[(1) - (3)].ident), (yyvsp[(3) - (3)].exp));
                       delete [] (yyvsp[(1) - (3)].ident);
                     ;}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 122 "parse.y"
    { (yyval.stmt) = new Assignment((yyvsp[(1) - (3)].ident), new Addition(new Identifier((yyvsp[(1) - (3)].ident)), (yyvsp[(3) - (3)].exp)));
                       delete [] (yyvsp[(1) - (3)].ident);
                     ;}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 126 "parse.y"
    { (yyval.stmt) = new Assignment((yyvsp[(1) - (3)].ident), new Subtraction(new Identifier((yyvsp[(1) - (3)].ident)), (yyvsp[(3) - (3)].exp)));
                       delete [] (yyvsp[(1) - (3)].ident);
                     ;}
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 130 "parse.y"
    { (yyval.stmt) = new Assignment((yyvsp[(1) - (3)].ident), new Multiplication(new Identifier((yyvsp[(1) - (3)].ident)), (yyvsp[(3) - (3)].exp)));
                       delete [] (yyvsp[(1) - (3)].ident);
                     ;}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 134 "parse.y"
    { (yyval.stmt) = new Assignment((yyvsp[(1) - (3)].ident), new Division(new Identifier((yyvsp[(1) - (3)].ident)), (yyvsp[(3) - (3)].exp)));
                       delete [] (yyvsp[(1) - (3)].ident);
                     ;}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 138 "parse.y"
    { (yyval.stmt) = new Assignment((yyvsp[(1) - (3)].ident), new Modulus(new Identifier((yyvsp[(1) - (3)].ident)), (yyvsp[(3) - (3)].exp)));
                       delete [] (yyvsp[(1) - (3)].ident);
                     ;}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 142 "parse.y"
    { (yyval.stmt) = new Assignment((yyvsp[(1) - (3)].ident), new Exponent(new Identifier((yyvsp[(1) - (3)].ident)), (yyvsp[(3) - (3)].exp)));
                       delete [] (yyvsp[(1) - (3)].ident);
                     ;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 146 "parse.y"
    { (yyval.stmt) = new Assignment((yyvsp[(2) - (2)].ident), new Addition(new Identifier((yyvsp[(2) - (2)].ident)), new Constant(1)));
                       delete [] (yyvsp[(2) - (2)].ident);
                     ;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 150 "parse.y"
    { (yyval.stmt) = new Assignment((yyvsp[(1) - (2)].ident), new Addition(new Identifier((yyvsp[(1) - (2)].ident)), new Constant(1)));
                       delete [] (yyvsp[(1) - (2)].ident);
                     ;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 154 "parse.y"
    { (yyval.stmt) = new Assignment((yyvsp[(2) - (2)].ident), new Subtraction(new Identifier((yyvsp[(2) - (2)].ident)), new Constant(1)));
                       delete [] (yyvsp[(2) - (2)].ident);
                     ;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 158 "parse.y"
    { (yyval.stmt) = new Assignment((yyvsp[(1) - (2)].ident), new Subtraction(new Identifier((yyvsp[(1) - (2)].ident)), new Constant(1)));
                       delete [] (yyvsp[(1) - (2)].ident);
                     ;}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 164 "parse.y"
    { (yyval.stmt) = new Print((yyvsp[(2) - (2)].exp)); ;}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 171 "parse.y"
    { (yyval.stmt) = new FunctionDef((yyvsp[(2) - (8)].ident), new Function((yyvsp[(4) - (8)].paramList), (yyvsp[(7) - (8)].stmtList)));
                       delete [] (yyvsp[(2) - (8)].ident);
                     ;}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 175 "parse.y"
    { (yyval.stmt) = new FunctionDef((yyvsp[(2) - (7)].ident), new Function((yyvsp[(4) - (7)].paramList), new StatementList()));
                       delete [] (yyvsp[(2) - (7)].ident);
                     ;}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 179 "parse.y"
    { (yyval.stmt) = new FunctionDef((yyvsp[(2) - (7)].ident), new Function(new ParameterList(), (yyvsp[(6) - (7)].stmtList)));
                       delete [] (yyvsp[(2) - (7)].ident);
                     ;}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 183 "parse.y"
    { (yyval.stmt) = new FunctionDef((yyvsp[(2) - (6)].ident), new Function(new ParameterList(), new StatementList()));
                       delete [] (yyvsp[(2) - (6)].ident);
                     ;}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 189 "parse.y"
    { (yyval.stmt) = new FunctionCall((yyvsp[(1) - (4)].ident), (yyvsp[(3) - (4)].expList));
                       delete [] (yyvsp[(1) - (4)].ident);
                     ;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 195 "parse.y"
    {  ;}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 199 "parse.y"
    { (yyval.stmt) = new IfElse((yyvsp[(2) - (8)].exp), (yyvsp[(4) - (8)].stmtList), (yyvsp[(7) - (8)].stmtList)); ;}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 201 "parse.y"
    { (yyval.stmt) = new IfElse((yyvsp[(2) - (7)].exp), new StatementList(), (yyvsp[(6) - (7)].stmtList)); ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 203 "parse.y"
    { (yyval.stmt) = new IfElse((yyvsp[(2) - (7)].exp), (yyvsp[(4) - (7)].stmtList), new StatementList()); ;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 205 "parse.y"
    { (yyval.stmt) = new IfElse((yyvsp[(2) - (6)].exp), new StatementList(), new StatementList()); ;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 207 "parse.y"
    { (yyval.stmt) = new IfElse((yyvsp[(2) - (5)].exp), (yyvsp[(4) - (5)].stmtList)); ;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 209 "parse.y"
    { (yyval.stmt) = new IfElse((yyvsp[(2) - (4)].exp), new StatementList()); ;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 213 "parse.y"
    { (yyval.stmt) = new While((yyvsp[(2) - (5)].exp), (yyvsp[(4) - (5)].stmtList)); ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 215 "parse.y"
    { (yyval.stmt) = new While((yyvsp[(2) - (4)].exp), new StatementList()); ;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 219 "parse.y"
    { (yyval.stmt) = new Return((yyvsp[(2) - (2)].exp)); ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 223 "parse.y"
    { (yyvsp[(1) - (3)].paramList)->add((yyvsp[(3) - (3)].ident));
                       (yyval.paramList) = (yyvsp[(1) - (3)].paramList);
                       delete [] (yyvsp[(3) - (3)].ident);
                     ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 228 "parse.y"
    { ParameterList* pl = new ParameterList();
                       pl->add((yyvsp[(1) - (1)].ident)); (yyval.paramList) = pl;
                       delete [] (yyvsp[(1) - (1)].ident);
                     ;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 235 "parse.y"
    { (yyval.exp) = (yyvsp[(2) - (3)].exp); ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 237 "parse.y"
    { (yyval.exp) = new Constant((yyvsp[(1) - (1)].intVal)); ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 239 "parse.y"
    { (yyval.exp) = new Constant((yyvsp[(1) - (1)].floatVal)); ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 241 "parse.y"
    { (yyval.exp) = new Constant(new string((yyvsp[(2) - (3)].ident)));;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 243 "parse.y"
    { 
                     ;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 246 "parse.y"
    { (yyval.exp) = new Identifier((yyvsp[(1) - (1)].ident));
                       delete [] (yyvsp[(1) - (1)].ident);
                     ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 250 "parse.y"
    { (yyval.exp) = new Addition((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 252 "parse.y"
    { (yyval.exp) = new Subtraction((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 254 "parse.y"
    { (yyval.exp) = new Multiplication((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 256 "parse.y"
    { (yyval.exp) = new Division((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 258 "parse.y"
    { (yyval.exp) = new Modulus((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 260 "parse.y"
    { (yyval.exp) = new Exponent((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 262 "parse.y"
    { (yyval.exp) = new LessThan((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 264 "parse.y"
    { (yyval.exp) = new GreaterThan((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 266 "parse.y"
    { (yyval.exp) = new LessThanOrEqualTo((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 268 "parse.y"
    { (yyval.exp) = new GreaterThanOrEqualTo((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 270 "parse.y"
    { (yyval.exp) = new Equals((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 272 "parse.y"
    { (yyval.exp) = new NotEquals((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 274 "parse.y"
    { (yyval.exp) = new Negation((yyvsp[(2) - (2)].exp)); ;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 276 "parse.y"
    { (yyval.exp) = new Factorial((yyvsp[(2) - (2)].exp)); ;}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 281 "parse.y"
    { (yyval.exp) = new FunctionCallExp((yyvsp[(1) - (4)].ident), (yyvsp[(3) - (4)].expList));
                       delete [] (yyvsp[(1) - (4)].ident);
                     ;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 287 "parse.y"
    { (yyval.expList) = new ExpressionList(); ;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 289 "parse.y"
    { (yyvsp[(1) - (3)].expList)->add((yyvsp[(3) - (3)].exp));
                       (yyval.expList) = (yyvsp[(1) - (3)].expList);
                     ;}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 293 "parse.y"
    { ExpressionList* el = new ExpressionList();
                       el->add((yyvsp[(1) - (1)].exp));
                       (yyval.expList) = el;
                     ;}
    break;



/* Line 1464 of yacc.c  */
#line 2010 "parse.tab.c"
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



/* Line 1684 of yacc.c  */
#line 298 "parse.y"

