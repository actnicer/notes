02-05-2024

# Structures

[class slides](https://cse232-msu.github.io/CSE232/lectures/week04.html)

Readings: 2.1, 2.2

## Argument Passing 

- pass by value
    - example: `int Count(string s);`
    - effect: only changing local copy
    - use when you need a copy (small types)
- pass by reference 
    - example: `int Count(string & s);`
    - parameter is reference to the comment
    - if change s, change original argument
    - use when avoid copying
        - when large type (giant string)
    - when you wanna change the argument

- FAQ
    - when to make a parameter const
        - when the variable should never changed
    - when to make a parameter a pointer
        - very rarely 

## Access operators

- `->` arrow operator
    - makes code a lot more legible for pointers

- dot operator

```
string s{"CSE 232"};
cout << s.size();
```

- arrow operater

```
string * s_ptr = &s;
cout << s_ptr->size();
```

- how to do without dot operator
    - must use parenthesis to avoid compile error

```
string * s_ptr = &s;
// dereference using *
cout << (*s_ptr.size());
```

## Dynamic Memory

- `new` operator
    - always returns a pointer
    - `int * x = new int{0};`
        - pointer to an int "x"
        - dynamically allocated memory
        - object lives until delete
    - `delete x;`

- Benefits
    - runtime size
        - size of type is known at time of running the program
    - scope
        - scope lasts as long as you want
    - heap