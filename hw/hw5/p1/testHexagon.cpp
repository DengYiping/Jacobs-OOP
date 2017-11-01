#include <iostream>
#include "Shapes.h"
#include <string>

int main(int argc, char** argv){
    Hexagon red_hex(2, RED);
    Hexagon yellow_hex(10, YELLOW);
    Hexagon copied(yellow_hex);
    std::cout << "red hexagon:" << std::endl;
    std::cout << "area: " << red_hex.area() << std::endl;
    std::cout << "perimeter: " << red_hex.perimeter() << std::endl;
    
    std::cout << "yellow hexagon:" << std::endl;
    std::cout << "area: " << yellow_hex.area() << std::endl;
    std::cout << "perimeter: " << yellow_hex.perimeter() << std::endl;

    std::cout << "copied hexagon:" << std::endl;
    std::cout << "area: " << copied.area() << std::endl;
    std::cout << "perimeter: " << copied.perimeter() << std::endl;
}
