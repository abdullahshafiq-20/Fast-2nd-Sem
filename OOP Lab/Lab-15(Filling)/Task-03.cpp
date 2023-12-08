#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class person
{
    string name;
    int age;

public:
    person()
    {
    }
    person(string name, int age)
    {
        setName(name);
        setAge(age);
    }
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void print()
    {
        cout << getName() << endl;
        cout << getAge() << endl;
    }
};

int main()
{
    person p1("John", 12);
    ofstream p1_in("person.bin", ios::out | ios::binary);
    p1_in.write((char *)&p1, sizeof(p1));
    p1_in.close();
    person p2;
    ifstream p1_out("person.bin", ios::in | ios::binary);
    p1_out.read((char *)&p2, sizeof(p2));
    p1_out.close();
    cout << "Name: " << p2.getName() << endl;
    cout << "Age: " << p2.getAge() << endl;
}