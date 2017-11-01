/*
    CH08-320142
    Square.h
    Yiping Deng
    y.deng@jacobs-university.de
*/
#ifndef SQUARE_H
#define SQUARE_H 
#include "Rectangle.h"

class Square: public Rectangle {
    public:
        Square(const char* n, double side);
        ~Square();//destructor
    private:
};

        //we don't need calcArea and calcPerimeter, just use the parent one
#endif
