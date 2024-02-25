02-17-2024

## Header Guards

- Problem: Re-definition
    - function and lass can only have one definition in a program
    - dont't define a function twice in same file

#### Method One: C Macros

- more traditional header file 

```
// header.h

//  if file not defined, run file until endif
#ifndef UNIQUE_NAME // "if not define"

// defines "UNIQUE_NAME" token 
// each token must be totally unique
#define UNIQUE_NAME

// file contents

#endif
```

```
// header.h

#ifndef UNIQUE_NAME 
#define UNIQUE_NAME

// file contents

#endif
```

#### Method 2: #pragma once

- not part of c++ standard
- harder for compiler to define

```
// header.h

#pragma once
// file contents
```

## Mulit File Compilation

- example directory:
    - `main.cpp` has the main function 
    - `student.h` has a class declaration
    - `student.cpp` has method definition
    - `gui.h` library that enables windowing
    - `stats.h` various usefull function declarations
    - `stats.cpp` has funtion defintions

- Only ever compile cpp files, never compile header files
    - never use `using` in header files
        - such as `using namespace std;`
- Implementation (cpp) files should never be included

- run `g++ -Wall -std=c++20 main.cpp student.cpp stats.cpp`
    - cpp files include the header files as necessary

- Include header files:
    - `#include "student.h"`
    - same as including a standard library like `<vector>`
    - angle brackets are for standard libraries, quotes are for files

## Namespaces

- Very useful for large projects