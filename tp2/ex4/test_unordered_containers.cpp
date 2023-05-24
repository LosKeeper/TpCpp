#include "test_unordered_containers.h"

#include <iostream>
#include <string>
#include <unordered_set>

// Students : implements aditionnal functions here
void insertInSetAndCheck(std::unordered_set<std::string> &set,
                         const std::string &value) {
    auto it = set.find(value);
    if (it == set.end()) {
        set.insert(value);
        std::cout << "Inserted: " << value << std::endl;
    } else {
        std::cout << "Already in set: " << value << std::endl;
    }
}

void testUnorderedSet() {
    // Students : implements exercice on sets here

    std::unordered_set<std::string> s1;

    // Insert elements
    s1.insert("Hello");
    s1.insert("world");
    s1.insert("!");
    s1.insert("Hello");
    s1.insert("!!");

    // Print the content of the set
    std::cout << "s1 content: " << std::endl;
    for (auto &s : s1) {
        std::cout << s << std::endl;
    }
    std::cout << std::endl;

    // Insert using a function
    insertInSetAndCheck(s1, "My");
    insertInSetAndCheck(s1, "name");
    insertInSetAndCheck(s1, "is");
    insertInSetAndCheck(s1, "Bryan");
    insertInSetAndCheck(s1, "Bryan");

    // Print the content of the set
    std::cout << "s1 content: " << std::endl;
    for (auto &s : s1) {
        std::cout << s << std::endl;
    }
    std::cout << std::endl;
}

void testUnorderedSetHashMap() {
    // Students : implements exercice on unordered sets here
}