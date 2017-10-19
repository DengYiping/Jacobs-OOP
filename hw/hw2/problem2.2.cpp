/*
    JTSK-320111
    problem2.2.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <string>

using namespace std;

void swap(int&, int&);
void swap(double&, double&);
void swap(char*&, char*&);

void swap(int& a, int& b){
    //magical trick of XOR operations
    a = a^b;
    b = a^b;
    a = a^b;
}

void swap(double& a, double& b){
    //use the third variable to swap
    double tmp = a;
    a = b;
    b = tmp;
}

void swap(char*& a, char*& b){
    //use a third variable to swap
    char* tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, char** argv){
    //test code from the homework
    int a = 5, b = 10;
    double x = 5.2, y = 10.7;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b <<endl;
    cout << "x=" << x << ", y=" << y <<endl;
    cout << "str1=" << str1 << ", str2=" << str2 <<endl;

    swap(a,b);
    swap(x,y);
    swap(str1,str2);

    cout << "a=" << a << ", b=" << b <<endl;
    cout << "x=" << x << ", y=" << y <<endl;
    cout << "str1=" << str1 << ", str2=" << str2 <<endl;
    return 0;

}
