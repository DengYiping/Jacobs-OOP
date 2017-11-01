/*
    CH08-320142
    testTournamentMember.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <string>
#include "TournamentMember.h"

int main(int argc, char** argv){
    TournamentMember a; //default
    TournamentMember b((char*) "Scott",(char*) "Deng",(char*) "1998-08-20", 2, true);
    //enforce conversion
    TournamentMember c(b);
    a.print();
    b.print();
    c.print();
    a.changeLocation("Bremen");
    a.print();
    b.print();
    c.print();
}
