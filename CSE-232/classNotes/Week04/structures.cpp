#include <iostream>
#include <string>
#include <cctype>

using std::string;

// function declaration
void Capitalize(string & s);

void MakeExciting(string const & s);

int main() {
    int * x = new int{0};
    // returns new pointer to dynamically allocated memory
    // object lives until delete

    std::cout << *x << std::endl;

    delete x;

    std::string * words = new string[40]{"CSE", "232"};

    std::cout << words[1] << std::endl;
    // dynamically allocated array

    delete [] words;

    string name{"mal"};
    Capitalize(name);
    // std::cout << name << std::endl;
    MakeExciting(name);
}

// function definition, changes a copy of name
// void Capitalize(string s) {
//     s.at(0) = std::toupper(s.at(0) );
//     std::cout << "s.at(0) is now: " << s.at(0) << std::endl;
// }

// take s as a reference to change name, change original as well
// make sure declaration matches
void Capitalize(string & s) {
    s.at(0) = std::toupper(s.at(0) );
    std::cout << "s.at(0) is now: " << s.at(0) << std::endl;
}

// s will not be changed by function bc of const
// will be a reference bc &
void MakeExciting(string const & s) {
    std::cout << s << "!!!!!" << std::endl;
}