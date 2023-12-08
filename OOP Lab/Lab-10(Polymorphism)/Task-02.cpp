
#include <iostream>
using namespace std;

class Rectangle
{



public:
    int width;
    int height;
    Rectangle()
    {
    }
    Rectangle(int width, int height)
    {
        setWidth(width);
        setHeight(height);
    }
    int getWidth()
    {
        return width;
    }

    void setWidth(int width)
    {
        this->width = width;
    }

    int getHeight()
    {
        return height;
    }

    void setHeight(int height)
    {
        this->height = height;
    }

    virtual void area()
    {
        cout << "Area of rectangle is " << getHeight()*getWidth() << endl;
    }
};
class base : public Rectangle
{
public:
    base()
    {
    }
    base(int width, int height) : Rectangle(width, height)
    {
    }
    void area() override
    {
        cout << "Area of rectangle (Base) is " << getHeight()*getWidth() << endl;
    }
};
int main()
{
    Rectangle r(2, 4);
    base b(1, 6);
    r.area();
    b.area();
    return 0;
}
