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

    char c; //command from the user
    while(cin >> c){
        //use if-else to create extra scope
        if(c == 'q')
            break;//stop the loop
        else if(c == 'w'){
            Wizard* w_ptr = new Wizard;
            w_ptr->run();
            w_ptr->hover();
            delete w_ptr;//free resources
        }
        else if(c == '1'){
            Human* h_ptr = new Human;
            h_ptr->run();
            h_ptr->read();
            delete h_ptr;//free
        }
        else if(c == '2'){
            Bug* b_ptr = new Bug;
            b_ptr->run();
            b_ptr->bugging();
            delete b_ptr;//free resources
        }
        else
            continue;//ignore other character
    }//end of while loop

    return 0;
}
