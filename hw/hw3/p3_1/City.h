/*
    CH08-320142
    City.h
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <string>
#include <iostream>

class City{
    private:
        std::string name;
        int num_citizen;
        std::string country;
        std::string POI;
        //private member
    public:
        void setName(const std::string& name);
        void setNum_citizen(int num);
        void setCountry(const std::string& c_name);
        void setPOI(const std::string& n_POI);
        //setter function, pass by refernce by default
        std::string getName();
        int getNum_citizen();
        std::string getCountry();
        std::string getPOI();
};
        
