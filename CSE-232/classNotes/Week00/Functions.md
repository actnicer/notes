01-09-2024

# Functions 

[lecture](https://cse232-msu.github.io/CSE232/lectures/week00.html)
This section covers readings in book through section 1.3

## Return Type

python example: 

> def add(a, b): 
>&nbsp;&nbsp;&nbsp;&nbsp;result = a + b
>&nbsp;&nbsp;&nbsp;&nbsp;print("Result = ", result)
>&nbsp;&nbsp;&nbsp;&nbsp;return result
>// cant tell what type of output will be returned

c++ example:

>int add(int a, int b);
>// must specify the type before and specify the output thats returned

## Names

Functions must be declared before theyre called

Function declaration consists of return type > name > && the type of argument 

> int add(int a, int b)

Argument names are optional

> int add(int, int)

## Function Overloading

Function declarations with the same name, but different parameters, are called overloaded.

Beware of ambiguous function calls.

Does Python have overloading? Yes! can overload based on type

## Example Questions

Q. When are the function names not ignored by the compiler? 
A. when the function declaration is also a function definition.

Q. Given the following declarations which are overloaded? 
>void Jump();
>int Jump();
>void After(double a);
>void After(double);
>int Nice(string);
>int Nice(int);
>string Bark(string);
>string Bark();

A. Nice and Bark are overloaded