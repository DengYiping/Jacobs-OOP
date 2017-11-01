/*
    CH08-320142
    testfraction.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    //enter two fraction
    Fraction a;
    Fraction b;
    cin >> a;
    cin >> b;
    cout << "the product: " << a * b << endl;
    cout << "the quotient: " << a / b << endl;
    Fraction diff = a - b; //using assignment operator
    Fraction sum = a + b;
    cout << "the difference: " << diff << endl;
    cout << "the sum: " << sum << endl;

}
