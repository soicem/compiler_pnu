#include "exception.h"
#include "symbolTable.h"

NODE SymbolTable::operator[](const string& ident) const {
   // ensure variable is defined 
   if (symTable.count(ident) == 0) {
      throw UnboundIdentifier();
   }
   // return value
   return symTable.find(ident)->second;
}

NODE& SymbolTable::operator[](const string& ident) {
   // return reference to entry in symTable
   return symTable[ident];
}

