03-12-2024

# Classes and Concrete Types 

[class slides](https://cse232-msu.github.io/CSE232/lectures/week07.html)

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
    - if re is a const function, must be assigned with initializer list like above

#### Copy Constructor 

- Generates a deep copy of an object
    - `complex(complex const & z) :re{z.re}, im{z.im} {}`   
    - make copy of z, object has its own copies that will never change our copies

## Operators

- `this` keyword
    - pointer to a member functions object
    - similar to Python `self`


```
complex & operator+=(complex z);

complex a{2, 3};
a += 2 += 3;
// same as
(a += 2) += 3;
```
- Return a reference
    - all operations change the same object

#### Example: `<` operator

```
complex a {1, 2};
complex b {3, 4};
std::cout << (a < b) << std::endll;
```
- only compares the real components of `complex` object (the first number)