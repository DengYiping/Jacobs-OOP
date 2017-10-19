/*
    CH08-320142
    Complex.h
    Yiping Deng
    y.deng@jacobs-university.de
*/

class Complex{
    private:
        float re; //the real part
        float im; //the imaginary part
    public:
        Complex();
        Complex(float n_re, float n_im);
        ~Complex();

        Complex(const Complex& other); //copy constructor
        Complex& operator=(const Complex& other);//copy assignment constructor
        //constructor, destructor
        //

        float getRe();
        float getIm();
        void setRe(float n_re);
        void setIm(float n_im);
        //getter and setter

        Complex mul(Complex& other);
        Complex add(Complex& other);
        Complex sub(Complex& other);
        Complex conjugate();


        void print();
};

