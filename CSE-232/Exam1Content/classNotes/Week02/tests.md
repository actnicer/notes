01-22-2024

# Tests 

[lectures](https://cse232-msu.github.io/CSE232/lectures/week02.html)

Readings: Section 1.8

## `if` / `else`

### if

single statement 

```
if ( x == 6 )
    std::cout << "x is six":
```
no need for braces in just one statement

multi-statements
```
if (x == 6) {
    std::cout << "x is six";
    ++x;
}
```

### else

single statement 
```
if ( x == 6 )
    std::cout << "x is six":
else
    std::cout << "not six";
```

multi-statements
```
if (x == 6) {
    std::cout << "x is six";
    ++x;
} else {
    std::cout << "not six"; --x;
}
```

## Conditional expressions

- "true" values:
    - `if (x)`
    - `while (x)`
    - `for (...; x; ...)`

- "equivelant" statements
    - `if (x)` v. `if (x != 0)`
    - `if (!x)` or `if (x == 0)`

- None (forms of zero)
    - `\0`
    - `0`
    - `nullptr`

# Break and continue

## break

```
for (int x = 0; x < 5; ++x) {
    if (x % 3 == 0) {
        cout << "x is evenly divisible by 3"
            << endl;
        break
    }
    cout << "x is " << x << endl;
}
```

prints `x is evenly divisible by 3` and breaks out of the loop

break terminates the loop

## continue

```
for (int x = 0; x < 5; ++x) {
    if (x % 3 == 0) {
        cout << "x is evenly divisible by 3"
            << endl;
        continue;
    }
    cout << "x is " << x << endl;
}
```

prints
> `x is evenly divisible by 3`
> `x is 1`
> `x is 2`
> `x is evenly divisible by 3`
> `x is 4`

# for loop details

`for (init_statement; condition; iteration_expression)`

infinite loop: `for (;;)`

# other flow control structures

*beyond scope of this class*

- do-while loops
    - body executed before condition is checked
- conditional operator
    - allows flow control within expression

