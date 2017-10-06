/*
    JTSK-320111
    problem1.6.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
void init();
int getrand();
void init(){
    srand(static_cast<unsigned int>(time(0)));
}
int getrand(){
    return 1 +  rand() % 100;
}
//some helper function wrapping on top of c functions

int main(int argc, char** argv){
    int input_n;
    init();
    std::cout<<"enter a number from 1 to 100, other number to exit"<<std::endl;
    int r_n = getrand();
    int count = 0;
    while(std::cin>>input_n){
        //continuously read
        if(input_n < 1 || input_n > 100)
            //stop the program
            break;
        else{
            //if correct, tell them. If not, tell them the right answer.1
            count++;
            if(r_n == input_n){
                std::cout<<"It is correct, in "<<count<< " times" <<std::endl;
                break;
            }
            else if(r_n < input_n)
                std::cout<<"It is smaller"<<std::endl;
            else
                std::cout<<"It is bigger"<<std::endl;
        }
    }

}
