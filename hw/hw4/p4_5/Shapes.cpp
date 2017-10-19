/*
    CH08-320142
    Shapes.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#define PI 3.14
using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

Shape::Shape(){
    name = "unknown";
}//default constructor

Shape::Shape(const Shape& other){
    name = other.name;
}//copy construtor

void Shape::setName(const string& s){
    name = s;
}//setter for name

string Shape::getName() const{
    return name;
}//getter for name


void Shape::printName() const {
	cout << name << endl;
}
//----end of Shape class
CenteredShape::CenteredShape(): Shape("CenteredShape") {
    x = 0.0;
    y = 0.0;
}//default

CenteredShape::CenteredShape(const CenteredShape& other): Shape(other.getName()) {
    x = other.x;
    y = other.y;
}

void CenteredShape::setX(double n){
    x = n;
}

void CenteredShape::setY(double n){
    y = n;
}

void CenteredShape::move(double n_x, double n_y){
    x = n_x;
    y = n_y;
}

double CenteredShape::getX() const {
    return x;
}

double CenteredShape::getY() const {
    return y;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

//----end of CenteredShape class

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon(): CenteredShape("Triangle", 0.0, 0.0) {
    EdgesNumber = 3;
}

RegularPolygon::RegularPolygon(const RegularPolygon& other): CenteredShape(other.getName(), other.getX(), other.getY()) {
    EdgesNumber = other.EdgesNumber; 
}

int RegularPolygon::getEdgeNum() const {
    return EdgesNumber;
}

void RegularPolygon::setEdgeNum(int n){
    EdgesNumber = n;
}
//-----end of RegularPolygon

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Circle::Circle(const Circle& other): CenteredShape(other.getName(), other.getX(), other.getY()) {
    Radius = other.Radius;
}//copy construtor

void Circle::setRadius(double r){
    Radius = r;
}

double Circle::getRadius() const {
    return Radius;
}
//getter and setter

double Circle::perimeter() const {
    return PI * Radius * 2.0;
}

double Circle::area() const {
    return PI * Radius * Radius;
}

//----end of Circle class
Rectangle::Rectangle(const string& s,
        double nx,
        double ny,
        double w,
        double h): RegularPolygon(s, nx, ny, 4) {
    width = w;
    height = h;
}

Rectangle::Rectangle(): RegularPolygon("Rectangle",
       0.0,
       0.0,
       4) {
    width = 0.0;
    height = 0.0;
}

Rectangle::Rectangle(const Rectangle& other): RegularPolygon(other.getName(),
        other.getX(),
        other.getY(),
        4) {
    width = other.width;
    height = other.height;
}
//copy constructor

void Rectangle::setWidth(double w){
    width = w;
}

void Rectangle::setHeight(double h){
    height = h;
}
//setters

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getHeight() const {
    return height;
}

double Rectangle::perimeter() const {
    return (width + height) * 2.0;
}

double Rectangle::area() const {
    return width * height;
}

//getter

//-----end of Rectangle class

Square::Square(const string& n, double nx, double ny, double nside): Rectangle(n, nx, ny, nside, nside) {}
Square::Square(): Rectangle("Square", 0.0, 0.0, 0, 0) {}
Square::Square(const Square& other): Rectangle(other) {}
//directly call the upper class, since we don't need extra data member

double Square::getSide() const {
    return getWidth();
}

void Square::setSide(double s){
    setWidth(s);
    setHeight(s);
}



