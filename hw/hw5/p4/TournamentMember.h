/*
    CH08-320142
    TournamentMember.h
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <string>
#include <cstring>

class TournamentMember{
    private:
        char first_name[31];
        char last_name[31];
        char dob[11];
        int rank;
        bool isPlaying;
        static std::string location;
    public:
        static void changeLocation(const std::string& loc);
        TournamentMember();
        TournamentMember(char* fname, char* lname, char*dob, int ranking, bool isPlaying);
        TournamentMember(const TournamentMember& other);
        ~TournamentMember();
        char* getFirstName() { return first_name; }
        char* getLastName() { return last_name; }
        char* getDateOfBirth() { return dob; }
        int getRank() { return rank; }
        bool getIsPlaying() { return isPlaying; }

        void setFirstName(char* fname) {
            strcpy(first_name, fname);
        }
        void setLastName(char* lname) {
            strcpy(last_name, lname);
        }
        void setDateOfBirth(char* bstr) {
            strcpy(dob, bstr);
        }
        void setRank(int r) { rank = r; }
        void setIsPlaying(bool i) { isPlaying = i; }
        //inline setter and getter

        void print();
        //print the info
};


class Player: public TournamentMember {
    private:
        int number;
        std::string position;
        int num_goal;
        bool leftfoot;
    public:
        Player();
        Player(char* fname, char* lname, char* dob, int n_number, const std::string& p, int n_num_goal, bool lfoot);
        Player(const Player& other);
        void setNumber(int n) { number = n; }
        void setPosition(const std::string& s) { position = s; }
        void setNumGoal(int n) { num_goal = n; }
        void setLeftFoot(bool b) { leftfoot = b; }
        //inline setter

        int getNumber() { return number; }
        std::string getPosition() { return position; }
        int getNumGoal() { return num_goal; }
        int getLeftFoot() { return leftfoot; }
        //inline getter

        void increGoal() { num_goal++; }
        //inline goal increment

        void print();
};

class Referee: public TournamentMember{
    private:
        int yellowCardCount;
        Player* yellowCardList[50];
        int redCardCount;
        Player* redCardList[50];
        int indexInYellow(Player* p); //return the index of yellow card if exists
        // return -1 if not in it
        int indexInRed(Player* p);
    public:
        Referee();
        Referee(char* fname, char* lname, char* dob);
        //constructors

        bool addToYellowCardList(Player* p);
        bool addToRedCardList(Player* p);
        //required field
        void print(); // pirnt referee name, and the players in the list
};
