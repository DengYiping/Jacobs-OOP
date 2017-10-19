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
    int age;
    int num_children;
 
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
    cout << "Age: "; 
    cin >> age;
    c.setAge(age);
    cout << "Number of Children: ";
    cin >> num_children;
    c.setNum_children(num_children);


	cout << "You have created:" << endl;
	c.print();
        return 0;
}
