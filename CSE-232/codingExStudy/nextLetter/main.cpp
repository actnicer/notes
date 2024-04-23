#include <iostream>

int main() {
    char let;
    std::cout << "type a letter: " << '\n';
    std::cin >> let;
    char result = let + 1;
    std::cout << "Heres ur letter advanced by one: " << result << '\n';
}