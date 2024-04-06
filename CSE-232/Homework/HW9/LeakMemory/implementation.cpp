#include "header.hpp"

int SumOf5(int * array) {
	int sum = 0;
	for (int i = 0; i < 5; ++i) {
		sum += array[i];
	}
  // need to destroy array BEFORE return statement
  // https://cplusplus.com/reference/new/operator%20delete[]/
  delete [] array;

	return sum;
}
