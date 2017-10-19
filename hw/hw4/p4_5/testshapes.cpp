/*
    CH08-320142
    testshapes.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include "Shapes.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);

  r.printName();
  c.printName();

  Circle c2("second circle", 2, 3, 4);
  c2.printName();

  cout << "perimeter: " << c2.perimeter() << ", area: " << c2.area() << endl;

  Rectangle rt("first rectangle", 4, 7, 1, 2);
  rt.printName();
  cout << "perimeter: " << rt.perimeter() <<", area: " << rt.area() << endl;

  Square sq("first square", -2, 7, 1.5);
  sq.printName();
  cout << "perimeter: " << sq.perimeter() <<", area: " << sq.area() << endl;


}
