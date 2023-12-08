#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void RectangleArea(double length, double breadth) = 0;
    virtual void SquareArea(double side) = 0;
    virtual void CircleArea(double radius) = 0;
};
class Area : public Shape
{
public:
    void RectangleArea(double length, double breadth) override
    {
        double area = length * breadth;
        cout << "Area of rectangle with length " << length << " and breadth " << breadth << " is: " << area << endl;
    }

    void SquareArea(double side) override
    {
        double area = side * side;
        cout << "Area of square with side " << side << " is: " << area << endl;
    }

    void CircleArea(double radius) override
    {
        double area = 3.14159 * radius * radius;
        cout << "Area of circle with radius " << radius << " is: " << area << endl;
    }
};
int main()
{
    Area area;
    area.RectangleArea(10, 10);
    area.SquareArea(7.0);
    area.CircleArea(3.0);
    return 0;
}
