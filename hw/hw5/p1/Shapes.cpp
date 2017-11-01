// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Hexagon::Hexagon(): RegularPolygon("hexagon", 0.0, 0.0, 6) {
    this->side = 0.0;
    this->c = YELLOW;
} // construct

Hexagon::Hexagon(const Hexagon& other): RegularPolygon("hexagon", 0.0, 0.0, 6) {
    this->side = other.side;
    this->c = other.c;
} //construct

Hexagon::Hexagon(double side, Color c): RegularPolygon("hexagon", 0.0, 0.0, 6) {
    this->side = side;
    this->c = c;
}//construct

double Hexagon::perimeter(){
    return side * 6.0; //calculate perimeter
}

double Hexagon::area(){
    const double t = 3.0 * sqrt(3.0) / 2.0;
    return t * side * side; //calculate area
}
