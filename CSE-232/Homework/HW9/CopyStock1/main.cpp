#include <iostream>
#include "header.hpp"

int main() {
	int size = 7;
	double source[] = {10.5, 7, 14, 0, 67, -4, 13};
	double destination[size] = {};
	CopyStockPrices(source, destination);
	for (int i = 0; i < size; ++i) {
		std::cout << destination[i] << std::endl;
	}
	return 0;
}

// One trick in C to work with arrays (and to not have 
// to pass a size in a second argument with the array) is 
// to have the array somehow encode where it ends inside 
// the array. In C-style strings 
// https://www.learncpp.com/cpp-tutorial/66-c-style-strings/, 
// the null terminator character (‘\0’) denotes the end of the 
// string (though the character array can be longer).
// Let’s write a function that uses this approach. 
// I have two arrays of doubles that will represent 
// stock prices. Instead of specifying the size of the 
// array, the first negative stock price indicates that 
// the rest of the array doesn’t contain actual data. 
// Write a copy function named “CopyStockPrices” 
// (in the folder CopyStockPrices_1) that takes two arguments: 
// a pointer to the beginning of the source array and a pointer 
// to the beginning of the destination array. It should only 
// copy over the valid data (and the terminating value). You 
// can assume the destination is large enough to hold all 
// values that need to be copied.