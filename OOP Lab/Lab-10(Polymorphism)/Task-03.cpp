
#include <iostream>
using namespace std;

class ShapeArea {
protected:
    int a, b;

public:
    ShapeArea(int a, int b) {
        this->a = a;
        this->b = b;
    }

    virtual int area() {
        return 0;
    }
};

class Rectangle : public ShapeArea {
public:
    Rectangle(int a, int b) : ShapeArea(a, b) {}

    int area(int length, int breadth) {
        return length * breadth;
    }
};

class Square : public ShapeArea {
public:
    Square(int a, int b) : ShapeArea(a, b) {}

    int area(int side) {
        return side * side;
    }
};
class Print {
public:
    void printArea(Rectangle r, int length, int breadth) {
        cout << "Area of rectangle with length " << length << " and breadth " << breadth << ": " << r.area(length, breadth) << endl;
    }

    void printArea(Square s, int side) {
        cout << "Area of square with side " << side << ": " << s.area(side) << endl;
    }
};
int main() {
    Rectangle r(0, 0);
    Square s(0, 0);
    Print p;

    int length = 5;
    int breadth = 3;
    r = Rectangle(length, breadth);
    p.printArea(r, length, breadth);

    int side = 4;
    s = Square(side, side);
    p.printArea(s, side);

    return 0;
}