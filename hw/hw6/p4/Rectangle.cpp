/*
    CH08-320142
    Rectangle.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	return length*width;
}

double Rectangle::calcPerimeter() const{
    std::cout << "calcPerimeter is called in Rectangle" << std::endl;
    return (length + width) * 2;
}
