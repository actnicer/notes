#include "complex.h"
#include <cmath>

using std::pow, std::sqrt;

// returns dist of complex object from the origin, returns as a double
// takes in a constant reference to a complex object, dont need to change the object
double AbsoluteValue(complex const & c) {
    // square the real and imaginary components 
    // sum them
    // return the square root of the sum
    return sqrt(pow(c.real(), 2) + pow(c.imag(), 2));
}

// want to compare abs val of complex nums
// specify scope, show that its  a member of the complex class by adding complex::
bool complex::operator<(complex const & b) {

    // 'this' is a pointer to the member functions object, must be dereferenced to get actual object
    double abs_a{AbsoluteValue(*this)};
    // as a seperate function, can just pass the other value
    // double abs_a{AbsoluteValue(a)};
    double abs_b{AbsoluteValue(b)};
    return abs_a < abs_b;

}