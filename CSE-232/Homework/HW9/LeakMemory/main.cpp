#include <iostream>
#include "header.hpp"
int main() {
	int * array = new int[5];
	array[0] = 1;
	array[0] = 1;
	array[0] = 1;
	array[0] = 2;
	array[0] = 4;
	int result = SumOf5(array);
	std::cout << result << std::endl;
}


// Leak Memory
// Write a function named "SumOf5", that doesn’t leak memory. 
// This function takes a dynamically allocated array of 5 ints 
// and returns the sum of the elements. I’ve already written a 
// function that calculates the sum corrects, but it is currently leaking memory, help me fix it.
// The header and implementation files should be in the folder named "LeakMemory".