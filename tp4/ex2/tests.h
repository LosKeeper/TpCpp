#ifndef TESTS_H
#define TESTS_H

#include "baseclass.h"

//-------------------------------------------------------------------
// Tests
//-------------------------------------------------------------------
void testTask1();
void testTask2();

inline void foo(std::unique_ptr<BaseClass> p) { p->print(); }

#endif // TESTS_H