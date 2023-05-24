#ifndef CUSTOM_PRINT_H
#define CUSTOM_PRINT_H

//------------------------------------------------------------------
// Two version of the template function print
//------------------------------------------------------------------

#include "customprint.hpp"

template <typename T>
std::enable_if_t<std::is_integral_v<T> || std::is_floating_point_v<T>, void>
customPrint(T t);

#endif // CUSTOM_PRINT_H