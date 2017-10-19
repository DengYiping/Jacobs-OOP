/*
    CH08-320142
    Box.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include "Box.h"
#include <iostream>

Box::Box(){
    height = 0;
    width = 0;
    depth = 0;
}

Box::Box(float h, float w, float d){
    height = h;
    width = w;
    depth = d;
}

Box::~Box(){
}

//constructor and destructor

float Box::getHeight(){
    return height;
}

float Box::getWidth(){
    return width;
}

float Box::getDepth(){
    return depth;
}

//getter method
//

void Box::setHeight(float h){
    height = h;
}
void Box::setWidth(float w){
    width = w;
}

void Box::setDepth(float d){
    depth = d;
}

void Box::print(){
    std::cout << "height: " << height;
    std::cout << " width: " << width;
    std::cout << " depth: " << depth;
    std::cout << " volume: " << height * width * depth << std::endl;
}

float Box::volume(){
    return height * width * depth;
}

//setter method



