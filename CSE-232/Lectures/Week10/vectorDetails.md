03-25-2024

# Vector Details

Readings: 12.1 & 12.2

[class slides](https://cse232-msu.github.io/CSE232/lectures/week10.html)

## Iterators

- Iterator 
    - way to access elements of a vector

- Pointers and Arrays
    - The name of an array is the same as a pointer to its first element
    - when you add numbers to an element:
        - if element referes to an array, change the thing in the array that the element points at

```
int const size = 4;
char array[size] = {'a', 'b', 'c', 'd'};
char * beginning = array;
char * one_past_end = array + size;

for (char const * current element = beginning; 
        current_element != one_past_end; ++current_element) 
    {
        std::cout << *current_element;
    }
std::cout << '\n';
```

- `.begin()` and `.end()`
    - std containers (vector, initializer_list, string, etc.) have member functions
        - retunr a pointer-like object called a iterator
    - used to access elements within the container
    - `.begin()` returns an iterator that points at the first element
    - `.end()` returns iterator that points at one past the last element


```
std::vector<char> vec = {'a', 'b', 'c', 'd'};
for (std::vector<char>::iterator iter{vec.begin()}; iter != vec.end(); ++iter) {
    // print out dereferenced pointer (itll be that value at the vec)
    std::cout << *iter;
}
std::cout << '\n';
```

- Why one past the last elem for `.end()`?
    - Don't always have a final element
        - like in an empty list
    - many iterators only work for equality 
        - not greater or less than comparisons
- What happens with empty vector?
    - iterators will point to where these elements should go
    - `.begin()` and `.end()` will be equal to one another

#### Other iterators

- Reverse
    - `rbegin()`: last element in the list
        - when incrementing, will move towards the first element of the list
    - `rend()`: point to the first element in the list 
- Const
    - `cbegin()`
    - `cend()`
    - same as `.begin()` and `.end()` but change the thing that the iterator points to
- Both
    - `crbegin()`
    - `crend()`
    - reverse iterator to const iterators

## Capicity

- conditional operator `?`
    - ternary operator (three) 
    - starts with condition, evaluates differently if true or if false
    - `cond ? if_true_value : if_false_value;`

```
// sec 12.2 
reserve(size()==0?8:2*size());
```
- if `size()` equals zero: returns 8
- if `size()` doesnt equal sero: returns size times 2

- Capicity functions
    - `.size()`
        - number of elements in the vector
    - `capacity()`
        - largest size the vector can grow too before it needs to allocate more memory
        - if vector passes capacity, must copy to a new vector and `delete []` old vector
            - expensive process
    - `reserve(int)` 
        - expands the given argument to the desired size
        - avoids the vector having to copy to new memory like when it passes capacity
    - `push_back(elem)` 
        - takes element and adds it to the end of the vector

- who cares?
    - when memory has to be reallocated, iterators become invalidated

## Invalidation

- breaking iterators
    - hardware
        - iterators are basically wrappers around pointers
    - arrays
        - pointers to deleted arrays are pointing to invalid locations
        - cant be dereferenced
    - Memory allocation
- **Dont** use iterators to structures that are changing in size!

## Front/Back

- `front()`
    - returns a reference to the first element
    - if is changed, changes that element of the vector
- `back()`
    - returns reference to last element
- If called on an empty vector, can cause **undefined behavior**

## Other useful member functions
- `empty`
    - return true if size == 0
- `clear`
    - removes all elements
- `insert`
    - adds an elemetn into a specified position
- `pop_back`
    - removes the last element
- `resize`
    - changes the size of the vector
    - adds or subtracts
- `swap`
    - swaps the data between the two containers