/*
    CH08-320142
    TournamentMember.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include "TournamentMember.h"
#include <cstring>
#include <string>
#include <iostream>

std::string TournamentMember::location = "Nowhere";
void TournamentMember::changeLocation(const std::string& loc){
    location = loc;
    //simply change the static member location
}

TournamentMember::TournamentMember(){
    std::cout << "default constructor is called" << std::endl;
    //initialize the class
    strcpy(first_name, "John");
    strcpy(last_name, "Doe");
    strcpy(dob, "1998-08-20");
    //directly acccess the array
    rank = 0;
    isPlaying = false;
}

TournamentMember::TournamentMember(char* fname, char* lname, char* dateofbirth, int n_rank, bool n_isPlaying){
    std::cout << "normal constructor is called" << std::endl;
    strcpy(first_name, fname);
    strcpy(last_name, lname);
    strcpy(dob, dateofbirth);
    //directly copying
    rank = n_rank;
    isPlaying = n_isPlaying;
}

TournamentMember::TournamentMember(const TournamentMember& other){
    std::cout << "copy constructor is called" << std::endl;
    strcpy(first_name, other.first_name);
    strcpy(last_name, other.last_name);
    strcpy(dob, other.dob);
    rank = other.rank;
    isPlaying = other.isPlaying;
    //simply copy every field
}

TournamentMember::~TournamentMember(){
    std::cout << "destructor is called, but we have nothing to destroy since it is all statically allocated" << std::endl;
}

void TournamentMember::print(){
    std::cout << "first name: " << first_name << std::endl;
    std::cout << "last name: " << last_name << std::endl;
    std::cout << "date of birth: " << dob << std::endl;
    std::cout << "is playing: " << isPlaying << std::endl;
    std::cout << "rank: " << rank << std::endl;
    std::cout << "location: " << location << std::endl;
    //print all the info
}

//----------- Player class
Player::Player(): TournamentMember() {
    //set the default value
    number = 0;
    position = "Nowhere";
    num_goal = 0;
    leftfoot = false;
}

Player::Player(char* fname, char* lname, char* bod, int n_number, const std::string& p, int n_goal, bool isLeftfoot):TournamentMember(fname, lname, bod, 0, true) {
    //parameterized constructor,
    number = n_number;
    position = p;
    num_goal = n_goal;
    leftfoot = isLeftfoot;
}

Player::Player(const Player& other): TournamentMember(other) {
    //call the super TournamentMemeber constructor
    number = other.number;
    position = other.position;
    num_goal = other.num_goal;
    leftfoot = other.leftfoot;
}

void Player::print(){
    TournamentMember::print();
    //call the super print function
    std::cout << "number: " << number << std::endl;
    std::cout << "position: " << position << std::endl;
    std::cout << "number of goal: " << num_goal << std::endl;
    std::cout << "is left footed: " << leftfoot << std::endl;
}
