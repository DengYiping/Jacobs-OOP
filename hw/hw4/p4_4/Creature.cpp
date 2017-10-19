/*
    CH08-320142
    Creature.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <string>
#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10){
    cout << "calling Creature constructor" << endl;
}
Creature::~Creature(){
    cout << "calling Creature destructor" << endl;
}
void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}

Wizard::Wizard() : distFactor(3){
    cout << "calling Wizard constructor" << endl;
}
Wizard::~Wizard(){
    cout << "calling Wizard destructor" << endl;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Human::Human(): Creature(){
    cout << "calling Human constructor" << endl;
    text = "I am reading as a human.";
}

Human::~Human(){
    cout << "calling Human destructor" << endl;
}

void Human::read() const {
    cout << "I am reading ..." << text << endl;
}

Bug::Bug(): Creature() {
    bugging_to = "human";
}

Bug::~Bug(){
    cout << "calling Bug destructor" << endl;
}

void Bug::bugging() const {
    cout << "I am bugging to " << bugging_to << endl;
}
