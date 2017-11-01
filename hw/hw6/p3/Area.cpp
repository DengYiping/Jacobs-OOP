/*
    CH08-320142
    Area.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

Area::Area(const char* n) {
	strncpy(color, n, 10);
	cout << "Area constructor being called...\n";
}

Area::~Area() {
}

void Area::getColor() const {
	cout << "\n" << color << ": ";
}
