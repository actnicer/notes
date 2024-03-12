#include <iostream>
#include <string>
#include <iomanip>

// program takes user input, prints out character if the 
// character has a greater ASCII value than the character previous
int main() {
  
  std::string line;

  while (std::getline(std::cin, line)) {
    // initialize a char to compare new input char with
    char prev_char = '\0';

    // iterate through characters of input
    // output char if appropriate, else replace w/ '_'
    for (char current_char : line) {
      if (current_char == '\n' || prev_char == '\0') {
        std::cout << current_char;
      } else if (current_char > prev_char) {
        std::cout << current_char;
      } else {
        std::cout << '_';
      }

      // set variable for old character for comparison
      prev_char = current_char;
    }
    // generate newline after reading a line
    std::cout << '\n';
  }

  return 0;
}