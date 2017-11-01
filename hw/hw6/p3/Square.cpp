/*
    CH08-320142
    Square.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include "Square.h"

Square::Square(const char* n, double side):Area(n), Rectangle(n, side, side) {}
Square::~Square() {}

