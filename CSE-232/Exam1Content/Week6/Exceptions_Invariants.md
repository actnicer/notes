02-04-2024

# Exceptions and Invariants 

Readings: 4.1, 4.2, 4.3

[lecture](https://cse232-msu.github.io/CSE232/lectures/week06.html)

## `<stdexcept>`

- Exceptions provided by standard library:
    - must include `<stdexcept>`
    - logic-error
    - invalid-argument
    - domain_error
    - length_error
    - out-of-range
    - runtime_error
    - range_error
    - overflow_error
    - underflow_error

## `what`

- Example:
    - check if numerator is negative to preserve logic of the program
        - if not construct error `illegal argument` with descriptor of problem

```
#include <stdexcept>
int Remainder(int num, int denom) {
    if (num < 0) {
        throw std::illegal_argument{"numerator is negative"};
    } else if (demon <= 0) {
        throw std::illegal_argument{"denominator is not positive"};
    }
    return num % denom;
}
```

```
try {
    Remainder(x, 14);
} catch (std::illegal_argument const & e) {
    coud << e.what() << endl;
}
```

- if errors are expected, can be useful to include try block
- try to call function
- if this error is thrown catch it
- variable e is the exception thrown by the function
- `e.what()` returns the string that the error was initialized with