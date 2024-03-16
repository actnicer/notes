03-12-2024

# Compiler Options

[lecture](https://cse232-msu.github.io/CSE232/lectures/week07.html)

## Output and Dialects

- `-c` 
    - with the compile command `g++ -c main.cpp library.cpp`
    - doesnt link the output files
    - seperate compilation
- `-o`
    - tell program the name of the output file
    - `g++ -o program.exe main.cpp library.cpp`
    - outputs to program.exe
- dialect
    - use `-std=c++20` to regulate dialect of the compilers

## Optimization 

- `-O0` 
    - default optimization level
- `-O1`
- `-O2`
- `-O3`
- can specify them as compiler flags
    - `g++ -O3 main.cpp library.cpp`
        - run as fast as possible while conforming to standards

- Disable Assertions
    - `-DNDEBUG` 
        - ignores assertions to make code run faster

Example assertions
```
#include <cassert>
int main() {
    int x{3};
    assert(x>0);
}
```

## Warnings and Debugging

- Warnings
    - 
- Errrors
    - messages from compiler that stop the code
- `-Werror`
    - treat all warnings as errors, stops compilation at that point
- Warning levels
    - `-Wpedantic`
        - warnings for violations of c++ standard
    - `-Wall`
        - gives warnings for questionable code
    - `-Wextra`
        - covers warnings not covered by -Wall

> Example compiler call:
> `g++ -Wall -Wextra -Werror main.cpp library.cpp`

- debuggin
    - enable `-g` flag to enable gdb debugger