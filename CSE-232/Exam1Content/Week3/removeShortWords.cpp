// program takes input from user and outputs a string of 
// all words from the input that are 5 chars or greater

#include <iostream>
#include <string>

// function to remove words < 5 chars from string
std::string removeShortWords(std::string longstr) {
  std::string result;
  std::string word;

  // iterate through letters from input string
  // add letters to word string after and check length
  // length > 5 chars, add to final str (result)
  for (char letter : longstr) {
    if (letter != ' ') {
      word += letter;
    } if (letter == ' ') {
      if (word.size() >= 5) {
        result += word + ' ';
      }
      word.clear();
    }
  }

  // check final word in user string
  if (word.size() >= 5) {
    result += word + ' ';
  }

  return result;
}


int main() {
  std::string longstr;

  // prompt for input from user
  while (std::getline(std::cin, longstr)) {
    // call function to remove words < 5 chars, print output
    std::cout << removeShortWords(longstr) << std::endl;
  }

  return 0;
}