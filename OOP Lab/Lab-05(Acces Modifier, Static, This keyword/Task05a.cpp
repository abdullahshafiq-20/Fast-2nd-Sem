#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

class hotel
{

    string name;
    int days;
    double rent=1000.85;

public:
    hotel()
    {
    }
    hotel(string name, int days)
    {
        set_name(name);
        set_days(days);
    }
    void set_name(string name)
    {
        this->name = name;
    }
    void set_days(int days)
    {
        this->days = days;
    }
    string get_name()
    {
        return name;
    }
    int get_days()
    {
        return days;
    }
    void cal_rent()
    {
        if (get_days()<=7)
        {
            rent=get_days()*rent;
            cout<<"Rent: "<<rent<<endl;
        }
        else
        {
            rent=(get_days()*rent)-1000.85;
            cout<<"Rent: "<<rent<<endl;
        } 
    }
    void display()
    {
        cout<<"Name: "<<get_name()<<endl;
        cout<<"Days: "<<get_days()<<endl;
        cal_rent();
    }


};
int main()
{
    string name;
    int days;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter days: ";
    cin>>days;
    hotel h(name, days);
    h.display();

}
