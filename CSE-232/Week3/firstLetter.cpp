#include <iostream>
#include <string>

// program takes user input and prints out the first letter
// of each word of the full input
int main() {
  std::string user_letters;
  int flag = 0;

  while (std::getline(std::cin, user_letters)) {

    // iterate through character of the user input
    for (char letter : user_letters) {
      // check if character of input is letter
      // if it is, output letter and set flag
      if (flag == 0 && isalpha(letter)) {
        std::cout << letter;
        flag = 1;
      } else if (!isalpha(letter)) {
        flag = 0;
      }
    }
  }
}