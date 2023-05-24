#include "test_map.h"

#include <iostream>

using pair = std::pair<std::string, float>;

void testMap() {
    // Students : implements exercice on maps here

    // Construct a map with pairs and integer as key
    std::map<int, pair> m1;

    // Insert pairs
    m1.insert(std::make_pair(7, std::make_pair("One", 1.0f)));
    m1.insert(std::make_pair(5, std::make_pair("Two", 2.0f)));
    m1.insert(std::make_pair(5, std::make_pair("Five", 5.0f)));

    // Print the content of the map
    std::cout << "m1 content: " << std::endl;
    for (auto &p : m1) {
        std::cout << p.first << " " << p.second.first << " " << p.second.second
                  << std::endl;
    }
    std::cout << std::endl;

    // Insert using operator[]
    m1[3] = std::make_pair("Three", 1.0f);
    m1[2] = std::make_pair("Seven", 7.0f);
    m1[2] = std::make_pair("Nine", 9.0f);

    // Print the content of the map
    std::cout << "m1 content: " << std::endl;
    for (auto &p : m1) {
        std::cout << p.first << " " << p.second.first << " " << p.second.second
                  << std::endl;
    }
    std::cout << std::endl;
}

void testMultimap() {
    // Students : implements exercice on mutlimaps here

    // Construct a multimap with pairs and integer as key
    std::multimap<int, pair> m1;

    // Insert pairs
    m1.insert(std::make_pair(7, std::make_pair("One", 1.0f)));
    m1.insert(std::make_pair(5, std::make_pair("Two", 2.0f)));
    m1.insert(std::make_pair(5, std::make_pair("Five", 5.0f)));

    // Print the content of the map
    std::cout << "m1 content: " << std::endl;
    for (auto &p : m1) {
        std::cout << p.first << " " << p.second.first << " " << p.second.second
                  << std::endl;
    }
    std::cout << std::endl;
}