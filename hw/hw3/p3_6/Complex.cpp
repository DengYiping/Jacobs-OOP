/*
    CH08-320142
    Complex.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include "Complex.h"
#include <iostream>

Complex::Complex(){
    re = 0.0;
    im = 0.0;
}

Complex::Complex(float n_re, float n_im): re(n_re), im(n_im) {} 

//copy constructor
Complex::Complex(const Complex& other){
    re = other.re;
    im = other.im;
}

//set the proper imagnary and real part

Complex::~Complex(){} //empty destructor

float Complex::getRe(){
    return re;
}

float Complex::getIm(){
    return im;
}

void Complex::setRe(float n_re){
    re = n_re;
}

void Complex::setIm(float n_im){
    im = n_im;
}

//getter and setter method

void Complex::print(){
    std::cout << re;
    if(im < 0.0)
        std::cout << " - " << -1.0 * im << "i" << std::endl;
    else if(im > 0.0)
        std::cout << " + " << im << "i" <<std::endl;
    else
        std::cout << std::endl;//if there is no imagnary part
}

    //get the proper sign

//all the operation on Complex number
Complex Complex::conjugate(){
    return Complex(re, im * -1.0);
}

Complex Complex::add(Complex& other){
    return Complex(re + other.re, im + other.im);
}

Complex Complex::sub(Complex& other){
    return Complex(re - other.re, im - other.im);
}

Complex Complex::mul(Complex& other){
    float new_re = re * other.re - im * other.im;
    float new_im = re * other.im + im * other.re;
    return Complex(new_re, new_im);
}

//copy assignment operator
Complex& Complex::operator=(const Complex& other){
    re = other.re;
    im = other.im;
    return *this;
}

