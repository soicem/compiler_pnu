#ifndef NODE_H
#define NODE_H

#include <iosfwd>
#include <string>

using std::ostream;
using std::string;

typedef enum Type {
   INT,
   FLOAT,
   STR,
} Type;

typedef union Value {

   Value(int    _i) : i(_i) { }
   Value(double _f) : f(_f) { }
   Value(string* _s) : s(_s) { }

    int    i;
    double f;
    string* s;

} Value;

class NODE {
public:
   NODE() : type(INT), value(0) { }
   NODE(const int    val) :type(INT), value(val) { }
   NODE(const double val) :type(FLOAT), value(val) { }
   NODE(string* val) :type(STR), value(val) { }

   friend ostream& operator<< (ostream&,      const NODE&);
   friend bool     operator== (const NODE&, const NODE&);
   friend bool     operator!= (const NODE&, const NODE&);
   friend bool     operator<  (const NODE&, const NODE&);
   friend bool     operator>  (const NODE&, const NODE&);
   friend bool     operator<= (const NODE&, const NODE&);
   friend bool     operator>= (const NODE&, const NODE&);

   NODE& operator=  (const NODE&);
   NODE& operator+= (const NODE&);
   NODE& operator-= (const NODE&);
   NODE& operator*= (const NODE&);
   NODE& operator/= (const NODE&);
   NODE& operator%= (const NODE&);
   NODE& operator^= (const NODE&);

   NODE  operator+  (const NODE&) const;
   NODE  operator-  (const NODE&) const;
   NODE  operator*  (const NODE&) const;
   NODE  operator/  (const NODE&) const;
   NODE  operator%  (const NODE&) const;
   NODE  operator^  (const NODE&) const;
   NODE  operator-  () const;

private:
   Type  type;
   Value value;
};

#endif
