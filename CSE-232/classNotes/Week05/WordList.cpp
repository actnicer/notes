#include <string>

// Test if 'word' is a full entry in 'word_list' beginning as index 'pos'.
bool AtListPosition(const std::string& word_list, const std::string& word,
                    size_t pos) {
  size_t end_pos = pos + word.size();

  // Does it fit?
  if (end_pos > word_list.size()) return false;

  // Does it match?
  if (word_list.substr(pos, word.size()) != word) return false;

  // Does it begin a new entry?
  // Must be one of TWO legal cases: Start of list, or follows a comma.
  if (pos != 0 && word_list[pos - 1] != ',') return false;

  // Does the entry end afterward?
  // Must be one of TWO legal cases: End of list, or followed by a comma.
  if (end_pos != word_list.size() && word_list[end_pos] != ',') return false;

  return true;
}

// Inputs are:
//   word_list - a const string reference that contains a list of
//   comma-separated words. word - a const string reference that contains to
//   word to search for in the list. pos - an optional size_t containing the
//   position to start the search
//         (start at zero if no pos argument is provided)
// Return:
//   The index where 'word' was found as a full entry in word_list -or-
//   std::string::npos if word is not found
//
// Note, must match FULL word.  So "def" would be matched in "abc,def,ghijk,l"
// or in "def,456,ghi,789,jkl", but NOT in "defeated,indefinitely,redefined"
size_t FindInList(const std::string& word_list, const std::string& word,
                  size_t pos = 0) {
  while (pos != std::string::npos && !AtListPosition(word_list, word, pos)) {
    pos = word_list.find(word, pos + 1);
  }

  return pos;
}

// Takes pointers to two strings and a const reference to a word list.
// Returns the value of the string found first in the word list.
// Should return "N/A" if neither is in the word list.
std::string GetFirstInList(const std::string& word_list, std::string* word1_ptr,
                           std::string* word2_ptr) {
  size_t pos1 = FindInList(word_list, *word1_ptr);
  size_t pos2 = FindInList(word_list, *word2_ptr);
  if (pos1 == std::string::npos && pos2 == std::string::npos) return "N/A";
  if (pos1 < pos2) return *word1_ptr;
  return *word2_ptr;
}

// Takes a word_list and a word and counts the number of times that word
// is found in the list.
size_t CountInList(const std::string& word_list, const std::string& word) {
  size_t count = 0;

  for (size_t pos = FindInList(word_list, word); pos != std::string::npos;
       pos = FindInList(word_list, word, pos + 1)) {
    count++;
  }

  return count;
}