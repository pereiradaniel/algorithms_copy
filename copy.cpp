// Algorithms - Copy
// copy_.cpp
// source: https://ict.senecacollege.ca/~oop345/pages/content/algor.html

// This program copies the first 2 elements of vector v into vector c,
// starting at the second element of vector c and displays the updated
// contents of vector c.

#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<double> v(4, 10.34);
    std::vector<double> c(4, 20.68);
    std::copy(v.begin(), v.begin() + 2, c.begin() + 1);
    for (auto e : c)
        std::cout << e << std::endl;
}