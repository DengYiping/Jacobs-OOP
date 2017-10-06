# Intro C++
## History
 - C++ is an object-oriented Extension to C
 - 1980's Bjarne Stroustrup creates C successor
 - 1998 C++ finally becomes ISO standard
 - 2003 C++03 comes out
 - 2011 C++11 comes out
 - 2014 C++14
 - 2017 C++17

## C is almost a complete subset of C++
 - char constants: 1 byte in C++, 4 byte in C
 - older C++ standards required prototypes
## What is OOP
 - OOP is a programming paradign, i.e., a way to organize the solution
 - Pro: Increse code reuse
 - Con: Difficult to understand

## Conerstones of OOP
 - Data abstraction
 - Encapsulation(hiding of internal workings)
 - Inheritance
 - Polymorphism
## getline and cin
```
char buf[50];
string s;
cin.getline(buf, 50);
s = string(buf);

string str;
getline(cin, str);
```
Either way is OK, this is used to prevent the pitfall of using cin directly. 
