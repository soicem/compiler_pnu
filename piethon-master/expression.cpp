#include "symbolTable.h"
#include "function.h"
#include "functionTable.h"
#include "expression.h"

NODE Constant::eval(const SymbolTable &st, const FunctionTable &ft) const {
   return content;
}

NODE Identifier::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return st[name];
}

Negation::~Negation() {
   delete op;
}

NODE Negation::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return -(op->eval(st, ft));
}

FunctionCallExp::~FunctionCallExp() {
   delete argList;
}

NODE FunctionCallExp::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return ft[name]->apply(st, ft, argList);
}

BinaryExpression::~BinaryExpression() {
   delete op1;
   delete op2;
}

NODE Addition::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return op1->eval(st, ft) + op2->eval(st, ft);
}

NODE Subtraction::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return op1->eval(st, ft) - op2->eval(st, ft);
}

NODE Multiplication::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return op1->eval(st, ft) * op2->eval(st, ft);
}

NODE Division::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return op1->eval(st, ft) / op2->eval(st, ft);
}

NODE Modulus::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return op1->eval(st, ft) % op2->eval(st, ft);
}

NODE Exponent::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return op1->eval(st, ft) ^ op2->eval(st, ft);
}

NODE LessThan::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return op1->eval(st, ft) < op2->eval(st, ft);
}

NODE GreaterThan::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return op1->eval(st, ft) > op2->eval(st, ft);
}

NODE LessThanOrEqualTo::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return op1->eval(st, ft) <= op2->eval(st, ft);
}

NODE GreaterThanOrEqualTo::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return op1->eval(st, ft) >= op2->eval(st, ft);
}

NODE Equals::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return op1->eval(st, ft) == op2->eval(st, ft);
}

NODE NotEquals::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return op1->eval(st, ft) != op2->eval(st, ft);
}

Factorial::~Factorial() {
   delete op;
}

NODE Factorial::eval(const SymbolTable& st, const FunctionTable& ft) const {
   return ~(op->eval(st, ft));
}




void ExpressionList::add(Expression* exp) {
   expList.push_back(exp);
}

unsigned int ExpressionList::size() const {
   return expList.size();
}

list<Expression*>::const_iterator ExpressionList::begin() const {
   return expList.begin();
}

list<Expression*>::const_iterator ExpressionList::end() const {
   return expList.end();
}

ExpressionList::~ExpressionList() {
   for (list<Expression*>::iterator it = expList.begin(); it != expList.end(); ++it) {
      delete *it;
   }
}
