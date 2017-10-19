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
	hunger = newhunger;
}

void Critter::setAge(int n_age){
    age = n_age;//set the age
}
void Critter::setNum_children(int n_num_children){
    num_children = n_num_children;
}

int Critter::getAge(){
    return age;
}

int Critter::getNum_children(){
    return num_children;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << ". My age is " << age << ". I have " << num_children <<" children." << endl;
}

int Critter::getHunger() {
	return hunger;
}
