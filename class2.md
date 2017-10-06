# C++ Extension to C

## Inline functions
Available in C starting from C99. 

When the compiler inlines a function, it will simply copy it into the place.

Inline function is faster, but the binary code is bigger. 

Another example is to use macro
```
#define NAME replacement
#define NAME(variable) replacement(variable)
```

Inline function is not enforced by compiler. 

## Function Overloading
Has different parameter lists.
It does not matter of the return value.
In C++, name lookup happens before type checking. The innor scope function will hide the outer scope even if the parameter lists does not match.

## Pass by value and Pass by reference
Note: passing a pointer is passing by value.

Reference variable `int& ref = a`
The idea of using reference is to avoid copies and to return additional informations.

Const reference is recommended to check algorithm correctness at compile time. 

## Dynamic Memory Allocation in C++
In C++, `new` and `delete` are used to allocate the memory.
```
int* ptr_1 = new int;
char* ptr_2 = new char;
int** ptr_3 = new int*;
char** ptr_4 = new char*;
int* ptr_5 = new int(12);
char* ptr_6 = new char('X');

int* ptr_7 = new int[10];// C++ 9x does not allow to initialize elements
char* ptr_8 = new char[8] {'0', 'K'}; //C++11
```
Note: use `-std=C++11` to allow C++11 standard
Note: delete `delete ptr_1; delete [] ptr_7;` To delete allocated array, use delete [].

## New Header File
stdlib.h and math.h is changed to cstdlib and cmath, and it will wrapped into std name space.


