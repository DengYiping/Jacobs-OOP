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
}
