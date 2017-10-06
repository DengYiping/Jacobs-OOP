/*
    JTSK-320111
    problem1.2.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <string>

int main(int argc, char** argv){
    int nr;
    float val;
    std::string s;
    std::cin>>nr;
    std::cin>>val;
    std::cin>>s;
    //read the input
    for(int i = 0; i < nr; i++){
        //iterate nr time
        std::cout<<val<<" "<<s<<std::endl;
    }
}
