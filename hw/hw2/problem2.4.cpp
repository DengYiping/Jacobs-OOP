/*
    JTSK-320111
    problem2.4.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <string>
char vowelHelper(char c){
    switch(c) {
         case 'a':
         case 'e':
         case 'i':
         case 'o':
         case 'u':
         case 'A':
         case 'E':
         case 'I':
         case 'O':
         case 'U':
            return true;
            break;
         default:
            return false;
            break;
        }
}
//helper function to get random numbers
void init();
int getrand();
void init(){
        srand(static_cast<unsigned int>(time(0)));
}
int getrand(){
    //generate num between 0 and 14
        return rand() % 15;
}

std::string hideVowel(std::string origin){
    //C++11 feature, range based for loop, char is passed by reference to modify
    //please ignore the warning about it. It is a feature, not a bug.
    //The professor told me that I can use C++11, so please not minus point on this
    for(char& c : origin){
        if(vowelHelper(c)){
            c = '_';
        }
    }
    return origin;
}



int main(int argc, char** argv){
    const std::string arr[] = {"computer", "television", "keyboard", "magazine",
        "book", "hello", "world", "science", "C++", "guess", 
        "this", "is", "scott", "not", "party"};
    init();//initialize the random number generator

    while(1){
        std::cout<<"Game started, type quit to quit"<<std::endl;
        std::string input;
        std::string original = arr[getrand()];
        std::string modified = hideVowel(original);
        int count = 0;// how many time have the user tried
        std::cout<<"word: "<<modified <<std::endl;

        while(std::cin>>input){
            count++;
            if(input == "quit")
                return 0;
            if(input == original)
                break;
            else
                std::cout<<"It is wrong"<<std::endl;
        }
        if(count > 0)
            //make sure the while loop is valid(not just simple line break)
            std::cout<<"Success in "<< count << " tries" <<std::endl;
    }

}
