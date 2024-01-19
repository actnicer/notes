01-15-2024

# Input and Output

[lecture](https://cse232-msu.github.io/CSE232/lectures/week01.html)

No slides or reading for this lecture

Program that prints hello

**io.cpp**
```
int main() {
    std::cout << "Hello\n";
}
```
in terminal type `g++ -Wall -std=c++23 io.cpp`

error: `must #inlude <iostream>`

```
#include <iostream>
int main() {
    std::cout << "Hello\n";
}
```

enter: `g++ -Wall -std=c++23 io.cpp`

compiles

now enter `./a.out` to run program

## More Complex program

program reads in a number and prints it doubled

```
#include <iostream>

int main() {
    std::cout << "Hello\n";
    std::cin >> number; // input stream
    std::cout << number << std::endl; // endl = end of line ch (newline)
}
```

try compile = error `'number' was not declared`

```
#include <iostream>

int main() {
    std::cout << "Hello\n";
    int number{0}; // declare number with initial value 0
    std::cin >> number;
    std::cout << number << std::endl;
}
```

`clear` in terminal gets rid of them
run program -> prints `Hello` and stops; waiting for input
type in number (14) and it'll print out 14. We need it to double

```
#include <iostream>

int main() {
    std::cout << "Hello\n";
    int number{0};
    std::cin >> number;
    std::cout << number * 2 << std::endl; // double number
}
```

must recompile to update `./a.out`

after recompiling and rerunning: number doubles

## Next Program

```
#include <iostream>

int main() {
    std::cout << "Hello\n";
    char favorite_letter{'J'}; // variable letter 'J' (arbitrary value)
    std::cin >> favorite_letter;
    std::cout << "Your favorite letter is " 
        << favorite_letter << "!" << std::endl;
}
```

prints `Hello` and gets input. After putting in letter `X` prints `Your favorite letter is X!`