01-15-2024

# Formatting and Navigation

[lecture](https://cse232-msu.github.io/CSE232/lectures/week01.html)

No reading for this lecture

## Poor format

poor_formatting.cpp
```
#include <iostream>

int
main
()
{double
        pi
=3.14159
    ;double r=
        10
;
        std::cout
<< "Area = " <<
        pi
    *r*
        r
<< std::
endl;

return          0;}
```

to format call `clang-format -style=Google poor_formatting.cpp` into terminal

nicely formatted file will be printed in terminal

type `clang-format -style=Google -i poor_formatting.cpp` to format file in the editer. `-i` is for "in-place"

## Terminal Navigation

terminal terms 

`ls` shows content of all files in directory
`pwd` is print working directory - prints current file path
`cd` is change directory
`cd..` shoots back to previous folder in path
`cd /` takes you to root folder
`cd -` takes you back to file you were before cd'ing
`cd ~` home directory