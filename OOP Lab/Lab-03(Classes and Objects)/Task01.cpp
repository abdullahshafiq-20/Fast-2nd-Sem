#include <iostream>
using namespace std;
class details
{
    string name;
    string id_number;
    string department;
    float marks[6];
    string grade;
    float total_marks;

public:
    void setname(string name)
    {
        this->name = name;
    }
    void setID(string id_number)
    {
        this->id_number = id_number;
    }
    void setdepartment(string department)
    {
        this->department = department;
    }
    void setmarks()
    {
        for (int i = 0; i < 6; i++)
        {
            cout << "Enter " << i + 1 << " subject marks:";
            cin >> marks[i];
            this->marks[i] = marks[i];
            total_marks += marks[i];
        }
    }
    void setpergrade()
    {
        this->total_marks = (float)(total_marks / 600) * 100;
        if (total_marks >= 85)
            this->grade = 'A';

        else if (total_marks >= 75)
            this->grade = 'B';

        else if (total_marks >= 65)
            this->grade = 'C';

        else if (total_marks >= 55)
            this->grade = 'D';

        else
            this->grade = 'F';
    }
    string getname()
    {
        return name;
    }
    string getID()
    {
        return id_number;
    }
    string getdepartment()
    {
        return department;
    }
    float getmarks()
    {
        return total_marks;
    }
    string getpergrade()
    {
        return grade;
    }
};
    int main()
    {
        details d;
        d.setname("Abdullah");
        d.setID("22k-4489");
        d.setdepartment("BSCS");
        d.setmarks();
        d.setpergrade();
        cout<<d.getname()<<endl;
        cout<<d.getID()<<endl;
        cout<<d.getdepartment()<<endl;
        cout<<d.getpergrade()<<endl;
    }
