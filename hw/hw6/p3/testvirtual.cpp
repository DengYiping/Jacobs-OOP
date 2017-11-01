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
 
const int num_obj = 7;
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
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
    //allocating a Ring on stack
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
    //allocating a Circle on stack
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
    //allocating a Rectangle on stack
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
    //allocating a Circle on stack
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
    //allocating another Rectangle on stack
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
    //allocating another Ring on stack
    cout << "Creating Square: ";
    Square rainbow_square("RAINBOW", 20);

    /* get the pointer of all the Area object on stack
     * store them in the list
     */

	list[0] = &blue_ring;						// (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
    list[6] = &rainbow_square;
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
	return 0;
}
