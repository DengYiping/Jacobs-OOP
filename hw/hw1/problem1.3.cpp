/*
    JTSK-320111
    problem1.3.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <string>

int sign(int x);
int sign(int x){
    //determin the sign
    if(x > 0)
        return 1;
    else if(x < 0)
        return -1;
    else
        return 0;
}

int main(int argc, char** argv){
    int n;
    std::cin>> n;//read the value
    std::cout<< sign(n) <<std::endl;
}
