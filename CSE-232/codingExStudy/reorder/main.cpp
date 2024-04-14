#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// WRITE YOUR CODE HERE
std::vector<std::string> Reorder(std::vector<std::string>& words) {
  sort(words.begin(), words.end(), [](std::string word1, std::string word2){
    auto word1_str = find(word1.begin(), word1.end(), '.');
    auto word2_str = find(word2.begin(), word2.end(), '.');
    ++word1_str;
    ++word2_str;
    if (*word1_str > *word2_str) {
      return false;
    } else if (*word1_str == *word2_str) {
      if (word1 > word2) {
        return false;
      }
      return true;
    }
    return true;
  });
  return words;
}


int main() {
	std::vector<std::string> words;
	std::string word;
	while (std::cin >> word) {
		words.push_back(word);
	}

	Reorder(words);
	for (std::string const & output_word : words) {
		std::cout << output_word << " ";
	}
	return 0;
}

// Reorder Words (Suffix)
// Write a program in main.cpp in the folder named “ReorderWords_*” 
// that reads in a series of "words", (a word for this problem is 
// a string of letters with one period separated by whitespace).
// This program should read in words from standard input and write 
// those same words to standard output. However, it should reorder 
// the words so they are sorted by the suffix (a.k.a. the file extension), 
// and where two words have the same suffix, then ordered alphabetically. 
// Be sure to separate words with a single space (and include the trailing 
// space character after the last word.)
// Example Input Stream: input.txt main.cpp header.hpp stats.r 
// main.hs extra.cpp library.hpp a.out a.exe another.hpp another.cpp left.txt
// Example Output String: another.cpp extra.cpp main.cpp a.exe 
// another.hpp header.hpp library.hpp main.hs a.out stats.r input.txt left.txt
// The main.cpp has some starter code that you are welcome to use. 
// You can also start from scratch.