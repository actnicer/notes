1-29

# Vectors

- mutable size
	- can be changed unlike arrays
- run time size
	- size of vector determined at runtime
- member functions
	- useful methods
	- indexing

## using vectors

- `#include  <vector>`
- `using std::vector;`
	- any time reference vector => will auto have std:: prefix
- Parameterized type
	- vector type takes in another type
	- `std::vector<int> nums` 
		- vector that takes ints
	- `std::vector<double> temperatures;`
- `push_back`
	- takes element and adds to end of vector

## Indexing vectors

- `.at()`
	- example `x.at(2);` gives the 2 indexing (3rd element)
	- will raise an error if index is out of bounds
- `[]`
	- exmple: `x[2];`
	- will not raise error if out of bounds
- c++ doesnt allow  negative indexing
- josh recommends `.at()` bc it raises erros

# Function Definitions

- Must declare function before it can be called
- Example: `int add(int, int);`

- function call `cout << add(4, x);

- if calling a function youve written, you must define it first (write it)

```
int add(int a, int b) {
	return a + b;
}
```

