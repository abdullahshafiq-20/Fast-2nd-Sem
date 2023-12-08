#include <iostream>
using namespace std;
class Distance
{
    int inches, feet;

public:
    void operator++(int)
    {
        if (inches + 1 == 12)
        {
            feet++;
            inches = 0;
        }
        else
        {
            inches++;
        }
    }
    void operator--(int)
    {
        if (inches == 0)
        {
            feet--;
            inches = 11;
        }
        else
        {
            inches--;
        }
    }
    Distance(int feet, int inches) 
    {
        this->inches = inches;
        this->feet = feet;
    }
    void print()
    {
        cout << "Feet= " << feet << " inches= " << inches;
    }
};
int main()
{
    Distance distance(5, 11);
    distance++;
    distance.print();
    Distance distance1(5,0);
    distance1--;
    distance1.print();
    

    
}
