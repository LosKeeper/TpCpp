#include "printwithpredicate.h" // For IDE auto-completion
#include <iostream>

template <typename ContainerT, typename PredicateT>
void printWithPredicate(const ContainerT &container, PredicateT predicateFunc) {
    for (const auto &element : container) {
        if (predicateFunc(element)) {
            std::cout << element << std::endl;
        }
    }
}
