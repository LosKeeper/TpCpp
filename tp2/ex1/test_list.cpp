#include <iostream>
#include <list>

void testList() {
    // Implement here the tests from exercice 1 on lists
    std::list<int> l;

    // Insertion
    l.push_back(0);
    l.push_back(1);
    l.push_back(2);

    // Print
    std::cout << "Print using iterator" << std::endl;
    for (std::list<int>::const_iterator it = l.cbegin(); it != l.cend(); ++it) {
        std::cout << *it << std::endl;
    }
    std::cout << std::endl;

    // Print using auto
    std::cout << "Print using auto" << std::endl;
    for (auto it = l.begin(); it != l.end(); ++it) {
        (*it)++;
        std::cout << *it << std::endl;
    }
    std::cout << std::endl;

    // Push front
    l.push_front(4);
    l.push_front(5);
    l.push_front(6);

    // Print using range-based for
    std::cout << "Print using range-based for" << std::endl;
    for (auto &i : l) {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

    // Insert elements
    std::list<int>::const_iterator it = l.cbegin();
    while (*it != 1) {
        ++it;
    }
    ++it;
    l.insert(it, 10);
    l.insert(it, 10);
    l.insert(it, 10);

    for (std::list<int>::const_reverse_iterator it = l.crbegin();
         it != l.crend(); ++it) {
        std::cout << *it << std::endl;
    }
}