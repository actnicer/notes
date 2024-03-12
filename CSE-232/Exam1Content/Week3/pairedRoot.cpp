// function takes a number and returns the paired additive root
// Example: 9857843 is input, function does 9+85+78+43 = 215
// program will run again because the sum must be below 3 digits

#include <iostream>

int pairedRoot (int num) {
	int sum{0};
	while (num != 0) {
		int pair = (num % 100);
		sum += pair;
		num /= 100;
	}
	return sum;
}

int main() {
	int value{0};
	while (std::cin >> value) {
		//int root{0};
// WRITE YOUR CODE HERE
		while (value > 99) {
			value = pairedRoot(value);
		}
		std::cout << value << std::endl;
	}
}