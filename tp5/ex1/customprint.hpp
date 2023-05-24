#include "customprint.h" // For IDE auto-completion

#include <iomanip>
#include <iostream>
#include <type_traits>

// use std::enable_if_t to enable the function only for integral types and
// floating point types
template <typename T>
std::enable_if_t<std::is_integral_v<T> || std::is_floating_point_v<T>, void>
customPrint(T t) {
    if constexpr (std::is_integral_v<T>) {
        std::cout << "int : " << t << std::endl;
    } else {
        std::cout << "float : " << t << std::endl;
    }
}
