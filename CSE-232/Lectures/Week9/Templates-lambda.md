03-20-2024

# Templates and Lambda Expressions

[class slides](https://cse232-msu.github.io/CSE232/lectures/week09.html)

- Readings: 7.1, 7.2 (before 7.2.1), 7.3 (before 7.3.3.2)

## Motivation

- Generic code
    - write code that can work on multiple types
    - this is instead of overloading the same function for diff types
- Future proofing
    - parameterized types and function templates can work with types that you didnt anticipate when you created them

## Header file

- Where to implement?
    - header files 
- Recipe
    - templates cant be compiled
    - theyre recipes for how to build classes/functions
- Usage
    - in order to use a template, template must be accessible to compilation unit
- .cpp
    - can include in cpp file but not practical for library building
- .h
    - best to include here

## Lambda Expressions

- Add first and last .cpp

#### Same code written two ways

- Named function
```
int SumFirstLast(vector<int> const& v) {
    return v.at(0) + v.at(v.size() - 1);
}

int main() {
    vector<int> = {1, 2, 3, 4};
    cout << SumFirstLast(v) << endl;
}
```

- Lambda Expression (same functionality)
```
int main() {
    vector<int> = {1, 2, 3, 4};
    cout << [](vector<int> const& v) {
        return v.at(0) + v.at(v.size() - 1);
    } << endl;
}
```

## Lambda Expression vs Named Functions

- Lambda are more convenient for small, single use funct
- Capture list
    - lambda can access local variables by ref or copy
- Self documenting
    - easily understandable to readers

- Most important use case for lambda expressions is with **generic algorithms** which havent been taught yet

## Untaught c++

- Template meta-programming