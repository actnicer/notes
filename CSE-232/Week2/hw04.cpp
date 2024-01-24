// program takes 3 ints from user and tells what the smallest diff between the three is
// ex. 1 10 100 output will be "smallest diff of those three is 9" because
// 10-1 = 9 vs 100-10 = 90

#include <iostream>
#include <cmath>

int main() {
  int num1, num2, num3;

  while (std::cin >> num1 >> num2 >> num3) {

    int diff1 = abs(num1 - num2);
    int diff2 = abs(num2 - num3);
    int diff3 = abs(num1 - num3);

    if (diff1 < diff2 && diff1 < diff3) {
      std::cout << "The smallest diff of " << num1 << ", " << num2 <<
                ", and " << num3 << " is " << diff1 << "." << std::endl;
    }
    if (diff2 < diff3 && diff2 < diff1) {
      std::cout << "The smallest diff of " << num1 << ", " << num2 <<
                ", and " << num3 << " is " << diff2 << "." << std::endl;
    }
    if (diff3 < diff2 && diff3 < diff1) {
      std::cout << "The smallest diff of " << num1 << ", " << num2 <<
                ", and " << num3 << " is " << diff3 << "." << std::endl;
    }
  }
}