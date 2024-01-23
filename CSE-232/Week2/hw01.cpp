// Program takes user input and counts the number of times
// that the characters 'm' 's' or 'u' are used in the input
// program doesnt count after '.' character

#include <iostream>

int main() {
    int char_count{0};

    char msu_word;

    while (std::cin >> msu_word) {
        if (msu_word == 'M' || msu_word == 'S' || msu_word == 'U') {
            ++char_count;
        } if (msu_word == 'm' || msu_word == 's' || msu_word == 'u') {
            ++char_count;
        }if (msu_word == '.') {
            break;
        }
    }

    // print out results
    std::cout << "The count of letters (\"MSU\") is " << char_count << 
        "." << std::endl;
}