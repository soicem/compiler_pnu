%error-verbose

%{
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

%}

%union {
   int             intVal;
   double          floatVal;
   char*           ident;
   Expression*     exp;
   Statement*      stmt;
   StatementList*  stmtList;
   ParameterList*  paramList;
   ExpressionList* expList;
}

%token<intVal>   INTNUM    "int"
%token<floatVal> FLOATNUM  "float"
%token<ident>    IDENT     "identier"
%token LMS      LM
%token RMS      RM
%token PLUSEQ  "+="
%token MINUSEQ "-="
%token MULTEQ  "*="
%token DIVEQ   "/="
%token MODEQ   "%="
%token POWEQ   "^="
%token INC     "++"
%token DEC     "--"
%token LE      "<="
%token GE      ">="
%token EQ      "=="
%token NE      "!="
%token IF      "if"
%token DS      "\""
%token ELSE    "else"
%token WHILE   "while"
%token PRINT   "print"
%token RETURN  "return"
%token END     "end"
%token FUNC    "func"
%token CLASS   "class"

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%left '<' LE '>' GE EQ NE
%left '+' '-'
%left '*' '/' '%' '^'
%nonassoc UMINUS UFACTO
%nonassoc Arr

%type<exp>       _EXPRESSION
%type<exp>       _FUNC_CALL_EXP
%type<stmt>      _STATEMENT
%type<stmt>      _ASSIGNMENT
%type<stmt>      _PRINT
%type<stmt>      _FUNCTION_DEF
%type<stmt>      _FUNCTION_CALL
%type<stmt>      _IF_ELSE
%type<stmt>      _WHILE
%type<stmt>      _RETURN
%type<stmtList>  _STATEMENT_LIST
%type<paramList> _PARAMETER_LIST
%type<expList>   _EXPRESSION_LIST

%%
Superior        : /* empty */
                | _STATEMENT_LIST
                { Program($1).eval(); }
                ;

_STATEMENT_LIST  : _STATEMENT_LIST _STATEMENT
                     { $1->add($2); $$ = $1; }
                | _STATEMENT
                     { StatementList* sl = new StatementList; sl->add($1); $$ = sl; }
                ;

_STATEMENT       : _ASSIGNMENT
                | _PRINT
                | _FUNCTION_DEF
                | _CLASS_DEF
                | _IF_ELSE
                | _WHILE
                | _RETURN
                | _FUNCTION_CALL
                ;

_ASSIGNMENT      : IDENT '=' _EXPRESSION
                     { $$ = new Assignment($1, $3);
                       delete [] $1;
                     }
                | IDENT PLUSEQ _EXPRESSION
                     { $$ = new Assignment($1, new Addition(new Identifier($1), $3));
                       delete [] $1;
                     }
                | IDENT MINUSEQ _EXPRESSION
                     { $$ = new Assignment($1, new Subtraction(new Identifier($1), $3));
                       delete [] $1;
                     }
                | IDENT MULTEQ _EXPRESSION
                     { $$ = new Assignment($1, new Multiplication(new Identifier($1), $3));
                       delete [] $1;
                     }
                | IDENT DIVEQ _EXPRESSION
                     { $$ = new Assignment($1, new Division(new Identifier($1), $3));
                       delete [] $1;
                     }
                | IDENT MODEQ _EXPRESSION
                     { $$ = new Assignment($1, new Modulus(new Identifier($1), $3));
                       delete [] $1;
                     }
                | IDENT POWEQ _EXPRESSION
                     { $$ = new Assignment($1, new Exponent(new Identifier($1), $3));
                       delete [] $1;
                     }
                | INC IDENT
                     { $$ = new Assignment($2, new Addition(new Identifier($2), new Constant(1)));
                       delete [] $2;
                     } 
                | IDENT INC
                     { $$ = new Assignment($1, new Addition(new Identifier($1), new Constant(1)));
                       delete [] $1;
                     } 
                | DEC IDENT
                     { $$ = new Assignment($2, new Subtraction(new Identifier($2), new Constant(1)));
                       delete [] $2;
                     } 
                | IDENT DEC
                     { $$ = new Assignment($1, new Subtraction(new Identifier($1), new Constant(1)));
                       delete [] $1;
                     } 
                ;

_PRINT           : PRINT _EXPRESSION
                     { $$ = new Print($2); }
                ;




_FUNCTION_DEF    : FUNC IDENT '(' _PARAMETER_LIST ')' ':' _STATEMENT_LIST END
                     { $$ = new FunctionDef($2, new Function($4, $7));
                       delete [] $2;
                     }
                | FUNC IDENT '(' _PARAMETER_LIST ')' ':' END
                     { $$ = new FunctionDef($2, new Function($4, new StatementList()));
                       delete [] $2;
                     }
                | FUNC IDENT '(' ')' ':' _STATEMENT_LIST END
                     { $$ = new FunctionDef($2, new Function(new ParameterList(), $6));
                       delete [] $2;
                     }
                | FUNC IDENT '(' ')' ':' END
                     { $$ = new FunctionDef($2, new Function(new ParameterList(), new StatementList()));
                       delete [] $2;
                     }
                ;

_FUNCTION_CALL   : IDENT '(' _EXPRESSION_LIST ')'
                     { $$ = new FunctionCall($1, $3);
                       delete [] $1;
                     }
                   ;


_CLASS_DEF      : CLASS IDENT '{' _EXPRESSION_LIST '}' {  }
                ;

_IF_ELSE         : IF _EXPRESSION ':' _STATEMENT_LIST ELSE ':' _STATEMENT_LIST END
                     { $$ = new IfElse($2, $4, $7); }
                | IF _EXPRESSION ':' ELSE ':' _STATEMENT_LIST END
                     { $$ = new IfElse($2, new StatementList(), $6); }
                | IF _EXPRESSION ':' _STATEMENT_LIST ELSE ':' END
                     { $$ = new IfElse($2, $4, new StatementList()); }
                | IF _EXPRESSION ':' ELSE ':' END
                     { $$ = new IfElse($2, new StatementList(), new StatementList()); }
                | IF _EXPRESSION ':' _STATEMENT_LIST END
                     { $$ = new IfElse($2, $4); }
                | IF _EXPRESSION ':' END
                     { $$ = new IfElse($2, new StatementList()); }
                ;

_WHILE           : WHILE _EXPRESSION ':' _STATEMENT_LIST END
                     { $$ = new While($2, $4); }
                | WHILE _EXPRESSION ':' END
                     { $$ = new While($2, new StatementList()); }
                ;

_RETURN          : RETURN _EXPRESSION
                     { $$ = new Return($2); }
                ;

_PARAMETER_LIST  : _PARAMETER_LIST ',' IDENT
                     { $1->add($3);
                       $$ = $1;
                       delete [] $3;
                     }
                | IDENT
                     { ParameterList* pl = new ParameterList();
                       pl->add($1); $$ = pl;
                       delete [] $1;
                     }
                ;

_EXPRESSION      : '(' _EXPRESSION ')'
                     { $$ = $2; }
                | INTNUM
                     { $$ = new Constant($1); }
                | FLOATNUM
                     { $$ = new Constant($1); }
                | DS IDENT DS
                     { $$ = new Constant(new string($2));}
                | IDENT '[' INTNUM ']'
                     { 
                     }
                | IDENT
                     { $$ = new Identifier($1);
                       delete [] $1;
                     }
                | _EXPRESSION '+' _EXPRESSION
                     { $$ = new Addition($1, $3); }
                | _EXPRESSION '-' _EXPRESSION
                     { $$ = new Subtraction($1, $3); }
                | _EXPRESSION '*' _EXPRESSION
                     { $$ = new Multiplication($1, $3); }
                | _EXPRESSION '/' _EXPRESSION
                     { $$ = new Division($1, $3); }
                | _EXPRESSION '%' _EXPRESSION
                     { $$ = new Modulus($1, $3); }
                | _EXPRESSION '^' _EXPRESSION
                     { $$ = new Exponent($1, $3); }
                | _EXPRESSION '<' _EXPRESSION
                     { $$ = new LessThan($1, $3); }
                | _EXPRESSION '>' _EXPRESSION
                     { $$ = new GreaterThan($1, $3); }
                | _EXPRESSION LE _EXPRESSION
                     { $$ = new LessThanOrEqualTo($1, $3); }
                | _EXPRESSION GE _EXPRESSION
                     { $$ = new GreaterThanOrEqualTo($1, $3); }
                | _EXPRESSION EQ _EXPRESSION
                     { $$ = new Equals($1, $3); }
                | _EXPRESSION NE _EXPRESSION
                     { $$ = new NotEquals($1, $3); }
                | '-' _EXPRESSION %prec UMINUS
                     { $$ = new Negation($2); }
                | '~' _EXPRESSION %prec UFACTO
                     { $$ = new Factorial($2); }
                | _FUNC_CALL_EXP
                ;

_FUNC_CALL_EXP   : IDENT '(' _EXPRESSION_LIST ')'
                     { $$ = new FunctionCallExp($1, $3);
                       delete [] $1;
                     }
                ;

_EXPRESSION_LIST : /* empty*/
                     { $$ = new ExpressionList(); }
                | _EXPRESSION_LIST ',' _EXPRESSION
                     { $1->add($3);
                       $$ = $1;
                     }
                | _EXPRESSION
                     { ExpressionList* el = new ExpressionList();
                       el->add($1);
                       $$ = el;
                     }
                ;
%%