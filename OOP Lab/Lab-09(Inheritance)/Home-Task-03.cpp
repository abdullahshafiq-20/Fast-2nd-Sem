#include <iostream>
#include <string>
using namespace std;

class Shape
{
    int no_sides;
    int ares;

    public:
        Shape()
        {
        }
        Shape(int no_sides, int ares)
        {
            set_no_sides(no_sides);
            set_ares(ares);
        }
        int get_no_sides()
        {
            return no_sides;
        }
        int get_ares()
        {
            return ares;
        }
        void set_no_sides(int no_sides)
        {
            this->no_sides = no_sides;
        }
        void set_ares(int ares)
        {
            this->ares = ares;
        }
        void get_details()
        {
            cout << "No. of Sides: " << get_no_sides() << endl;
            cout << "Ares: " << get_ares() << endl;
        }

};

class Rectangle:public Shape
{
    int length;
    int width;

    public:
        Rectangle(int no_sides, int ares, int length, int width) : Shape(no_sides, ares)
        {
            set_length(length);
            set_width(width);
        }
        int get_length()
        {
            return length;
        }
        int get_width()
        {
            return width;
        }
        void set_length(int length)
        {
            this->length = length;
        }
        void set_width(int width)
        {
            this->width = width;
        }
        void generated_Area()
        {
            set_ares(get_length() * get_width());
        }

};


class Circle :public Shape
{
    int radius;

    public:
        Circle(int no_sides, int ares, int radius) : Shape(no_sides, ares)
        {
            set_radius(radius);
        }
        int get_radius()
        {
            return radius;
        }
        void set_radius(int radius)
        {
            this->radius = radius;
        }
        void generated_Area()
        {
            set_ares(3.14 * get_radius() * get_radius());
        }

};

class Triangle:public Shape
{
    int base;
    int height;

    public:
        Triangle(int no_sides, int ares, int base, int height) : Shape(no_sides, ares)
        {
            set_base(base);
            set_height(height);
        }
        int get_base()
        {
            return base;
        }
        int get_height()
        {
            return height;
        }
        void set_base(int base)
        {
            this->base = base;
        }
        void set_height(int height)
        {
            this->height = height;
        }
        void generated_Area()
        {
            set_ares(0.5 * get_base() * get_height());
        }

};

class square:public Rectangle
{
    public:
        square(int no_sides, int ares, int length, int width) : Rectangle(no_sides, ares, length, width)
        {
        }
        void checkSides()
        {
            if (get_length() == get_width())
            {
                cout << "Both sides are equal" << endl;
            }
            else
            {
                cout << "Both sides are not equal" << endl;
            }
        }
        void generateArea()
        {
            set_ares(get_length() * get_width());
        }

};
int main()
{
    Rectangle r(4, 0, 10, 20);
    r.generated_Area();
    r.get_details();
    cout << endl;

    Circle c(0, 0, 10);
    c.generated_Area();
    c.get_details();
    cout << endl;

    Triangle t(3, 0, 10, 20);
    t.generated_Area();
    t.get_details();
    cout << endl;

    square s(4, 0, 10, 10);
    s.checkSides();
    s.generateArea();
    s.get_details();
    cout << endl;

    return 0;

}