#include "task1.h" // For IDE autocompletion
#include <iostream>

// Write here the impplementation of your templated functions

template <typename T> T add(T a, T b) { return a + b; }

template <typename T1, typename T2> void incrementTwoVars(T1 &a, T2 &b) {
    a++;
    b++;
}

void testTask1() {
    int a = 1;
    int b = 2;

    double c = 3.0;
    double d = 4.0;

    std::string e = "Hello";
    std::string f = "World";

    std::cout << "a + b = " << add(a, b) << std::endl;
    std::cout << "c + d = " << add(c, d) << std::endl;
    std::cout << "e + f = " << add(e, f) << std::endl;
}