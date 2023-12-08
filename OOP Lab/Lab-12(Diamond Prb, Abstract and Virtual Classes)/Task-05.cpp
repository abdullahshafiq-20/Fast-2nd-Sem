#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string name;

public:
    virtual void getData() = 0;
    virtual bool isOutstanding() = 0;
    void getName()
    {
        cout << "Name: " << name << endl;
    }
    void putName()
    {
        cout << "Enter name: ";
        getline(cin, name);
    }
};

class Student : public Person
{
private:
    float gpa;

public:
    void getData()
    {
        cout << "Enter GPA: ";
        cin >> gpa;
        cin.ignore();
    }
    bool isOutstanding()
    {
        return gpa > 3.5;
    }
};

class Professor : public Person
{
private:
    int publications;

public:
    void getData()
    {
        cout << "Enter number of publications: ";
        cin >> publications;
        cin.ignore();
    }
    bool isOutstanding()
    {
        return publications > 100;
    }
};

int main()
{
    Person *personPtr = nullptr;
    char choice;

    do
    {
        cout << "Enter 'S' for Student or 'P' for Professor: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 'S':
        case 's':
            personPtr = new Student();
            break;
        case 'P':
        case 'p':
            personPtr = new Professor();
            break;
        default:
            cout << "Invalid choice." << endl;
            continue;
        }

        personPtr->putName();
        personPtr->getData();

        cout << "Name: ";
        personPtr->getName();

        cout << "Outstanding: ";
        if (personPtr->isOutstanding())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

        delete personPtr;

        cout << "Do you want to enter more data? (Y/N): ";
        cin >> choice;
        cin.ignore();
    } while (choice == 'Y' || choice == 'y');

    return 0;
}
