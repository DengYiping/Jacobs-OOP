/*
    CH08-320142
    testPlayer.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <string>
#include "TournamentMember.h"

int main(int argc, char** argv){
    TournamentMember::changeLocation("Bremen");
    //change to Bremen
    Player a; //default player
    Player b((char*) "Sam",(char*) "Smith",(char*) "1987-10-20", 2, "Defense", 3, false);
    //force the conversion to bypass warning
    Player c(b);
    c.setNumGoal(20);
    c.setFirstName((char*) "He");
    a.print();
    b.print();
    c.print();
}
