01-29

# Strings 

Section 10.2 in the readings 

## char

- Strings are like vector of chars
- same methods
	- `.at()`
	- `.size()`

- useful functions 
	- `isalnum` check if alphanumeric
	- `isalpha` check if alphabetic 
	- `islower`, `isupper`, `isdigit`, etc.

```
#include <iostream>
#include <cctype>
int main() {
	char c{' '};
	if (std::isalpha(c)) {
		std::cout << c << " is in the alphabet";
	}
}
```

## String methods

- empty
	- `string s;` 
	- declared and initialized to default value
- copy
	- `string s{"hi"};`
	- `string c{s};`
	- can also initalize yourself
- list of char 
	- `string pet{'M', 'a', 'l'}; 
	- can initialize a string as a list of char
	- must use single quotes, denotes a list
- `name.clear();` 
	- erases the contents of the string
- `name.push_back('!');`
	- add character to a string

## String comparisons

- operator `==`
	- `str1 == str2;`
		- same length and sequence of characters = true
	- `<`, `>`, `<=`, `>=`, `!=`
		- compared lexicographically

## Find Member Function

- `std::string::size_type` 
	- many member functions of string and vectors return these
	- unsigned int types

```
string my_str = "hello world";

// find letter e in the str, make sure to use single quote
size_t pos{my_str.find('e')};
// pos set to 1
```

## String Input

- operator `>>`

```
string my_str;
cin >> my_str;
// ignores leading whitespace, reads in characters until
// whitespace or EOF character
```

### getline function

```
string my_str;
getline(cin, my_str);
// takes two arguments
// reads characters into my_str until newline or EOF

getline(cin, my_str, '.');
// reads char into my_str until '.' char 
