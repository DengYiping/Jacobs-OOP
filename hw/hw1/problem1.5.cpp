/*
    JTSK-320111
    problem1.5.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <string>

int main(int argc, char** argv){
    std::string s;
    char c;
    bool b = (bool) (std::cin>>c);
    while(b){
        //continuously read c until hit q
        if(c != 'q')
            s += c;
        else
            break;
        b = (bool) (std::cin>>c);
    }
    std::cout<<s<<std::endl;

}
