01-09-2024

# Programs

[lecture](https://cse232-msu.github.io/CSE232/lectures/week00.html)

## Compiler

- code is turned into a seperate executable program
- static typing: every variable as an explicit type that cant be changed

### Import directive 
#### examples 
- import std;
- import string;

#### alt/ use include directive for this course
- #inlcude <iostream>
- #include <string> 

### Single line comment
code ... // C++ Style comment

### Multiline comment 
code... /* first line
second line 
third line */

comment in your code and make it clear why it was written that way 

# Hello.cpp

#include <iostream>

int main() {
    std::cout << "Hello, world!\n";
}

# print_square.cpp 

#include <iostream> // using include, not import

double square(double x) { */ different brace style - consistent w/ google style guide */
    return x*x; // indentation with two spaces
}

void print_square(double x) {
    std::cout << "the square of " << x << "is "
        << square(x) << "\n"; *//broke statement into two*
}

int main() {
    print_square(1.234);
}

### formatting
- curly braces {} denote blocks of code and are mandatory in many situations
- c++ code is largely free-form, whitespace is a matter of style and usually has no effect on functionallity of a program

