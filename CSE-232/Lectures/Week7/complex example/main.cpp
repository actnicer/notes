#include <iostream>
#include "complex.h"

int main() {
    complex a {3, 4};
    complex b {1, 2};
    std::cout << (a < b) << std::endl;
    // output 0 or 1 if true or false
}
