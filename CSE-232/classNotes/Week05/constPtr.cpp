#include <iostream>

int main() {
    int number = 42;
    
    // Const pointer to an integer
    const int* ptr = &number;

    // Cannot modify the value through a const pointer
    // *ptr = 99;  // Error

    return 0;
}