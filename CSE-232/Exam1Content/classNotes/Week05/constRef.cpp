#include <iostream>

int main() {
    int number = 42;

    // Const reference to an integer
    const int& ref = number;

    // Cannot modify the value through a const reference
    // ref = 99;  // Error

    return 0;
}