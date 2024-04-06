03-25-2024

# Maps

Readings: 12.3 - 12.8

[class slides](https://cse232-msu.github.io/CSE232/lectures/week10.html)

## Pair and Iteration

- `std::pair`
    - can be initialized with two values
    - two types provided
    - two attributes
        - `.first`
        - `.second`
        - not member functions - provide direct access to the data
    - probably a struct not a class
    - must include `<utility>`

```
std::pair<string, int> word_count{ "Mal", 100};
cout << word_count.first << word_count.second;
```

- Range based for loop
    - `pair` is how values are stored in a dictionary

```
map<string, int> phone_book{
    {"David", 123456},
    {"karl", 3242352},
    {"jim", 1221435}
};

for (pair<string, int> entry : phone_book) {
    cout << entry.second << "->" 
            << entry.first << '\n';
}
```

OR

use structured bindings

```
for (auto [name, number] : phone_book) {
    cout << number << "->" << name << '\n';
}
```

## Insert

- maps dont have a push_back function
- where the entry goes is dependant on its key
- instead insert:

```
map<string, int> m;
string word = hello;

m.insert(pair<string, int>{word, 1});

//or

m.insert({word, 1})
// the thing that insert takes is a pair so no need to be explicit
```

- cant insert string or random type only, must be a pair

- Inserts return value
    - `pair<iterator, bool>`
    - maps cannot take two elements with the same value for the key
    - if you try to input one with the same key, return will be `false`
    - the first element of the return is an iterator that points to the pair,
        - either newly inserted or if false then the one thats already there
    - example of checking a successful pair

```
map<string, int> m{{"Mal", 100}};

// new key
pair<map<string, int>::iterator, bool> result = m.insert({"Josh", 50});

// should output 1
coud << "successful insert?" << result.second << endl;

// need to dereference to access the pair bc returns an iterator
// Should output josh, 50
pair<string, int> entry = *(result.first);
cout << entry.first << entry.second << endl;

// old key
result = m.insert({"Mal", 1000});
// unsuccessful insert bc key is already used
cout << "successful insert" << result.second << endl;
// should print out mal, 100 ie: the code that stopped it
entry = *(result.first);
cout << entry.first << entry.second << endl;
```

- Auto
    - could use auto (type inference) to shorten it
    - `auto result = m.insert({"Josh", 50});`

## `find`

- if using brackets with map
    - returns the value thats associated with that key

```
int& number = phone_book["josh"];
cout << number;
```

- BUT if 'josh' is not in the map, will add a new entry with `0` as a value
- can use the `find` member function to check if the element is there
    - returns an iterator to the entry matching that key
    - if key isnt in the map returns iterator passing to one past the last element (AKA `.end()`)

```
map<string, int>::iterator iter = phone_book.find("David");
if (iter!= phone_book.end()) {
    cout << (*iter).second;
}
```

## Other containers

- vector alts
- Optimizations
- beyond the scope of this class
- generally vector is the best
- tests: vector, map, unordered_map
- not on tests: other types in chp. 12
