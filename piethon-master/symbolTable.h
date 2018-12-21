#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

#include <map>
#include <string>
#include "Node.h"

using std::map;
using std::string;

class SymbolTable {
public:
   NODE  operator[](const string&) const;
   NODE& operator[](const string&);
   int getCountKey(string s);

private:
   map<string,NODE> symTable;
};

#endif
