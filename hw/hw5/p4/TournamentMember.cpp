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
    number = 0;
    position = "Nowhere";
    num_goal = 0;
    leftfoot = false;
}

Player::Player(char* fname, char* lname, char* bod, int n_number, const std::string& p, int n_goal, bool isLeftfoot):TournamentMember(fname, lname, bod, 0, true) {
    number = n_number;
    position = p;
    num_goal = n_goal;
    leftfoot = isLeftfoot;
}

Player::Player(const Player& other): TournamentMember(other) {
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

//------start of Referee class
Referee::Referee(): TournamentMember() {
    yellowCardCount = 0;
    redCardCount = 0;
    //set the count to 0
}

Referee::Referee(char* fname, char* lname, char* dob): TournamentMember(fname, lname, dob, 0, false) {
    yellowCardCount = 0;
    redCardCount = 0;
}

int Referee::indexInYellow(Player* p) {
    if(yellowCardCount == 0)
        return -1; //it is empty
    for(int i = 0; i < yellowCardCount; i++){
        if(yellowCardList[i] == p)
            return i;
    }
    return -1; // if not in the list
}
int Referee::indexInRed(Player* p) {
    if(redCardCount == 0)
        return -1;
    for(int i = 0; i < redCardCount; i++) {
        if(redCardList[i] == p)
            return i;
    }
    return -1;
}//return the last occurance of this player

bool Referee::addToYellowCardList(Player* p) {
    int appeared_idx = indexInYellow(p);
    if(appeared_idx == -1){
        if(yellowCardCount < 50){
            yellowCardList[yellowCardCount] = p;
            yellowCardCount++;
            return true;
        } else {
            return false; // the array is full
        }
    } else {
        for(int i = appeared_idx; i < yellowCardCount - 1; i++){
                yellowCardList[i] = yellowCardList[i+1];
        } //truncate and remove
        yellowCardCount--;
        addToRedCardList(p);
        return true;
    }
}

bool Referee::addToRedCardList(Player* p){
    if(indexInRed(p) != -1)
        return true;
    if(redCardCount >= 50)
        return false; //it is full
    redCardList[redCardCount] = p;
    redCardCount++;
    return true;
}

void Referee::print(){
    TournamentMember::print();
    //pirnt the info
    std::cout << std::endl;

    std::cout << "red card list:" << std::endl;
    for(int i = 0; i < redCardCount; i++){
        std::cout << "\n#" << i + 1 << " on the list: " << std::endl;
        redCardList[i]->print();
    }

    std::cout << std::endl;
    std::cout << "yellow card list:" << std::endl;
    for(int i = 0; i < yellowCardCount; i++){
        std::cout <<"\n#" << i + 1 << " on the list: " << std::endl;
        yellowCardList[i]->print();
    }
}
