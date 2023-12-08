#include<iostream>
#include <cstring>
using namespace std;

class ShapeDetails
{
    int area;
    int parameter;
    public:
    friend class Square;
    friend class Circle;

};

class Square
{
    int sid_len;
    public:
    Square(int sid_len)
    {
        this->sid_len=sid_len;
    }

    void Cal_par(ShapeDetails sd)
    {
        sd.parameter=sid_len*4;
        cout<<"Parameter of Squre:"<<sd.parameter;
    }
    void Cal_area(ShapeDetails sd)
    {
        sd.area=sid_len*2;
        cout<<"Area of Squre:"<<sd.area;
    }

};

class Circle
{
    int rad_len;
    public:
    Circle(int rad_len)
    {
        this->rad_len=rad_len;
    }
    void Cal_area(ShapeDetails sd)
    {
        sd.area=rad_len*rad_len*3.14;
        cout<<"Area of Circle:"<<sd.area;
    }
    void Cal_par(ShapeDetails sd)
    {
        sd.parameter=rad_len*2*3.14;
        cout<<"Parameter of Circle:"<<sd.parameter;
    }

};

int main()
{
    ShapeDetails sd,sd1;
    Square sq(10);
    Circle cir(9);
    sq.Cal_par(sd);
    sq.Cal_area(sd);
    cir.Cal_par(sd1);
    cir.Cal_area(sd1);




}