#pragma once
#include <string>

bool AtListPosition(const std::string& word_list, const std::string& word,
                    size_t pos);
size_t FindInList(const std::string& word_list, const std::string& word,
                  size_t pos = 0);
std::string GetFirstInList(const std::string& word_list, std::string* word1_ptr,
                           std::string* word2_ptr);

size_t CountInList(const std::string& word_list, const std::string& word);

// CODIO SOLUTION END
// CODIO SOLUTION BEGIN
#pragma once
#include <string>

bool AtListPosition(const std::string & word_list, const std::string & word, size_t pos);
size_t FindInList(const std::string & word_list, const std::string & word, size_t pos=0);
std::string GetFirstInList(const std::string & word_list,
                           std::string * word1_ptr,
                           std::string * word2_ptr);

size_t CountInList(const std::string & word_list, const std::string & word);