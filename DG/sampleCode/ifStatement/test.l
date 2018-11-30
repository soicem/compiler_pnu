%{  
    #include "y.tab.h"
    #include "stdlib.h"
%}

%%
[ \t]   ;  
"if"    {return IF;}  
"else"  {return ELSE;}  
"class" {return CLASS;}
"func"  {return FUNCTION;}
"while" {return WHILE;}
"for"   {return FOR;}

"void"  {return VOID;}
"int"   {return INT;}
"string" {return STRING;}
"list"  {return LIST;}

"&&"    {return AND;}  
"||"    {return OR;}  
"<="    {return LE;}  
">="    {return GE;}  
">" {return GT;}  
"<" {return LT;}  
"!="    {return NE;}  
"++"    {return INC;}  
"--"    {return DEC;}  
"=="    {return EQ;}

".."    {return RANGE;}
"in"    {return IN;}

[0-9]+  {return num;}  
[a-zA-Z]+   {return alpha;}  
[\n]    ;   
.   {return yytext[0];}  
%%

int yywrap(){
    return 1;
}