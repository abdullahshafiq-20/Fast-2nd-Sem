#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

class Student
{
    int scores[5];
    int sum = 0;

public:
    int Kristen = 200;
    void exams()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter " << i + 1 << " score: ";
            cin >> scores[i];
            this->scores[i] = scores[i];
            sum = sum + scores[i];
        }
    }
    int Calculate()
    {
        return sum;
    }
};

int main()
{
    Student stu;
    stu.exams();
    cout << "Marks: " << stu.Calculate();
    if (stu.Calculate() > stu.Kristen)
    {
        cout << "\nMarks are higher than her";
    }
    else if (stu.Calculate() < stu.Kristen)
    {
        cout << "\nKristen Marks are higher";
    }
}