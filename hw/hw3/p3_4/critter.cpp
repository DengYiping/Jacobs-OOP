/*
    JTSK-320111
    Critter.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = static_cast<double>(newhunger) / 100;
}

//all the constructors
Critter::Critter(){
    name = "critter";
    height = 10;
    hunger = 0.0;
    boredom = 0;
    thirst = hunger;
}
Critter::Critter(const std::string& n_name): name(n_name){
    height = 10;
    hunger = 0.0;
    boredom = 0;
    thirst = hunger;
}
Critter::Critter(const std::string& n_name, int n_hunger,int n_boredom, int n_height){
    boredom = n_boredom;
    name = n_name;
    hunger = static_cast<double>(n_hunger) / 100;
    height = n_height;
    thirst = hunger;
}
//add another constructor
Critter::Critter(const std::string& n_name, int n_hunger,int n_boredom, int n_height, double n_thirst){
    boredom = n_boredom;
    name = n_name;
    hunger = static_cast<double>(n_hunger) / 100;
    height = n_height;
    thirst = n_thirst;
}



void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger * 100 << "%." << "My boredom is " << boredom << ". My height is " << height << ". My thirst is " << thirst *100 << "%." << endl;
}

int Critter::getHunger() {
	return hunger;
}
