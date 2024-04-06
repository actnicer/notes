#include <iostream>
#include "header.hpp"

int main() {
	int size = 7;
	double source[] = {3, 1, 2, 3, 67, -4, 13};
	double destination[size] = {};
	CopyStockPrices(source, destination);
	for (int i = 0; i < size; ++i) {
		std::cout << destination[i] << std::endl;
	}
	return 0;
}

// Copy Stock Price Part 2
// Another common technique to avoid having to pass a separate argument 
// for the array’s size is to make the first element of the array hold 
// its size. Of course this only works for numeric arrays, but arrays of 
// numbers are the most common kind.
// Write the “CopyStockPrices” like before, but the first element contains 
// the number of prices in the array, only copy those. These files 
// should be in the folder named "CopyStockPrices_2".