03-04-2024

# Classes and Concrete Types

Readings: Chp. 5.1-5.2.1

[class lecture](https://cse232-msu.github.io/CSE232/lectures/week07.html)

## Getters and Setters

- Const Member Functions
    - ex: `double real() const { return re; }`
        - inclusion of const means this member function will not change its object

- Encapsulation 
    - main idea of getters/setters
    - Getter Example: `double real() const { return re; }`
        - getters provide users the allowed amount of access that you desire them to have
        - wont change original values
    - Setter Example: `void real(double d) { re=d; }`
        - Setters provide member functions to users that allows them to change the values
        - generally dont return anything (void) because purpose is to change the values
    - Getter Example: `double imag() const { return im; }`
    - Setter Example: `void imag(double d) { im=d; }`

## Constructors

- default constructor: `complex() :re{0}, im{0} {}`
    - takes no arguments
- constructor with one argument: `complex(double r) :re{r}, im{0} {}`
- constructor with two arguments: `complex(double r, double i) :re{r}, im{i} {}`