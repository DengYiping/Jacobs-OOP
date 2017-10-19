/*
    CH08-320142
    creature.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include <string>


using namespace std;

class Creature {
	public:
		Creature();  
		void run() const;
        ~Creature();

	protected:
		int distance;
};

Creature::Creature(): distance(10){
    cout << "calling Creature constructor" << endl;
}
Creature::~Creature(){
    cout << "calling Creature destructor" << endl;
}

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  
//Creature class end


class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
        ~Wizard();

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3){
    cout << "calling Wizard constructor" << endl;
}
Wizard::~Wizard(){
    cout << "calling Wizard destructor" << endl;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
//Wizard class end

class Human: public Creature {
    public:
        Human();
        void read() const;
        ~Human();
    private:
        std::string text;
};

Human::Human(): Creature(){
    cout << "calling Human constructor" << endl;
    text = "I am reading as a human.";
}

Human::~Human(){
    cout << "calling Human destructor" << endl;
}

void Human::read() const {
    cout << "I am reading ..." << text << endl;
}
//end of Human class

class Bug: public Creature {
    public:
        Bug();
        ~Bug();
        void bugging() const;
    private:
        std::string bugging_to;
};

Bug::Bug(): Creature() {
    bugging_to = "human";
}

Bug::~Bug(){
    cout << "calling Bug destructor" << endl;
}

void Bug::bugging() const {
    cout << "I am bugging to " << bugging_to << endl;
}
//class Bug end


int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "Creating a Human." << endl;
    Human h;
    h.run();
    h.read();

    cout << "Creating a Bug. " << endl;
    Bug b;
    b.run();
    b.bugging();


    return 0;
} 
