#include "test_vector.h"

#include <algorithm>
#include <iostream>

// Students : add implementations here

void testVector() {
    // Students : implement tests on vectors here

    // Using
    using pair = std::pair<std::string, float>;
    using v_pair = std::vector<pair>;

    // Construct pairs
    pair p1("a", 1.0);
    pair p2("b", 2.0);

    // Construct using make_pair
    pair p3 = std::make_pair("c", 3.0);
    pair p4 = std::make_pair("d", 4.0);

    // Construct using auto
    auto p5 = std::make_pair("two", 2.0);
    auto p6 = std::make_pair("two", 2);

    // Print the type of all the pairs
    std::cout << "p1 type: " << typeid(p1).name() << std::endl;
    std::cout << "p2 type: " << typeid(p2).name() << std::endl;
    std::cout << "p3 type: " << typeid(p3).name() << std::endl;
    std::cout << "p4 type: " << typeid(p4).name() << std::endl;
    std::cout << "p5 type: " << typeid(p5).name() << std::endl;
    std::cout << "p6 type: " << typeid(p6).name() << std::endl;
    std::cout << std::endl;

    // Construct a vector of pairs using reserve
    v_pair v1;
    v1.reserve(8);

    // Print the size, capacity and content of the vector
    std::cout << "v1 size: " << v1.size() << std::endl;
    std::cout << "v1 capacity: " << v1.capacity() << std::endl;
    std::cout << "v1 content: " << std::endl;
    for (auto &p : v1) {
        std::cout << p.first << " " << p.second << std::endl;
    }
    std::cout << std::endl;

    // Resize
    v1.resize(2);

    // Print the size, capacity and content of the vector
    std::cout << "v1 size: " << v1.size() << std::endl;
    std::cout << "v1 capacity: " << v1.capacity() << std::endl;
    std::cout << "v1 content: " << std::endl;
    for (auto &p : v1) {
        std::cout << p.first << " " << p.second << std::endl;
    }
    std::cout << std::endl;

    // Push back
    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);
    v1.emplace_back(p4);
    v1.emplace_back(p5);
    v1.emplace_back(p6);

    // Print the content of the vector using index
    std::cout << "v1 content (index): " << std::endl;
    for (size_t i = 0; i < v1.size(); ++i) {
        std::cout << v1[i].first << " " << v1[i].second << std::endl;
    }
    std::cout << std::endl;

    // Print the content of the vector using iterator
    std::cout << "v1 content (index): " << std::endl;
    for (auto it = v1.begin(); it != v1.end(); ++it) {
        std::cout << it->first << " " << it->second << std::endl;
    }
    std::cout << std::endl;

    // Print the content of the vector using range-based for loop
    std::cout << "v1 content (range-based for loop): " << std::endl;
    for (auto &p : v1) {
        std::cout << p.first << " " << p.second << std::endl;
    }
    std::cout << std::endl;

    // Print the content of the vector using reverse iterator
    std::cout << "v1 content (reverse iterator): " << std::endl;
    for (auto it = v1.rbegin(); it != v1.rend(); ++it) {
        std::cout << it->first << " " << it->second << std::endl;
    }
    std::cout << std::endl;

    // Sort the vector using std::sort
    std::sort(v1.begin(), v1.end(), [](const pair &p1, const pair &p2) {
        return p1.second < p2.second;
    });
    // Print the content of the vector using range-based for loop
    std::cout << "v1 content (sorted): " << std::endl;
    for (auto &p : v1) {
        std::cout << p.first << " " << p.second << std::endl;
    }
    std::cout << std::endl;

    // Sort the vecror using std::sort descending
    std::sort(v1.begin(), v1.end(), [](const pair &p1, const pair &p2) {
        return p1.second > p2.second;
    });
    // Print the content of the vector using range-based for loop
    std::cout << "v1 content (sorted descending): " << std::endl;
    for (auto &p : v1) {
        std::cout << p.first << " " << p.second << std::endl;
    }
    std::cout << std::endl;

    // std::Find_if
    auto it = std::find_if(v1.begin(), v1.end(), [](const pair &p) {
        return (p.second >= 1.8 && p.second <= 2.2);
    });
    if (it != v1.end()) {
        std::cout << "Found: " << it->first << " " << it->second << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }
}