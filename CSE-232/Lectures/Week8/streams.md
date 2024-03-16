03-12-2024

# Streams

## Types 

```
#include <iostream>
using std::ostream, std::istream;
ostream & operator<<(ostream & os, T const &);
istream & operator>>(istream & is, T &);
```

- `<<`  
    - works with all ostreams
    - not a const, point of this function is to change the input
    - returns a reference to the string
- `>>` 
    - works with all istrams
    - returns a ref to the string

## `<fstream>`

- `ofstream`
    - can do anything `cout` can do
```
ofstream ofs{"output.txt"};
ofs << setw(4);
ofs << " age:" << 30 << '\n';
```

- `ifstream`
    - supports same operations as `cin`
```
ifstream ifs{"input.txt"};
int x;
ifs >> x;
ifs >> noskipws;
while (ifs >> x) // ...
```
- fstreams follow RAII
    - open file when constructed
    - close file in their destructor
    - let file be destroyed naturally
- fstreams follow rule of 3
    - has user defined 

## 2 ways with files

- fstreams
- IO Redirection
    - use `>` to write something to file in the unix terminal
    - use `<` to write something to something else in the terminal

## String streams

- `<sstream>`
    - act like a string
        - holds a series of characters
        - `.str()` gives access to that string
    - istringstream
        - support all istream operations

- ostringstream
    - used to create formatted strings nad converts objects to strings
```
ostringstream oss;
oss << fixed << setprecision(4) << boolalpha;
oss << 3.1459 << " is great == " << true << endl;
string sentence{oss.str()};
// sentence is "3.1459 is great == true\n"
```

- istringstream
```
string word;
char ch;
istringstream iss{"hello world"};
iss >> word; // space sep "hello'
iss.get(ch); // the space
iss.get(ch); // 'w'
```

