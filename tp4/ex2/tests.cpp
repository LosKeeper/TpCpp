#include "tests.h"
#include "derivedclass1.h"
#include "derivedclass2.h"

#include <iostream>
#include <memory>

void testTask1() {
    std::cout << "========== Exercic 2 Task 1 ==========" << std::endl;
    std::unique_ptr<BaseClass> up1(new DerivedClass1);
    std::unique_ptr<BaseClass> up2(new DerivedClass2);

    // Moving a unique_ptr
    std::unique_ptr<BaseClass> up5(std::move(up1));
    up5->print();
}

void testTask2() {
    std::cout << "========== Exercic 2 Task 2.1 ==========" << std::endl;

    std::cout << "========== Exercic 2 Task 2.2 ==========" << std::endl;

    std::cout << "========== Exercic 2 Task 2.3 ==========" << std::endl;
}