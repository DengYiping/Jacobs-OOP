/*
    CH08-320142
    testReferee.cpp
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
    Player b((char*) "Sam", (char*) "Smith", (char*) "1987-10-20", 2,"Defense", 3, false);
    Player c(b);
    c.setNumGoal(20);
    c.setFirstName((char*) "He");

    std::cout << "properly initialized 3 players ----------------" << std::endl;

    Referee r; //create a referee
    std::cout << "\n\n\nadd a to red list" << std::endl;
    r.addToRedCardList(&a);
    r.print();
    std::cout << "\n\n\nadd a to red list again" << std::endl;
    r.addToRedCardList(&a);
    r.print();

    std::cout << "\n\n\nadd b and c to yellow list" << std::endl;
    r.addToYellowCardList(&b);
    r.addToYellowCardList(&c);
    r.print();

    std::cout << "\n\n\nadd again b to yellow list, should be move to red list" << std::endl;
    r.addToYellowCardList(&b);
    r.print();
}
