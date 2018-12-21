#include <iostream>
#include <cstdlib>
#include <cmath>
#include "exception.h"
#include "Node.h"


using std::ostream;
using std::fixed;


ostream& operator<<(ostream& out, const NODE& node) {
   if (node.type == INT) {   
      return out << node.value.i;
   } else if (node.type == FLOAT) {
      return out << fixed << node.value.f;
   }else if (node.type == STR) {
      return out << *(node.value.s);
   }
    else {
      throw UnknownType();
   }
}

bool operator==(const NODE& lhs, const NODE& rhs) {
   if (lhs.type == INT && rhs.type == INT) {
      return lhs.value.i == rhs.value.i;
   } else if (lhs.type == FLOAT && rhs.type == FLOAT) {
      return lhs.value.f == rhs.value.f;
   } else if (lhs.type == INT && rhs.type == FLOAT) {
      return lhs.value.i == rhs.value.f;
   } else if (lhs.type == FLOAT && rhs.type == INT) {
      return lhs.value.f == rhs.value.i;
   } else {
      throw UnknownType();
   }
}

bool operator!=(const NODE& lhs, const NODE& rhs) {
   return !(lhs == rhs);
}

bool operator<(const NODE& lhs, const NODE& rhs) {
   if (lhs.type == INT && rhs.type == INT) {
      return lhs.value.i < rhs.value.i;
   } else if (lhs.type == FLOAT && rhs.type == FLOAT) {
      return lhs.value.f < rhs.value.f;
   } else if (lhs.type == INT && rhs.type == FLOAT) {
      return lhs.value.i < rhs.value.f;
   } else if (lhs.type == FLOAT && rhs.type == INT) {
      return lhs.value.f < rhs.value.i;
   } else {
      throw UnknownType();
   }
}

bool operator>(const NODE& lhs, const NODE& rhs) {
   if (lhs.type == INT && rhs.type == INT) {
      return lhs.value.i > rhs.value.i;
   } else if (lhs.type == FLOAT && rhs.type == FLOAT) {
      return lhs.value.f > rhs.value.f;
   } else if (lhs.type == INT && rhs.type == FLOAT) {
      return lhs.value.i > rhs.value.f;
   } else if (lhs.type == FLOAT && rhs.type == INT) {
      return lhs.value.f > rhs.value.i;
   } else {
      throw UnknownType();
   }
}

bool operator<=(const NODE& lhs, const NODE& rhs) {
   return !(lhs > rhs);
}

bool operator>=(const NODE& lhs, const NODE& rhs) {
   return !(lhs < rhs);
}

NODE& NODE::operator=(const NODE& rhs) {
   type  = rhs.type;
   value = rhs.value;
   return *this;
}

NODE& NODE::operator+=(const NODE& rhs) {
   *this = *this + rhs;
   return *this;
}

NODE& NODE::operator-=(const NODE& rhs) {
   *this = *this - rhs;
   return *this;
}

NODE& NODE::operator*=(const NODE& rhs) {
   *this = *this * rhs;
   return *this;
}

NODE& NODE::operator/=(const NODE& rhs) {
   *this = *this / rhs;
   return *this;
}

NODE& NODE::operator%=(const NODE& rhs) {
   *this = *this % rhs;
   return *this;
}

NODE& NODE::operator^=(const NODE& rhs) {
   *this = *this ^ rhs;
   return *this;
}

NODE NODE::operator+(const NODE& rhs) const {
   if (type == INT && rhs.type == INT) {
      return NODE(value.i + rhs.value.i);
   } else if (type == FLOAT && rhs.type == FLOAT) {
      return NODE(value.f + rhs.value.f);
   } else if (type == INT && rhs.type == FLOAT) {
      return NODE(value.i + rhs.value.f);
   } else if (type == FLOAT && rhs.type == INT) {
      return NODE(value.f + rhs.value.i);
   }
   else {
      throw UnknownType();
   }
}

NODE NODE::operator-(const NODE& rhs) const {
   if (type == INT && rhs.type == INT) {
      return NODE(value.i - rhs.value.i);
   } else if (type == FLOAT && rhs.type == FLOAT) {
      return NODE(value.f - rhs.value.f);
   } else if (type == INT && rhs.type == FLOAT) {
      return NODE(value.i - rhs.value.f);
   } else if (type == FLOAT && rhs.type == INT) {
      return NODE(value.f - rhs.value.i);
   } else {
      throw UnknownType();
   }
}

NODE NODE::operator*(const NODE& rhs) const {
   if (type == INT && rhs.type == INT) {
      return NODE(value.i * rhs.value.i);
   } else if (type == FLOAT && rhs.type == FLOAT) {
      return NODE(value.f * rhs.value.f);
   } else if (type == INT && rhs.type == FLOAT) {
      return NODE(value.i * rhs.value.f);
   } else if (type == FLOAT && rhs.type == INT) {
      return NODE(value.f * rhs.value.i);
   } else {
      throw UnknownType();
   }
}

NODE NODE::operator/(const NODE& rhs) const {
   if (type == INT && rhs.type == INT) {
      if (rhs.value.i == 0) {
         throw DivideByZero();
      }
      return NODE(value.i / rhs.value.i);
   } else if (type == FLOAT && rhs.type == FLOAT) {
      return NODE(value.f / rhs.value.f);
   } else if (type == INT && rhs.type == FLOAT) {
      return NODE(value.i / rhs.value.f);
   } else if (type == FLOAT && rhs.type == INT) {
      return NODE(value.f / rhs.value.i);
   } else {
      throw UnknownType();
   }
}

NODE NODE::operator%(const NODE& rhs) const {
   if (type == INT && rhs.type == INT) {
      if (rhs.value.i == 0) {
         throw ModByZero();
      }
      return NODE(value.i % rhs.value.i);
   } else {
      throw FloatingPointMod();
   }
}

NODE NODE::operator^(const NODE& rhs) const {
   if (type == INT && rhs.type == INT) {
      return NODE((int) pow(value.i, rhs.value.i));
   } else if (type == FLOAT && rhs.type == FLOAT) {
      return NODE(pow(value.f, rhs.value.f));
   } else if (type == INT && rhs.type == FLOAT) {
      return NODE(pow(value.i, rhs.value.f));
   } else if (type == FLOAT && rhs.type == INT) {
      return NODE(pow(value.f, rhs.value.i));
   } else {
      throw UnknownType();
   }
}

NODE NODE::operator-() const {
   if (type == INT) {
      return NODE(-value.i);
   } else if (type == FLOAT) {
      return NODE(-value.f);
   } else {
      throw UnknownType();
   }
}
