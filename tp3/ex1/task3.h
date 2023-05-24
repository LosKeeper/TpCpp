#ifndef TASK3_H
#define TASK3_H

// Write here the definition of your templated functions

template <typename T, typename... Args>
T myMin(const T &v, const Args &...args) {
    T min = v;
    for (const T &arg : {args...}) {
        if (arg < min) {
            min = arg;
        }
    }
    return min;
}
//----------------------------------------------------------------
// Do not forget to include implementations !!
//----------------------------------------------------------------
#include "task3.hpp"

#endif // TASK3_H