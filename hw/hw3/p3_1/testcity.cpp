/*
    CH08-320142
    testcity.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include "City.h"
#include <string>
#include <iostream>
int main(int argc, char** argv){
    City bremen, hamburg, berlin;
    bremen.setName("Bremen");
    hamburg.setName("Hamburg");
    berlin.setName("Berlin");
    bremen.setNum_citizen(1);
    hamburg.setNum_citizen(2);
    berlin.setNum_citizen(3);
    bremen.setCountry("Germany");
    hamburg.setCountry("Germany");
    berlin.setCountry("Germany");
    bremen.setPOI("beautiful");
    hamburg.setPOI("amazing");
    berlin.setPOI("how amazing");

    std::cout << bremen.getName() << " ";
    std::cout << bremen.getNum_citizen() << " ";
    std::cout << bremen.getCountry() << " ";
    std::cout << bremen.getPOI() << std::endl;

    std::cout << hamburg.getName() << " ";
    std::cout << hamburg.getNum_citizen() << " ";
    std::cout << hamburg.getCountry() << " ";
    std::cout << hamburg.getPOI() << std::endl;

    std::cout << berlin.getName() << " ";
    std::cout << berlin.getNum_citizen() << " ";
    std::cout << berlin.getCountry() << " ";
    std::cout << berlin.getPOI() << std::endl;
}
