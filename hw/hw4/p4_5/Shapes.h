/*
    CH08-320142
    Shapes.h
    Yiping Deng
    y.deng@jacobs-university.de
*/
/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor

        void setName(const std::string&);
        std::string getName() const;
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);

        void setX(double);
        void setY(double);
        double getX() const;
        double getY() const;

		void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
        
        int getEdgeNum() const;
        void setEdgeNum(int n);

};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);

        void setRadius(double r);
        double getRadius() const;

        double perimeter() const;
        double area() const;
};
    
//--custom class

class Rectangle: public RegularPolygon {
    private:
        double width;
        double height;
    public:
        Rectangle();
        Rectangle(const std::string&, double, double, double, double);
        Rectangle(const Rectangle&); //copy construtor

        void setWidth(double w);
        void setHeight(double h);
        double getWidth() const;
        double getHeight() const;

        double perimeter() const;
        double area() const; //the child class will use it
};


class Square: public Rectangle {
    public:
        Square();
        Square(const std::string&, double, double, double);
        Square(const Square&);
        
        double getSide() const;
        void setSide(double s);
        //don't need extra variable, just create mapping
        //don't need perimeter and area, it will
        //derive from its upper class
};


#endif
