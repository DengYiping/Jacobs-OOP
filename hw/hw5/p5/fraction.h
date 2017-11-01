// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_
#include <iostream>
class Fraction {
    friend std::istream& operator>>(std::istream& is, Fraction& f);
    friend Fraction operator*(const Fraction& f1, const Fraction& f2);
    friend Fraction operator/(const Fraction& f1, const Fraction& f2);
    friend std::ostream& operator<<(std::ostream& os, const Fraction& f);
    //allow member access

private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator

    static int gcd(int a, int b);        // calculates the gcd of a and b
    //make it static as a auxillary function

    static int lcm(int a, int b);
    //make it static as a auxillary function

public:
    Fraction();                    // empty constructor
    Fraction(int, int = 1);     // constructor taking values for fractions and
                                // integers. Denominator by default is 1
};

//operator overloading
std::istream& operator>>(std::istream& is, Fraction& f);
std::ostream& operator<<(std::ostream& os, const Fraction& f);
Fraction operator*(const Fraction& f1, const Fraction& f2);
Fraction operator/(const Fraction& f1, const Fraction& f2);


#endif /* FRACTION_H_ */
