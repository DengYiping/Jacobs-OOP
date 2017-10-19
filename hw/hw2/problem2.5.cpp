/*
    JTSK-320111
    problem2.5.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <string>
bool isPalindrome(std::string s){
    //recursively solve the problem
    //base case 1 or 0 characters, return true
    if(s.size() < 2)
        return true;
    if(s[0] == s[s.size() - 1])
        return isPalindrome(s.substr(1, s.size() - 2));
    return false;//if it does not match, return false
}

int main(int argc, char** argv){
    std::string input;
    while(std::cin>>input){
        //repeatly receive the input
        if(input == "stop")
            return 0;
        if(isPalindrome(input))
           std::cout<<"It is palindrome."<< std::endl;
        else
           std::cout<<"It is not palindrome." << std::endl;
    } 

}
