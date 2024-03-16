03-12-2024

# Destructors

[class lecture](https://cse232-msu.github.io/CSE232/lectures/week07.html)

- Resource Acquisition is Initialization (RAII) 
    - objects should ask to occupy memory during constructor

# Initializer lists 

- `istream` is an input stream

```
Vector read(istream & is) {
    Vector v;
    for (double d; is >> d;) {
        v.push_back(d);
    }
    return v;
}
```
- function returns vector named read
    - takes in reference to istream
        - istream cannot be copied 
    - not const because it changes the stream
    - for loop continues as long as `is` is not in an error state
        - EOF or input that cannot be read

## Copy

```
Vector::Vector(std::initializer_list<double> lst) 
: elem{new double[list.size()]}, sz{static_cast<int>(lst.size())} 
{
    for (int i{0}; i < sz; ++i) {
        elem[i] = lst[i];
    }
}
```
- initializer list must use [] bracket indexing