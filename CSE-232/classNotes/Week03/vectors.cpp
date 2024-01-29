#include <iostream>
#include <vector>

// using std::vector; can use this to auto-prefix std::


// write a function to get total
// this is a function declaration and definition
// must be declared before the function is called
int getTotal(std::vector<int> numbers) {
	int total{0};

	// collect total with range based loop 
	for (int year : numbers) {
		total += year;
	}
	return total;
}

int main() {
	std::cout << "START" << std::endl;
	std::vector<int> years;

	years.push_back(1885);
	years.push_back(1975);
	years.push_back(1997);

	// display the length of the vector
	std::cout << "Length " << years.size() << std::endl;
	// display the position at a specific index
	// std::cout << "Pos 1 " << years.at(0) << std:endl;

	// one way to loop in c++, infinite
	// need to static cast years.size() type to ensure its int form
	for (int i = 0; i < static_cast<int>(years.size()); i++) {
		std::cout << "pos at " << i << " is " << years.at(i) << std::endl;
	}

	// range based loop
	// prints years in a row with common between
	for (int year : years) {
		std::cout << "Year " << year << ", ";
	}
	std::cout << std::endl;

	// call function for totals
	int total = getTotal(years);
	std::cout << "Total years: " << total << std::endl;
}

