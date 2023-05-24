#ifndef DERIVED_CLASS_1_H
#define DERIVED_CLASS_1_H

#include "baseclass.h"

class DerivedClass1 : public BaseClass {
  public:
    void print() { std::cout << "DerivedClass1" << std::endl; }
    ~DerivedClass1() { std::cout << "DerivedClass1 destructor" << std::endl; }
};

#endif // DERIVED_CLASS_1_H