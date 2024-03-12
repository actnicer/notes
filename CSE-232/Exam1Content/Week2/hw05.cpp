// program takes in and breaks down input from users
// when the char's "MSU" is typed in the program stops collecting data
 
// Example 3.6
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::noskipws;
using std::setw;

int main() {
  char C;               // Input character
  int char_count = 0,   // Number of characters in input stream
      line_count = 0,   // Number of newlines
      white_count = 0,  // Number of whitespace characters
      digit_count = 0,  // Number of digits
      other_count = 0,  // Number of other characters

  cin >> noskipws;
  // declarations to track for 'msu' input
  char prev = '.', prev2 = '.';

    while (cin >> C) {
        ++char_count;  // Increment overall character count
        switch (C) {   // Classify each character
            case '\n':   // Newline
                ++line_count;
                [[fallthrough]]; // Added to indicate that fallthrough is expected
            case ' ':  // White space (newline, blank or tab)
            case '\t':
                ++white_count;
                break;
            case '0':  // Decimal digit
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                ++digit_count;
                break;
            default:  // Other character
                ++other_count;
                break;
        }
        // compare input to check for 'M', 'S' & 'U' 
        // in correct order, followed similar logic to given
        // solutions for HW
        char temp = C | 32;
        if (temp == 'u' && prev == 's' && prev2 == 'm') {break;}
        std::swap(prev, prev2);
        prev = temp;
    }

  cout << endl;
  cout << "Newlines:   " << setw(5) << line_count << endl;
  cout << "Whitespace: " << setw(5) << white_count << endl;
  cout << "Digits:     " << setw(5) << digit_count << endl;
  cout << "Other:      " << setw(5) << other_count << endl;
  cout << "Total:      " << setw(5) << char_count << endl;
  cout << endl;
}