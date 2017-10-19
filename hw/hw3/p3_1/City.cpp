/*
    CH08-320142
    City.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <string>
#include "City.h"

void City::setName(const std::string& n_name){
    name = n_name;
}

void City::setNum_citizen(int n_num_citizen){
    num_citizen = n_num_citizen;
}

void City::setCountry(const std::string& n_country){
    country = n_country;
}

void City::setPOI(const std::string& poi){
    POI = poi;
}

//setter functions
//
//
//
//getter functions
std::string City::getName(){
    return name;
}

int City::getNum_citizen(){
    return num_citizen;
}

std::string City::getCountry(){
    return country;
}

std::string City::getPOI(){
    return POI;
}

