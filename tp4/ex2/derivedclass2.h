#ifndef DERIVED_CLASS_2_H
#define DERIVED_CLASS_2_H

#include "baseclass.h"

class DerivedClass2 : public BaseClass {
  public:
    void print() { std::cout << "DerivedClass2" << std::endl; }
    ~DerivedClass2() { std::cout << "DerivedClass2 destructor" << std::endl; }
};

#endif // DERIVED_CLASS_2_H