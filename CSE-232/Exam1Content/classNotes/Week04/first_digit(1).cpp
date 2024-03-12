#include <iostream>
#include <cctype>
#include <string>

using std::string;


// make sure to take in a reference to s, otherwise it will return
// reference to a copy which scope ends at the end of the function (undefined behavior)
char & FirstDigit(string & s) {
  // in order to return reference, make sure c is a reference
  for (char & c : s) {
    // use isdigit from cctype library
    if (std::isdigit(c)) {
      return c;
    }
  }
  return s.at(0);
}

int main() {
  string text{"My dog is 5 years old"};
  // must be reference to a character in order to change the text in the function
  char & digit = FirstDigit(text);
  std::cout << "Digit: " << digit << std::endl;
  std::cout << "Text: " << text << std::endl;
  digit = '1';
  std::cout << "Digit: " << digit << std::endl;
  std::cout << "Text: " << text << std::endl;

}