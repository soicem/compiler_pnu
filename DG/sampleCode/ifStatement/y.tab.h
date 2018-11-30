/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     num = 258,
     alpha = 259,
     LT = 260,
     GT = 261,
     EQ = 262,
     LE = 263,
     GE = 264,
     NE = 265,
     AND = 266,
     OR = 267,
     INC = 268,
     DEC = 269,
     CLASS = 270,
     FUNCTION = 271,
     WHILE = 272,
     FOR = 273,
     INT = 274,
     STRING = 275,
     LIST = 276,
     VOID = 277,
     RANGE = 278,
     IN = 279,
     UMINUS = 280,
     IF = 281,
     ELSE = 282
   };
#endif
/* Tokens.  */
#define num 258
#define alpha 259
#define LT 260
#define GT 261
#define EQ 262
#define LE 263
#define GE 264
#define NE 265
#define AND 266
#define OR 267
#define INC 268
#define DEC 269
#define CLASS 270
#define FUNCTION 271
#define WHILE 272
#define FOR 273
#define INT 274
#define STRING 275
#define LIST 276
#define VOID 277
#define RANGE 278
#define IN 279
#define UMINUS 280
#define IF 281
#define ELSE 282




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


