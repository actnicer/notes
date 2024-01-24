// WRITE YOUR CODE HERE

#include <iostream>
#include <string>

// found str to double conversion https://www.geeksforgeeks.org/cpp-program-for-string-to-double-conversion/
// same basic function layout as given solution for class
double convert_m (const std::string & s) {
    double n = s.size();

    // check if input is in meters and return as is if so
    if (s[n-2] >= '0' && s[n-2] <= '9') {
        return std::stod(s.substr(0, n-1));
    }
    // switch expression to convert other unit types 
    switch (s[n-2]) {
        case 'm':
            return std::stod(s.substr(0, n-1)) * 0.001;
        case 'c':
            return std::stod(s.substr(0, n-1)) * 0.01;
        case 'k':
            return std::stod(s.substr(0, n-1)) * 1000;
    }
    // handle invalid input
    return -1;
}

int main() {
    // initial declarations
    std::string meas1, meas2;

    // read Tour and followed Professor Nahums lecture
    // on how cin handles input within while loops
    while (std::cin >> meas1) {
        std::cin >> meas2;

        // pass measures into function to convert to same measure (meters)
        double conv_meas1 = convert_m(meas1);
        double conv_meas2 = convert_m(meas2);

        // compare converted measures
        if (conv_meas1 == conv_meas2) {
            std::cout << meas1 << " is the same as " << meas2 << std::endl;
        }
        if (conv_meas1 > conv_meas2) {
            std::cout << meas1 << " is larger than " << meas2 << std::endl;
        }
        if (conv_meas1 < conv_meas2) {
            std::cout << meas1 << " is smaller than " << meas2 << std::endl;
        }
    }

    return 0;
}