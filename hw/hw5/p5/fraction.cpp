#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    if(a == b)
        return a;
    else if(a > b)
        return gcd(a - b, b);
    else
        return gcd(b - a, a);
    // Implement GCD of two numbers;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

std::istream& operator>>(std::istream& is, Fraction& f){
    is >> f.num >> f.den;
    //directly input, check later
    if(!is || f.den == 0){ //if it is not valid
        f.num = 1;
        f.den = 1;
        return is;
    }
    int tmp_gcd = f.gcd(f.num, f.den);
    f.num = f.num / tmp_gcd;
    f.den = f.den / tmp_gcd;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Fraction& f) {
    os << f.num << "/" << f.den;//don't print endl
    return os;
}

Fraction operator*(const Fraction& f1, const Fraction& f2){
    return Fraction(f1.num * f2.num, f1.den * f2.den);
}

Fraction operator/(const Fraction& f1, const Fraction& f2){
    return Fraction(f1.num * f2.den, f1.den * f2.num); //calculate the division
}

