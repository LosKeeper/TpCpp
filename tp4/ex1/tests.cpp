#include "tests.h"
#include "functorgreaterpredicate.h"
#include "functorlesserthansum.h"
#include "printwithpredicate.h"

#include <iostream>
#include <vector>

void testTask1() {
    std::cout << "========== Exercice 1 Task 1 ==========" << std::endl;
    std::vector vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int threshold = 4;
    printWithPredicate(vec,
                       [threshold](int value) { return value > threshold; });
    int sum = 0;
    std::for_each(vec.begin(), vec.end(), [&sum, threshold](int value) {
        if (value < threshold) {
            sum += value;
        }
    });
    std::cout << "Sum: " << sum << std::endl;
}

void testTask2() {
    std::cout << "========== Exercice 1 Task 2 ==========" << std::endl;
    int x = 0;
    int y = 0;
    auto printIncrementXyMutable = [x, y]() mutable {
        x++;
        y++;
        std::cout << "x: " << x << ", y: " << y << std::endl;
    };
    printIncrementXyMutable();
    std::cout << "x: " << x << ", y: " << y << std::endl;

    auto incrementXY = [&x, &y]() {
        x++;
        y++;
        std::cout << "x: " << x << ", y: " << y << std::endl;
    };
    incrementXY();
    std::cout << "x: " << x << ", y: " << y << std::endl;
}

void testTask3() {
    std::cout << "========== Exercice 1 Task 3 ==========" << std::endl;
    std::vector vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int threshold = 7;
    int sum = 0;
    FonctorGreaterThanPredicate greaterThanSevenPredicate(threshold);
    FonctorLesserThanSum lesserThanSevenSum(threshold, sum);
    printWithPredicate(vec, greaterThanSevenPredicate);
    std::for_each(vec.begin(), vec.end(), lesserThanSevenSum);
    std::cout << "Sum: " << sum << std::endl;
}

void testTask4() {
    std::cout << "========== Exercice 1 Task 4 ==========" << std::endl;
    auto larger_than = [](auto x) { return [x](auto y) { return y > x; }; };
    int x = 5;
    int y = 10;
    std::cout << "x: " << x << ", y: " << y << std::endl;
    std::cout << "y > x: " << larger_than(x)(y) << std::endl;
    std::cout << "x > y: " << larger_than(y)(x) << std::endl;
    auto larger_than_seven = larger_than(7);
    auto larger_than_ten = larger_than(10);
    std::cout << larger_than_seven(3) << std::endl;  // should return 0
    std::cout << larger_than_seven(13) << std::endl; // should return 1
    std::cout << larger_than_ten(3) << std::endl;    // should return 0
    std::cout << larger_than_ten(13) << std::endl;   // should return 1
}