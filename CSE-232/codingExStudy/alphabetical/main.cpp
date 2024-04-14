#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <sstream>

int main() {
  std::string line;
  while (std::getline(std::cin, line)) {
    std::istringstream iss(line);
    std::vector<std::string> words, checker;
    std::copy(std::istream_iterator<std::string>(iss), 
      std::istream_iterator<std::string>(), std::back_inserter(words));
    checker = words;
    std::sort(words.begin(), words.end(), 
              [](std::string str1, std::string str2){
                std::transform(str1.begin(), str1.end(), str1.begin(),
                  [](unsigned char c){ return std::tolower(c); });
                std::transform(str2.begin(), str2.end(), str2.begin(),
                  [](unsigned char c){ return std::tolower(c); });
                if (str1 >= str2) {return false;}
                return true;
              });
    if (words == checker){
      std::copy(words.begin(), words.end(), 
        std::ostream_iterator<std::string>(std::cout, " "));
      std::cout << std::endl;
    }
  }
  return 0;
}