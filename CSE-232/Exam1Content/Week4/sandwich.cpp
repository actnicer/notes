#include <iostream>
#include <string>

// function that returns a ptr char that tells where the 
// letter in the line is preceded and followed by two of 
// the same character
char * Sandwich(std::string & line, char * bread_ptr) {

// WRITE YOUR CODE HERE
  for (int sandwich_index_start = 0; 
        sandwich_index_start < static_cast<int>(line.size()) - 2; 
        ++sandwich_index_start) {
      bool first_bread_match = *bread_ptr == line[sandwich_index_start];
      bool last_bread_match = *bread_ptr == line[sandwich_index_start + 2];
      if (!first_bread_match || !last_bread_match) {
        continue;
      }
      return &line[sandwich_index_start + 1];
  }
  // if no sandwitch, return nullptr
  return nullptr;
}

int main() {
	std::string line = "Char is a character";
	char bread = 'a';
	char * filling_ptr = Sandwich(line, &bread);
	std::cout << *filling_ptr << std::endl; // Should be r
}