#include <iostream>
#include <string>

int main() {
  int counter{0};
  // bool flag = false;
  std::string words;
  while(getline(std::cin, words)) {
    for (auto c : words) {
      if (c == ' ') {
        ++counter;
      }
    }
    if (counter != 0) 
      counter += 1;
    std::cout << counter << '\n';
    counter = 0;
  }
}