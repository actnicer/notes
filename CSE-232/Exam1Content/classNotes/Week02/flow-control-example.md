01-22-2024

# Flow Control Example

char_count.cpp

```
#include <iostream>

int main() {
    int char_count{0};

    char character;

    while (std::cin >> character) {

        // std::cin >> character; move into conditional
        // makes sure it increments the correct amount

        ++char_count;
    }

    std::cout << "characters: << char_count << std::endl;
}
```

compile in terminal: `g++-Wall -std=c++23 char_count.cpp`
run file `./a.out`
takes input from user and counts standard characters

## count also space characters etc

char_count.cpp

```
#include <iostream>
#include <iomanip>

int main() {
    std::cin >> std::noskipws; // dont skip white space
    int char_count{0};

    char character;

    while (std::cin >> character) {
        ++char_count;
    }

    std::cout << "characters: << char_count << std::endl;
}
```
compile in terminal: `g++-Wall -std=c++23 char_count.cpp`
run file `./a.out`
takes input from user and all characters, whitespace and newlines

## addtional counters

char_count.cpp

```
#include <iostream>
#include <iomanip>

int main() {
    std::cin >> std::noskipws;

    int char_count{0};
    int digit_count{0};
    int whitespace_count{0};
    itn other_count{0};

    char character;

    while (std::cin >> character) {
        ++char_count;

        switch (character) { // switch case 
            case '0':
            case '1':
            case '2': // if caught by one case will run til it hits incrementer and break
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                ++digit_count;
                break;
            case ' ':
            case '\n': // if whitespace, newline or tab is caught by case runs til increment counter and break
            case '\t':
                ++whitespace_count;
                break;
            default: // catches all the rest
                ++other_count;
                break;
        }


        // traditional style loops for example
        if (character >= '0' && character <= '9') { // between 0 and 9
            ++digit_count;
        }
        if (character == ' ' || character == ...)
    }

    std::cout << "characters: " << char_count << std::endl;
    std::cout << "digits: " << digit_count << std::endl;
    std::cout << "whitespaces: " << whitespace_count << std::endl;
    std::cout << "Other: " << other_count << std::endl;
}
```

compile in terminal: `g++-Wall -std=c++23 char_count.cpp`
run file `./a.out`
use `control d` to end input