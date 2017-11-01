/*
    CH08-320142
    testvirtual.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
#include <cstdlib>
#include <ctime>
/*
 * Class structure of this program
 *
 *
 *                     Area Class(abstract class)
 *                     //              \\
 *                    //                \\
 *                  Rectangle         Circle
 *                //                      \\
 *           Square                        \\
 *                                       Ring
 */
 
const int num_obj = 20;
int main() {
	Area *list[num_obj];						// (1)
    //a list storing the abstract class type
    //by pointers
    //this allows polymorphism
    //the num_obj is defined as a const
	int index = 0;								// (2)
    //the beginning of a list
    //used in the while loop (7) and (8)
	double sum_area = 0.0;						// (3)
    double sum_perimeter = 0.0;
    //let the sum be 0 to start accumulation

    //start random number seed
    srand(static_cast<unsigned int>(time(0)));
    const char* colors[4] = {"RED", "GREEN", "BLUE", "YELLOW"};

    Area* ptr;
    for(int i = 0; i < num_obj; i++){
        switch(rand() % 4){
            case 0:
                ptr = new Circle(colors[rand() % 4], rand() % 50 + 1);
                break;
            case 1:
                ptr = new Rectangle(colors[rand() % 4], rand() % 50 + 1, rand() % 50 + 1);
                break;
            case 2:
                ptr = new Square(colors[rand() % 4], rand() % 50 + 1);
                break;
            case 3:
                ptr = new Ring(colors[rand() % 4], rand() % 50 + 1, rand() % 50 + 1); 
                break;
            default:
                break;
        }
        list[i] = ptr;
    }
    //randomly build the obj list

	while (index < num_obj) {					// (7)
        //make sure the index is inside the bound

		(list[index])->getColor();				// (8)
        //print out the color
        //call the function in Area class 
        sum_perimeter += list[index]->calcPerimeter();

		sum_area += (list[index++])->calcArea();
        //self incrementation and calculate the sum
        //it is calling the corresponding virtual function
        //according to v_table
        //of all the area
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)
    // giving the sum of all the area
    cout << "\nThe total perimeter is "
        << sum_perimeter << " units " << endl;
    for(int i = 0; i < num_obj; i++){
        delete list[i];
    }//release the resources
	return 0;
}
