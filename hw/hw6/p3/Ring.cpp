/*
    CH08-320142
    Ring.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner) 
					: Area(n), Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	return (Circle::calcArea()-
		(innerradius * innerradius * 3.141593));
}

double Ring::calcPerimeter() const {
    std::cout << "calPerimeter is called in Ring" << std::endl;
    return (Circle::calcPerimeter() + innerradius * 2.0 * 3.141593);
}
