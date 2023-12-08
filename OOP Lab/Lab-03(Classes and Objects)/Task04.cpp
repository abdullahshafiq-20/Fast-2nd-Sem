#include <iostream>
#include <string>
using namespace std;

class Bank_Emplyee
{
    char *first_name;
    string last_name;
    int salary;

public:
    void setfirst_name(char *first_name)
    {
        this->first_name = first_name;
    }
    void setlast_name(string last_name)
    {
        this->last_name = last_name;
    }
    void setsalary(int salary)
    {
        if (salary > 0)
        {
            this->salary = salary;
        }
        else if (salary < 0)
        {
            this->salary = 0;
        }
    }
    char *getfisrt_name()
    {
        return first_name;
    }
    string getlast_name()
    {
        return last_name;
    }
    int getsalary()
    {
        return 12 * salary;
    }
};
int main()
{
    Bank_Emplyee b[5];
    cout<<"***Salary befor 20% incriment***\n";
    for (int i = 0; i < 5; i++) // loop for entering data. I have setted // to only one person's data.
    {
        b[i].setfirst_name("Abdullah");
        b[i].setlast_name("Shafiq");
        b[i].setsalary(5000);
        cout<<"First Name: "<<b[i].getfisrt_name()<<endl;
        cout<<"Last Name: "<<b[i].getlast_name()<<endl;
        cout<<"Salary(without 20%): "<<b[i].getsalary()<<endl;
    }
    cout<<"***Salary After 20% Incriment***\n";
        for (int i = 0; i < 5; i++) // loop for entering data. I have setted // to only one person's data.
    {
        b[i].setfirst_name("Abdullah");
        b[i].setlast_name("Shafiq");
        b[i].setsalary(5000*0.20);
        cout<<"First Name: "<<b[i].getfisrt_name()<<endl;
        cout<<"Last Name: "<<b[i].getlast_name()<<endl;
        cout<<"Salary(with 20%): "<<b[i].getsalary()<<endl;
    }
    
}