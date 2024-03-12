#include <iostream>
#include <string>
#include <cmath>

// function triples the input
int Triple(int num) {
  return num * 3;
}

// function finds the closest multiple of 13 to input
int Closest_Multiple_Of_13(int num) {
  int mult = num / 13;
  int checker = mult * 13;
  if (std::abs(num - checker) > 6) {
    if (checker < 0) {
      return checker - 13;
    } else {
      return checker + 13;
    }
  }
  return checker;
}

int main() {
  int user_input;
  while(std::cin >> user_input) {
    std::cout << Triple(user_input) << std::endl;
  }
}