#include "func.hpp"


std::set<std::string> ReplacementCensor(std::istream& is, std::ostream& os, 
                  const std::map<std::string, std::string>& s_map) {
    std::set<std::string> replacedWords;
    std::string word;

    while (is >> word) {
        std::string originalWord = word;
        for (auto& ch : word) {
            // convert to lowercase for case-insensitive comparison
            ch = std::tolower(ch); 
        }

        auto it = s_map.find(word);
        if (it != s_map.end()) {
            os << it->second;
            replacedWords.insert(originalWord);
        } else {
            os << originalWord; // keep original word
        }

        int nextChar = is.peek();
        if (!std::isspace(nextChar) && nextChar != EOF) {
            os << static_cast<char>(nextChar); // Output the non-whitespace character
            is.ignore(); // Move the stream past the processed character
        } else {
            os << ' '; // Output a whitespace character
        }
    }

    return replacedWords;
}

// In the folder “CensoredCopy” is an implementation and 
// header file. You need to write a function, named "ReplacementCensor", 
// that takes 3 arguments. The first argument is an istream of text to be 
// processed. The second argument is an ostream to where the processed 
// text should be copied too. The last argument is a map of strings to
//  strings where the key is a string that needs to be replaced the 
//  value in the text of the first arguments contents. This function 
//  should return a set containing the words that where replaced. 
//  Please note that the keys should be matched in a case insensitive way 
//  and that text to replace may not be white space delimited 
//  (meaning they can appear in longer words).
// For example, if the text in the stream is:

// note: this is a line with multiple WORds that should be rePLACEd.
//  all instances of word eveninlargerWordsshould be repLAced.

// and the third argument is a map with the following pairs:

// {"word", "Grouped-Letter-Unit"}, 
// {"be", "wasp"}, 
// {"not found", "not appearing"}, 
// {"PlaCe", "LoCation"}

// then the resulting text written to the ostream should be:

// note: this is a line with multiple Grouped-Letter-Units that should wasp reLoCationd.
//  all instances of Grouped-Letter-Unit eveninlargerGrouped-Letter-Unitsshould wasp reLoCationd."

// lastly, the function should return a set of these strings:

// {"PLACE", "WORd", "Word", "be", "pLAce", "word"}
