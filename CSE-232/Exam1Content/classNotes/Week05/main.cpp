#include <iostream>
#include <string>
#include "WordList.h"

// As inputs from std::cin, take in two words.  Then take in a series of comma-separated word_lists.
// For each word list provided, output which of the two words comes first, or "N/A" if neither is in
// the list.  Then output (on the same line) a count of how many times each word appeared.
//
// Example Input:
//   Kansas
//   Virginia
//   Virginia,Wyoming,Vermont
//   NewMexico,Kansas,Alabama,Virginia,NewYork,WestVirginia,Arkansas,Virginia,Utah,Virginia
//   Alaska
//
// Example Output:
//   Virginia 0 1
//   Kansas 1 3
//   N/A 0 0
//
// Note: The second output line has Virginia listed only 3 times, ignoring "WestVirginia"


int main()
{
  std::string word1;
  std::string word2;
  std::string word_list;

  std::cin >> word1;
  std::cin >> word2;
  while (std::cin >> word_list) {
    std::cout << GetFirstInList(word_list, &word1, &word2)
              << " " << CountInList(word_list, word1)
              << " " << CountInList(word_list, word2)
              << std::endl;
  }  
}