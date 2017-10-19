/*
    JTSK-320111
    Critter.h
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
    int age;
    int num_children;
    //add age and number of children property
public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    void setAge(int n_age);
    void setNum_children(int n_num_children);
    int getAge();
    int getNum_children();

	// getter method
	int getHunger();
	// service method
	void print();
};
