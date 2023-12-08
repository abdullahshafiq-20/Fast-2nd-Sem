#include <iostream>
#include <string>
using namespace std;

class warehouse
{
    int q_boxes;
    int q_per_boxes;

public:
    warehouse()
    {
    }
    warehouse(int q_boxes, int q_per_boxes)
    {
        set_q_boxes(q_boxes);
        set_q_per_boxes(q_per_boxes);
    }
    int get_q_boxes()
    {
        return q_boxes;
    }
    int get_q_per_boxes()
    {
        return q_per_boxes;
    }
    void set_q_boxes(int q_boxes)
    {
        this->q_boxes = q_boxes;
    }
    void set_q_per_boxes(int q_per_boxes)
    {
        this->q_per_boxes = q_per_boxes;
    }
    void get_total()
    {
        cout << "Total Amount: " << get_q_boxes() * get_q_per_boxes();
    }
};

class Markers : public warehouse
{

public:
    Markers(int q_boxes, int q_per_boxes) : warehouse(q_boxes, q_per_boxes)
    {
        set_q_boxes(q_boxes);
        set_q_per_boxes(q_per_boxes);
    }
    void get_total()
    {
        cout << "Total Amount: " << get_q_boxes() * get_q_per_boxes();
    }
};

class ColorPencil : public warehouse
{

public:
    ColorPencil(int q_boxes, int q_per_boxes) : warehouse(q_boxes, q_per_boxes)
    {
        set_q_boxes(q_boxes);
        set_q_per_boxes(q_per_boxes);
    }
    void get_total()
    {
        cout << "Total Amount: " << get_q_boxes() * get_q_per_boxes();
    }
};
class Sharpner : public warehouse
{

public:
    Sharpner(int q_boxes, int q_per_boxes) : warehouse(q_boxes, q_per_boxes)
    {
        set_q_boxes(q_boxes);
        set_q_per_boxes(q_per_boxes);
    }
    void get_total()
    {
        cout << "Total Amount: " << get_q_boxes() * get_q_per_boxes();
    }
};

class Eraser:public warehouse
{

public:
    Eraser(int q_boxes, int q_per_boxes) : warehouse(q_boxes, q_per_boxes)
    {
        set_q_boxes(q_boxes);
        set_q_per_boxes(q_per_boxes);
    }
    void get_total()
    {
        cout << "Total Amount: " << get_q_boxes() * get_q_per_boxes();
    }
};
int main()
{

    Markers m(10, 100);
    ColorPencil c(20, 50);
    Sharpner s(30, 40);
    Eraser e(40, 30);

    m.get_total();
    cout << endl;
    c.get_total();
    cout << endl;
    s.get_total();
    cout << endl;
    e.get_total();
    cout << endl;

    return 0;
}
