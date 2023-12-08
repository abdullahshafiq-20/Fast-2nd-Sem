
#include<iostream>
#include <cstring>
using namespace std;

class Box
{
    int number_of_sides;

    public:
    Box(){}
    Box(int number_of_sides)
    {
        set_number_of_sides(number_of_sides);
    }
    void set_number_of_sides(int number_of_sides)
    {
        this->number_of_sides = number_of_sides;
    }
    int get_number_of_sides()
    {
        return number_of_sides;
    }
    void Area_Display()
    {
        cout << "Area of Box is: " << get_number_of_sides() * get_number_of_sides() << endl;
    }

    friend Box operator+(Box &box1, Box &box2);
    friend Box operator-(Box &box1, Box &box2);



};

Box operator+(Box &box1, Box &box2)
{
    Box resultant_box;
    resultant_box.set_number_of_sides(box1.get_number_of_sides() + box2.get_number_of_sides());
    return resultant_box;
}

Box operator-(Box &box1, Box &box2)
{
    Box resultant_box;
    resultant_box.set_number_of_sides(box1.get_number_of_sides() - box2.get_number_of_sides());
    return resultant_box;
}

int main()
{
    Box box1(5), box2(10);
    Box resultant_box = box1 + box2;
    resultant_box.Area_Display();
    resultant_box = box1 - box2;
    resultant_box.Area_Display();
    return 0;
}