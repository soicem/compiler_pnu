#include "exception.h"
#include "symbolTable.h"

NODE SymbolTable::operator[](const string& ident) const {
   // ensure variable is defined 
   // return value
   return symTable.find(ident)->second;
}

NODE& SymbolTable::operator[](const string& ident) {
   // return reference to entry in symTable
   return symTable[ident];
}
void SymbolTable::setKeyWithV(string s, int v){
   symTable[s] = v;
}
int SymbolTable::getCountKey(string s){
   return symTable.count(s);
}
