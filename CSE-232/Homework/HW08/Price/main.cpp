#include <iostream>
#include <sstream>
#include <iomanip>
#include "header.hpp"

int main() {
	std::ostringstream oss;
    Price p1(145.00);
    Price p2(56.05);
    oss << "p1 = " << p1 << std::endl;
    oss << "p2 = " << p2 << std::endl;
    oss << "p1 - p2 = " << p1 - p2 << std::endl;
    Price p3(10.00);
    p1 -= p3;
    oss << "p1 = " << p1 << std::endl;
    oss << "p3 = " << p3 << std::endl;
    std::cout << oss.str();
    return 0;
}

// Price
// You need to write a class named Price (in the folder of the same name) 
// that represents a dollar and cents value. It should support a default 
// constructor and a converting constructor for a double. It should support 
// the <<, +, +=, -, -=, and >> operators. Please see the test cases for 
// the specific behavior for each operator.