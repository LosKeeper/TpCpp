#include "task2.h" // For IDE auto-completion
#include <iostream>
#include <vector>

// Write here the impplementation of your templated functions

template <typename T> T mult(int n, const T &b) {
    T result = b;
    for (int i = 1; i < n; i++) {
        result += b;
    }
    return result;
}

template <> std::string mult<std::string>(int n, const std::string &b) {
    std::string result = b;
    for (int i = 1; i < n; i++) {
        result += b;
    }
    return result;
}

template <typename T2> std::vector<T2> mult(int n, const std::vector<T2> &b) {
    std::vector<T2> result;
    for (int i = 0; i < n; i++) {
        for (auto &x : b) {
            result.push_back(x);
        }
    }
    return result;
}

void testTask2() {
    std::cout << "Testing task 2" << std::endl;

    std::cout << "mult(3, 2.5) = " << mult(3, 2.5) << std::endl;
    std::cout << "mult(3, \"Toc\") = " << mult(3, (std::string) "Toc")
              << std::endl;
    std::cout << "mult(3, std::vector{1, 2, 3}) = ";
    for (auto &x : mult(3, std::vector<int>{1, 2, 3})) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}