/*
    CH08-320142
    testcreature.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "Creating a Human." << endl;
    Human h;
    h.run();
    h.read();

    cout << "Creating a Bug. " << endl;
    Bug b;
    b.run();
    b.bugging();


    return 0;
}
