/*
    JTSK-320111
    problem1.4.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <string>
int mycount(int x, int y);
int mycount(const std::string& x, char c);
//type def
int mycount(int x, int y){
    return x - y;
}

int mycount(const std::string& x, char c){
    int count = 0;
    for(unsigned int i = 0; i < x.size(); i++){
        if(x[i] == c)
            count++;
    }
    return count;
}

//function body of two overloaded functions


int main(int argc, char** argv){
    int x, y;
    std::cout<<"Enter two numbers"<<std::endl;
    std::cin>>x;
    std::cin>>y;
    std::cout<<"result: "<<mycount(x, y)<< std::endl;
    //integer func
    std::string s;
    char c;
    //string func
    std::cout<<"Enter a string and a char"<<std::endl;
    std::cin>>s;
    std::cin>>c;
    std::cout<<"result: "<<mycount(s, c)<<std::endl;

}
