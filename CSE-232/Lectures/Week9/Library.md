03-20-2024

# Library Overview

[class slides](https://cse232-msu.github.io/CSE232/lectures/week09.html)

- Reading: Chp. 9

## `using namespace std`

- Namespace polution
    - bring all the `std::` namespace into the program, makes is easer to clash names with something else in `std`
    - avoided by `using std::cout`
        - pull specific names
- Upkeep
    - if need to add a function that shares a name with std, have to refactor the whole project
- Readability
    - when working with multiple namespaces, will make the library clear

## Ranges

- Algorithms
    - taught in next few weeks
    - generally take two iterators to work
    - all algorithms can use ranges that allow passing of a container directly 
- Iceberg
    - Arent going into much detail into 232

## C Standard Library

- Libraries inherited from C
    - <cstdint>
        - specific fixed width ints
    - <cfloat>
        - floating point constants
    - <cctype>
        - char related functions
    - <cassert>
        - assert function
    - <cmath>
        - Trig and other math functions and constants
    - <cstudio>
        - c style IO, notably `printf` function
