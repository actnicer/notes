01-15-2024

# Types, Variables, and Arithmetic

[class slides](https://cse232-msu.github.io/CSE232/lectures/week01.html)

Section 1.4 on the readings

add a line of code in md by using `triple backtick` 
```
dogs = [lab, golden, terrier]
for dog in dogs:
    print(dog)
```

## Types

**Types**: How the bit pattenr is interpreted and what it can do, e.g. a 32 bit `int`

**Object**: Some amount of memeory that holds a value of some type. e.g. the location of `x`

**Value**: The set of bits, e.g. 42 or `0b101010`

**Variable**: A named object, e.g. `x`

### Strings?

Text is generally represented in C++ in two different ways
- arrays of `char`
- `std::string` in `string`
both are covered laters

### Other types

Many other types than the ones covered in the readings

## Arithmetic 

### Operators to ignore

**Bitwise operators**: bitwise operators not taught in order not to confuse with logical operators such as `&&` or `||`

**Postfix Incremint/Decriment**: c++ and c-- the reading skips over these common set of operators. 

They work identically to their prefix equivalants but return the old value of the variable when used in larger expression. 

Postfix increment shouldnt be used unless behavior is desired

Example:
```
int a = 4;
int b = a++;
// a's value is 5, b's value is 4
```

```
int x = 4;
int y = ++x;
// x's value is 5, y's value is 4
```

## Initialization 

### Most Vexing Parse

`double x(int y);`

is this code above dexlaring function named x that takes an int parameter named y and returns double? 

or 

it is an initialization for a variable double named x from the value of y converted to an int?

*It's ambigious*

**Solution**: use curly braces
`double x{y};`

### Undefined Behavior

**Division by 0**
`return x / 0`

**Accessing Uninitialized memory**
```
int x;
std::cout << x;
```

**others**: dereferencing a null pointer, out of bounds memory access, signed overflow

Undefined behavior is a way for C++ to give compilers permission to not check and not guarentee any observale behavior for code. It allows them to write more efiicient compulersm at the expenes of erroneous code. **Never write code with undefined behavior**

### Types of bad code

**ill-formed**: Syntax errors that a compiler must identify
`innt x = 42;` intead of `int x = 42;`

**Implementation deifined behavior**: code that does different things in different environments. Compiler must specify the exact behavior
Ex: Code behaves differently depending on the system. e.g. 64 vs 16 bit system

**Unspecified behavior**: Varies between implementations but the compiler isnt required to specify exact behavior. 

**Undefined Behavior**: No restrictions on behavior, the code could do anything!

## Auto

#### When to use auto?

Rarely (when learning). Auto is powerful tool for simplifying and clarifying your code. But it often makes devuggin type errors more challengin because you arent being explicit with your types.

Only use auto when you know the type it will infer. They strongly recommend avoiding its use until you are more confident in your C++ skills. They will require explicit type in a solution if you ask for help regarding compiler errors.