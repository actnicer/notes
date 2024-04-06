04-01-2024

# Algorithms

Reading: Section 13.1 - Section 13.5

[Lecture Video](https://cse232-msu.github.io/CSE232/lectures/week11.html)

## Iterator Types

- `Container::iterator`
    - can change the container its associated with
- `Container::const_iterator`
    - can only read, not write to associated container
    - similar to pointer to const array
- Forward iterator
    - can be dereferenced (`*iter`) and read from or assigned to
    - support equality `==` or `!=`
    - Forward:
        - they support pre and post increment `++iter` or `iter++`
        - refer to next element in the container
- Bidirectional iterator
    - upgraded forward
    - does everything forward can but also supports decrement `iter--`
- random access iterators
    - improved bidirectional iterators
    - same powers as bidirectional iterator
    - support arithmatic, allows 'jump' to specific location
- Types of iterators returned by container
    - Vector: RA
    - list: bi
    - deque: RA
    - forward list: forward
    - map: bi
    - set: bi
    - stack: no support
        - not meant to be acessed with iterators
    - priority_queue:

## Arrays

- Arrays are conitguous sequence of elements of same type
- Pointers are iterators
    - support all same functions as forward iterators

```
int array[3] = {2, 3, 2};

// points to first element
int * ar_begin = array;

// points to one past the last element
int * ar_end = array + 3;

ar_begin++;

// change 2 to 4
*ar_begin = 4;

// check for equality
bool b = ar_begin != ar_endl;
```

- Pointers are iterators
    - also can be decremented, so also bidirectional iterators
    - all bidirectional iterators are also considered forward iterators

`int * iter = ar_end--;`

- Pointers are random access iterators as well!
    - support arithmetic

```
// point to element two previous to where it pointed
ar_begin -= 2;
iter = ar_begin + 1;
bool b2 = iter < ar_begin;
int i = iter[2];
```

## Sort Example

- Very common for iterator algorithms
- `sort` takes two iterators denoting the range of elements to sort

```
string const original = "My dog is named Mal.";
string copy{original};
sort(copy.begin(), copy.end());
cout << copy << endl;

//prints "     .MMaaddegilmnosy"
```
- Sorts string by its ascii value
- only sort one part of the container by changing your range:
```
copy = original;
std::string::iterator start = copy.begin() + 5;
sort(start, copy.end());
cout << copy << endl;

// prints "My do    . Maadegilmns
```
- Sort can take a third argument that provides a different `<` operator
    - pass into function to consider upper vs lowercase as equal

```
bool CaseInsensitiveLess(char left, char right) {
        return tolower(left) < tolower(right);
}
// ...
copy = original;
sort(copy.begin(), copy.end(), CaseInsensitiveLess);
cout << copy << endl;

// prints: "     .aaddegilMmMnosy"
```