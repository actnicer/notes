#include <iostream>
#include <string>
#include <cctype>

using std::string;

// return a reference to a character (the first digit)
char & FirstDigit(string & s) {
    for (char & c : s) {
        if (std::isdigit(c)) {
            return c;
        }
    }
    return s.at(0);
}

int main() {
    string text{"My dog is five years old"};
    // reference to a char
    char & digit = FirstDigit(text);
    std::cout << "digit:" << digit << std::endl;
    std::cout << "text" << text << std::endl;

    digit = '1'; 
    std::cout << "digit:" << digit << std::endl;
    std::cout << "text" << text << std::endl;
}