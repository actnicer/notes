#include <iostream>

int main() {
    int number = 42;

    // Pointer declaration and assignment
    int* ptr = &number;

    // Accessing value using pointer
    std::cout << "Value: " << *ptr << std::endl;
    // output: 42

    // Modifying value using pointer
    *ptr = 99;
    std::cout << "Modified Value: " << number << std::endl;
    // output: 99

    return 0;
}