/*
    CH08-320142
    Circle.h
    Yiping Deng
    y.deng@jacobs-university.de
*/
#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public virtual Area {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const;
        double calcPerimeter() const; //specify the  keyword to do the
        //compile time checking
	private:
		double radius;
};

#endif
