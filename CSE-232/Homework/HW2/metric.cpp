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

// Write a program in Metric/main.cpp that reads pairs of metric distances (mm, cm, m, or km) 
// from the standard input stream until there are no more values. For each pair, print if the 
// first distance is larger than the second.
// Example input:

// 10mm 14mm
// 14mm 10mm
// 12mm 12mm
// 1cm 10mm
// 12cm 99mm
// 12cm 200mm
// 1km 5677m
// 100000cm 1000m 

// Expected output:

// 10mm is smaller than 14mm
// 14mm is larger than 10mm
// 12mm is the same as 12mm
// 1cm is the same as 10mm
// 12cm is larger than 99mm
// 12cm is smaller than 200mm
// 1km is smaller than 5677m
// 100000cm is the same as 1000m
