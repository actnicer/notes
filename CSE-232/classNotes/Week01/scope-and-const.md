01-15-2024 

# Scope and Const

[lecture](https://cse232-msu.github.io/CSE232/lectures/week01.html)

## Scope

Scope **starts** where you declare a variable. Scope **ends** when you reach the end of the block of the variables declaration.

Example:
```
#include <iostream>

int main() {
    int x = 4; // x scope starts here
    double y = 3.15; // y scope starts here
    while (x < 100) {
        y+= 1;
        std::cout << y;
        double z = x + y; // z scope begins here
        x = z / 4;
        std::cout << " " << x << "\n";
        --x; // z's scope ends here
    } 
    std::cout << y; //x && y's scope ends here
}

```
z cannot be referenced in the same block where x and y exist because it is out of scope

### Narrow scope

Declare (and initialize) variables with as narrow a scope (short lifetime) as possible. Leads to clearer code and simpler debugging.

Create variables **only** when you're ready to use them

## Const

**const West** Example: `const int x;`
support: more common. used in the reading. Similar to english

**East const** Example: `int const x;`
support: More consistent (especially when types get more complicated); gaining popularity

`constexpr` and `consteval` are optional CSE 232 content

"Tour" covers a lot of content that isnt worth focusing in this first semester

