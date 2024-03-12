#include <iostream>

// Function that takes a pointer as a parameter
void modifyValue(int* ptr) {
    *ptr = 123;
}

int main() {
    int number = 42;

    // Pass the address of 'number' to the function
    modifyValue(&number);

    std::cout << "Modified Value: " << number << std::endl;
    // output: 123

    return 0;
}