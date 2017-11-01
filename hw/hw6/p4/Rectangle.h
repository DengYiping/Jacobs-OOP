/*
    CH08-320142
    Rectangle.h
    Yiping Deng
    y.deng@jacobs-university.de
*/
#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"

class Rectangle : public virtual Area {
	public:
		Rectangle(const char *n, double a, double b);
		~Rectangle();
		double calcArea() const;
        double calcPerimeter() const;
	private:
		double length;
		double width;
};

#endif
