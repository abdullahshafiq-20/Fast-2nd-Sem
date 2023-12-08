#include<iostream>
#include <cstring>
#include <cmath>
using namespace std;
class Obtusengle;
class AcuteAngle
{
    float h;
    float b;
    float angle;
    public:
    AcuteAngle(){}
    AcuteAngle(float h,float b,float angle)
    {
        this->h=h;
        this->b=b;
        this->angle=angle;
    }
    void friend Area_Triangle(AcuteAngle a, Obtusengle o);


};
class Obtusengle
{
    float h;
    float b;
    float angle;
    public:
    Obtusengle(){}
    Obtusengle(float h,float b,float angle)
    {
        this->h=h;
        this->b=b;
        this->angle=angle;
    }
    void friend Area_Triangle(AcuteAngle a, Obtusengle o);

};
void Area_Triangle(AcuteAngle a, Obtusengle o)
{
    float area;
    area=(a.h*a.b*sin(a.angle))/2;
    cout<<"Area of Acute Triangle: "<<area<<endl;
    area=(o.h*o.b*sin(o.angle))/2;
    cout<<"Area of Obtusengle: "<<area<<endl;


}

int main()
{
    AcuteAngle a(12,56,78);
    Obtusengle o(34,67,110);
    Area_Triangle(a,o);
 
}