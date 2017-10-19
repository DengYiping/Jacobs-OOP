/*
    CH08-320142
    testbox.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include "Box.h"
#include <iostream>

using namespace std;
int main(int argc, char** argv){
    int n_box;
    cout <<"Number of boxes: ";
    cin >> n_box;

    Box* boxes = new Box[n_box];
    for(int i = 0; i < n_box; i++){
        float height;
        float width;
        float depth;
        cout <<"Height: ";
        cin >> height;
        cout <<"Width: ";
        cin >> width;
        cout <<"Depth: ";
        cin >> depth;
        //input from keyboard

        
        boxes[i].setHeight(height);
        boxes[i].setWidth(width);
        boxes[i].setDepth(depth);
    }

    //created successfully

    float sum = 0.0;
    for(int i = 0; i < n_box; i++){
        boxes[i].print();
        sum += boxes[i].volume();
    }

    cout << "the total volume is " << sum << endl;
    delete [] boxes;
    
} 
