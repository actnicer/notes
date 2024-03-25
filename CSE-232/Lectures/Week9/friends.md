03-20-2024

# friends

[class slides](https://cse232-msu.github.io/CSE232/lectures/week09.html)

- No associated readings

## Encapsulation

- Object Oriented Programming
    - Classes
        - keep data and operations together
        - encapsulated together
    - Access
        - ensures that only that class are able to access sensitive data and operations
    - Extensibility
        - allow classes to be extended
        - known as *inheritance* - not taught here

## Access Control

- Private
    - this class is the only one who's allowed to access this data
    - can allow public accessors
        - Getters and Setters
        - Other objects can interact using these
- Public
- What do we do if we want a specific function to be able to access private data?
    - allow one specific function to have access to a private data member

```
// login.h
class Login {
public:
    std::string username;
private:
    std::string password;
};
bool operator==(Login const &, Login const &);
```

```
// login.cpp
bool operator==(Loin const & a, Login const & b) {
    return a.username == b.username && a.password == b.password;
}
```
results in compiler error because operator== cant access password

## Friend functions

- declare within function that `bool operator==(Login const &, Login const &);` is a friend
    - friend function has special permission to access private attributes of the class
    - now login.cpp will compile and run as expected

```
// login.h
class Login {
public:
    std::string username;
private:
    std::string password;
    friend bool operator==(Login const &, Login const &);
};
```
- Private access
    - access to private data members
- Declaration
    - declare inside class and prefix w/ `friend` keyword

- Common Friend Functions
    - generally operators that need to change their data
    - operator==
    - operator!=
    - operator<
    - IO operators
        - operator<<
        - operator>>
    - Factory functions & iterators

## Friend Classes