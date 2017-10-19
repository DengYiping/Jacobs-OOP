/*
    CH08-320142
    Creature.h
    Yiping Deng
    y.deng@jacobs-university.de
*/
class Creature {
	public:
		Creature();  
		void run() const;
        ~Creature();

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
        ~Wizard();

	private:
		int distFactor;
};

class Human: public Creature {
    public:
        Human();
        void read() const;
        ~Human();
    private:
        std::string text;
};

class Bug: public Creature {
    public:
        Bug();
        ~Bug();
        void bugging() const;
    private:
        std::string bugging_to;
};


