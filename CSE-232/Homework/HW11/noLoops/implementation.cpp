#include "header.hpp"

#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <iterator>
#include <sstream>

std::string OnlyUppercase(std::string word) { // Intentional Copy
  std::string::iterator new_end = std::remove_if(word.begin(), word.end(), 
    [](char c){return !std::isupper(c);});
  word.erase(new_end, word.end());
  return word;
}

void SortByUppercase(std::vector<std::string> & words) {
    std::stable_sort(words.begin(), words.end(), 
    [](std::string const & left, std::string const & right) {
      return OnlyUppercase(left) < OnlyUppercase(right);
    });
}

std::string DoubleToPercentString(std::vector<double> const & numbers) {
  std::vector<int> percents;
  std::transform(numbers.cbegin(), numbers.cend(), std::back_inserter(percents),
            [](double d) { return static_cast<int>(d * 100); });
  std::ostringstream oss;
  copy(percents.cbegin(), percents.cend(), std::ostream_iterator<int>(oss, "% "));
  return oss.str();
} 

int main() {
  std::vector<double> const doubles = {1, 2, 100, 200, 12.3456, 4787, 0.123};
  std::cout << DoubleToPercentString(doubles) << std::endl;
}

// No Loops
// In the directory NoLoops, you need to write the implementation.cpp 
// and header.hpp files for the following functions. Please add a main 
// function to your implementation.cpp file and use a debugger if you encounter runtime bugs.
// // None of your code for this problem can use the for or while keywords. 
// You also aren’t allowed to use the std::for_each algorithm. 
// This constraint is to motivate you to learn and use the algorithms 
// in <algorithm> and <numeric>. Please be sure that any comments also 
// don’t have those words. If such a word must appear in your code 
// (for example in a citation or comment), insert an interrupting space. 
// Example https://stackoverflow.com/questions/11738939/never-seen-before-c-for-loop 
// should be changed to https://stackoverflow.com/questions/11738939/never-seen-before-c-fo r-loop .
// // The submit button is pretty slow on these test cases. 
// Make sure you use the terminal and local testing instead of relying on submission to check your code.
// Sort By Uppercase
// You need to write a void function named SortByUppercase 
// that takes a vector (of strings) and sorts them according to 
// only the uppercase letters in them. Be sure to preserve the 
// original order of the vector for words that have the same 
// uppercase letters in them (look into stable sorts).
// Example:

// std::vector<std::string> words = {"wolf", "BanAna", "caRRot", "AprIcots", "BEets", "chiCkPeas", "orAngEs", "apple", "CAT", "dOG"};
// std::vector<std::string> expected = {"wolf", "apple", "orAngEs", "AprIcots", "BanAna", "BEets", "CAT", "chiCkPeas", "dOG", "caRRot"};
// SortByUppercase(words);
// CHECK(words == expected);
// // Note that "wolf" comes before "apple" 
// // because neither has any uppercase letters (so the original order is preserved)
// // Next comes "orAngEs" because the "AE" comes before the "AI" in "AprIcots".

// Double To Percent
// Write a function named DoubleToPercentString that 
// takes a vector of doubles. The function should return a 
// string of all the doubles converted to percentages. For example 
// the double 0.5993 should be converted to "59%". Note that the
//  percentages are truncated, not rounded.

// std::vector<double> const doubles = {1, 2, 100, 200, 12.3456, 4787, 0.123};
// CHECK(DoubleToPercentString(doubles) == "100% 200% 10000% 20000% 1234% 478700% 12% ");
