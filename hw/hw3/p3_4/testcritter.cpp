/*
    JTSK-320111
    testcritter.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
    int boredom;
    int height;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

    cout << "Height: ";
    cin >> height;
    cout << "Boredom: ";
    cin >> boredom;
    double thirst;
    cout << "Thirst: ";
    cin >> thirst;


    Critter tmp(name, hunger, boredom, height);
    Critter tmp1(name);
    Critter tmp2(name, hunger, boredom);
    Critter tmp4;
    Critter tmp5(name, hunger, boredom, height, thirst);

    


	cout << "You have created:" << endl;
	c.print();
    tmp.print();
    tmp1.print();
    tmp2.print();
    tmp4.print();
    tmp5.print();
        return 0;
}
