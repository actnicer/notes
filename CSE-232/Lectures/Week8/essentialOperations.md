03-12-2024

# Essential Operations

## Copy Operations

- Copy Constructor
    - create a new object (clone)
- copy Assignment
    - changes an existing object to match another object

## Move Operations

- Move constructor
    - creates new object
    - Object destroyed at the end of the move
- Move Assignment
- Optional content for the the class

## Rule of 3 

- if a class requires a user defined **destructor**, user defined **copy constructor** or a user defined **copy assignment operator**, it usually requires all three
- also rule of zero
    - if none of these are true, none of them probably need to be implemented

## Rule of 5

- rule of three also applies with the move operators

