/*
    CH08-320142
    Circle.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle...";
	return radius * radius * 3.141593;
}

double Circle::calcPerimeter() const {
    std::cout << "calcPerimeter() is called in Circle" << std::endl;
    return radius * 2.0 * 3.141593;
}
