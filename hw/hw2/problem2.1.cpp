/*
    JTSK-320111
    problem2.1.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <string>
int myfirst(int arr[], int size);
double myfirst(double arr[], int size);
char myfirst(char arr[], int size);
//definition
int myfirst(int arr[], int size){
    for(int i = 0; i < size; i++){
        if( arr[i] > 0 && arr[i] % 2 == 1)
            return arr[i];
    }
    return -1;
}

double myfirst(double arr[], int size){
    int tmp;
    double diff;

    for(int i = 0; i < size; i++){
        //read the largest integer
        tmp = static_cast<int>(arr[i]);
        diff = arr[i] - tmp;

        if(arr[i] > 0.0 && diff < 0.001 && diff > -0.001)
            return arr[i];
    }
    return -1.1;
}
bool vowelHelper(char c){
    //identify if it is a vowel
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
char myfirst(char arr[], int size){
    for(int i = 0; i < size; i++){
        //call the helper
        if(vowelHelper(arr[i]))
            return arr[i];
    }
    return '0';
}


int main(int argc, char** argv){
    int n;
    std::cout<<"Enter n with n int"<<std::endl;
    std::cin>>n;
    int i_arr[n];
    for(int i = 0; i < n; i++){
        std::cin>>i_arr[i];
    }
    //input
    std::cout<<"the result is "<<myfirst(i_arr, n)<<std::endl;

    std::cout<<"Enter n with n double"<<std::endl;
    std::cin>>n;
    double d_arr[n];
    for(int i = 0; i < n; i++){
        std::cin>>d_arr[i];
    }
    //input
    std::cout<<"the result is "<<myfirst(d_arr, n)<<std::endl;

    std::cout<<"Enter n with n chars"<<std::endl;
    std::cin>>n;
    char c_arr[n];
    for(int i = 0; i < n; i++){
        std::cin>>c_arr[i];
    }
    //input
    std::cout<<"the result is "<<myfirst(c_arr, n)<<std::endl;

}
