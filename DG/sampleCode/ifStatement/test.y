%{  
 #include<stdio.h>  
 #include<stdlib.h>  
 int yyerror(const char* s), yylex();
%}  
%token num alpha LT GT EQ LE GE NE AND OR INC DEC
%token CLASS FUNCTION WHILE FOR// syntax definition
%token INT STRING LIST VOID //type definition
%token RANGE IN //for token
%left '+''-'  
%left '*''/'  
%right '^'  
%right '='  
%nonassoc UMINUS  
%nonassoc IF  
%nonassoc ELSE  
%left GE NE LT GT LE EQ  
%left AND OR  
%%  

S:  Statement    {printf("\n Accepted\n");exit(0);}  
    ;

Statement: _IF
         | _CLASS
         | _FUNCTION
         | _WHILE
         | _FOR
         
        ;
        
_CLASS: CLASS _CLASSNAME '{' E '}'
        ; 

_CLASSNAME: alpha
    ;

_FUNCTION: _TYPE FUNCTION '(' _ARGUMENT ')' '{' E '}'
    ;

_ARGUMENT: _ARGUMENT ',' _TYPE alpha
          | _TYPE alpha
          ;

_TYPE: INT
    | STRING
    | LIST
    | VOID
    ;

_WHILE: WHILE '(' F ')' '{' E '}'
    ;

_FOR: FOR '(' _ARGUMENT IN num RANGE num  ')' '{' E '}'
    ;

_IF: IF'('F')''{'_IF'}'%prec IF  
 |  IF'('F')''{'_IF'}'ELSE'{'_IF'}'  
 |  E ';'
 |  E';' _IF
 ;
 
 F:C LO C  
 |C  

LO:AND  
 |OR  

 C:E RELOP E  
 |E  

 E:alpha '='E  
 |E'+'E   
 |E'-'E   
 |E'*'E   
 |E'/'E  
 |E'^'E  
 |'('E')'   
 |'-'E %prec UMINUS  
 |alpha  
 |num  
 |alpha INC  
 |alpha DEC  

RELOP:LT  
   |GT  
   |EQ  
    |LE  
    |GE  
    |NE  
   ;  
%% 
  

int main()  
{   
	yyparse();  
	return 0;  
}  

int yyerror(const char *s)  
{  
	printf("\nError");  
} 
