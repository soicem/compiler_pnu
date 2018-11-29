bison -dy test.y
flex test.l
gcc lex.yy.c y.tab.c -lfl
