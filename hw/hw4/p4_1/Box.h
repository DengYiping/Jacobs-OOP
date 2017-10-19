/*
    CH08-320142
    Box.h
    Yiping Deng
    y.deng@jacobs-university.de
*/
class Box{
    private:
        float height;
        float width;
        float depth;
    public:
        Box();
        Box(float, float, float);
        ~Box();
        //constructors and destructors
        //
        //property and setter field
        float getHeight();
        float getWidth();
        float getDepth();
        void setHeight(float);
        void setWidth(float);
        void setDepth(float);
        void print();
        float volume();

};

