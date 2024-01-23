01-22-2024

# Pointers, Arrays, and References

[class lectures](https://cse232-msu.github.io/CSE232/lectures/week02.html)

Class readings: Section 1.7

## `*` uses

Declaration: pointer too
    - example: `int * x`
    - x is a pointer to an int
Unary Expression: contents of
    - example: `*x`
    - deference to pointer named x
Binary Expression: multiply
    - ex: `x * y`

## `&` uses

Declaration: reference to
    - example: `int & x`
    - x as a reference to x
Unary Expression: address of
    - example: `&x`
Binary Expression: bitwize
    - ex: `x & y`

## `[]` uses

Declaration: array of
    - example: `int x[y]`
    - x is array of ints, length y
Binary Expression: element of
    - ex: `x[3]`
    - fourth element of x, index

# Reference to const

- reference to const
    - ex: `int const & x = y;`
    - x is a reference to y, treated as a constant int

- reference to non-const
    - ex: `int & x = y;`
    - x is reference to y, non constant type

## Const and pointers

Pointer Example:
- `int const * x;`
- meaning: cannot change the type which x is pointing to

Const Pointer

```
int y = 78;
int * const x = &y;
*x = 12; // value of y is now 12
int z = 45;
x = &z; // Compiler Error!
// x is a const pointer
// it cant point somewhere else
```

# C-style Strings

- Array of characters ending in `null` character
    - `null` is `'/0'`
    - `/0 == 0;` is true 

Declaration:
`char x[10];`

Value
`{'h', 'e', 'l', 'l', 'o', '/0'}` or `"hello"`

- String literal is immutable, characters cannot be changed
    - string literal is string declared directly


# Program Example - ref and const

references_pointers.cpp

```
#include <iostream>

int main() {
    int x{23};
    int const y = x; // same as int y{x};

    int & ref{x}; // must declare what is being referenced

    // cannot do: int & ref{y};

    std::cout << ref << std::endl;
    ++ref;
    std::cout << ref << std::endl;
    std::cout << x << std::endl;

    // ++y;  Raises an error because const declaration

    int const & c_ref{yx};

    ++x; // okay bc x not constant
    // ++c_ref;  not okay because c_ref is constant 
}
```

- run in terminal `g++ -Wall -std=c++23 references_pointers.cpp`
- output: 
    >`23`
    >`24`
    >`24`

# Example 2 - pointers

references_pointers.cpp

```
#include <iostream>

int main() {
    int x{23};
    int const y = x; 

    int & ref{x}; 

    std::cout << ref << std::endl;
    ++ref;
    std::cout << ref << std::endl;
    std::cout << x << std::endl;

    int const & c_ref{yx};

    ++x; 

    int * ptr{&x}; // pointer whose value is address of x
    std::cout << ptr << std::endl;
    std::cout << &x << std::endl; // same as ptr
    std::cout << *ptr << std::endl;

    int const * ptr2{&x};

    // *ptr2 = 23; is illegal because cannot change the value of the ptr

    // ptr2 = 34; illegal, constant
    *ptr2 = 34; // is legal, will change x
    
    // to combat this, ptr will be declared as below
    int const * const ptr2{&x}; // cannot change the ptr value and cannot change x
}
```

- run in terminal `g++ -Wall -std=c++23 references_pointers.cpp`
- output: 
    >`23`
    >`24`
    >`24`
    >`0x7ffff14184b88` <- value of the pointer (ptr), address in memory
    >`25` <- value of address of pointer (*ptr)