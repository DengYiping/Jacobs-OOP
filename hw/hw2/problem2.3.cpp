/*
    JTSK-320111
    problem2.3.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <string>

void add_min(int* arr, int n){
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min)
            min = arr[i];
    }//find the min
    for(int i = 0; i < n; i++){
        arr[i] += min;
    }//add the min
}

void deallocate(int* arr){
    delete [] arr;
}

int main(int argc, char** argv){
    int n;
    std::cout<< "Input n with n int"<<std::endl;
    std::cin>>n;

    int* arr = new int [n];

    
    for(int i  = 0; i < n; i++){
        std::cin>> arr[i];
        //fill the dynamic allocated array
    }

    add_min(arr, n);//call the functions

    std::cout<<"Result"<<std::endl;

    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout<<std::endl;

    //output the result
    deallocate(arr);
    //free the resource


}
