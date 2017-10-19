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
	double hunger;
	int boredom;
    int height;
    //add age and number of children property
public: // business logic methods are public
	// setter methods
    Critter();
    Critter(const std::string& n_name);
    Critter(const std::string& n_name, int hunger,int boredom, int height = 15);//set the default value for the constructor
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);

	// getter method
	int getHunger();
	// service method
	void print();
};
