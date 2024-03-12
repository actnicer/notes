#include <iostream>

// Function that takes a const reference as a parameter
void displayValue(const int& ref) {
    std::cout << "Value: " << ref << std::endl;
}

int main() {
    int number = 42;

    // Pass 'number' by const reference to the function
    displayValue(number);
    // output: 42

    return 0;
}