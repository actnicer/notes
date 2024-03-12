#include <iostream>

// Function that takes a reference as a parameter
void modifyValue(int& ref) {
    ref = 123;
}

int main() {
    int number = 42;

    // Pass 'number' by reference to the function
    modifyValue(number);

    std::cout << "Modified Value: " << number << std::endl;
    // output: 123

    return 0;
}