#ifndef BASE_CLASS_H
#define BASE_CLASS_H

#include <iostream>
#include <memory>

class BaseClass {
  public:
    virtual void print() = 0;
    virtual ~BaseClass() { std::cout << "BaseClass destructor" << std::endl; }
};

#endif // BASE_CLASS_H