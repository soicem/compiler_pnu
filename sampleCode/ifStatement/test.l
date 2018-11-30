%{  
#include"y.tab.h"  
%}  
%%
[ \t] ;  
"if" {return IF;}  
"else" {return ELSE;}  
"&&" {return AND;}  
"||" {return OR;}  
"<=" {return LE;}  
">=" {return GE;}  
">" {return GT;}  
"<" {return LT;}  
"!=" {return NE;}  
"++" {return INC;}  
"--" {return DEC;}  
"==" {return EQ;}  
[0-9]+ {return num;}  
[a-zA-Z]+ {return alpha;}
"$"	{return END;}  
[\t];  
[\n];   
.   {return yytext[0];}  
 %%  
