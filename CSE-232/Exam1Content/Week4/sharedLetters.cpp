#include <iostream>
#include <string>

int NumberOfMatches(char a, char b, char c) {
  int matches = 0;
  if (a != '\0' && b != '\0' && a == b) {
    ++matches;
  }
  if (a != '\0' && c != '\0' && a == c) {
    ++matches;
  }
  if (b != '\0' && c != '\0' && b == c) {
    ++ matches;
  }
  return matches;
}

// function takes in three strings by reference, copy and pointer
// function compares letters in strings by positiion and returns a str that 
// shows how many letters are shared at the positions ex: "1,3,0,3,1,3,3,0,0"
std::string SharedLetters(std::string const & a, std::string const b, std::string const * const ptr_c) {
  std::string const c = *ptr_c;
  std::string result;
  for (int i = 0; ; ++i) {
    std::string::size_type i_unsigned = static_cast<std::string::size_type>(i);
    if (i_unsigned >= a.size() && i_unsigned >= b.size() && i_unsigned >= c.size()) {
      break;
    }
    char char_a = '\0';
    char char_b = '\0';
    char char_c = '\0';
    if (i_unsigned < a.size()) {
      char_a = a.at(i_unsigned);
    }
    if (i_unsigned < b.size()) {
      char_b = b.at(i_unsigned);
    }
    if (i_unsigned < c.size()) {
      char_c = c.at(i_unsigned);
    }
    int matches = NumberOfMatches(char_a, char_b, char_c);
    result += std::to_string(matches) + ",";
  }
  return result;
}

int main() {
  std::string word1, word2, word3;

  std::cin >> word1 >> word2 >> word3;
  std::cout << SharedLetters(word1, word2, &word3) << '\n';
}