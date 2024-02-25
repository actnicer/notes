#include <iostream>

int main() {
    int number = 42;

    // Reference declaration and assignment
    int& ref = number;

    // Accessing value using reference
    std::cout << "Value: " << ref << std::endl;
    // output: 42

    // Modifying value using reference
    ref = 99;
    std::cout << "Modified Value: " << number << std::endl;
    // output: 99

    return 0;
}