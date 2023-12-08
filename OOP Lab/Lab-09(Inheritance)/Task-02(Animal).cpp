#include <iostream>
#include <cstring>
#include <list>
#include <vector>

using namespace std;
class Animal
{
protected:
    string name;
    int age;
    static int id_counter;
    Animal(string name, int age)
    {
        this->name = name;
        this->age = age;
        id_counter++;
    }

    void print_data()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id_counter << endl;
    }
};

int Animal::id_counter = 1;

class loin : public Animal
{
    int teeth;

public:
    loin(string name, int age, int teeth) : Animal(name, age)
    {
        this->teeth = teeth;
    }
    void set_data()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter teeth: ";
        cin >> teeth;
    }

    void print_data()
    {
        cout << "Lion Details:" << endl;
        Animal::print_data();
        cout << "Teeth: " << teeth << endl;
    }
};

class Eagle : public Animal
{
    int wingspan;
    int head;

public:
    Eagle(string name, int age, int wingspan, int head) : Animal(name, age)
    {
        this->wingspan = wingspan;
        this->head = head;
    }
    void set_data()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter wingspan: ";
        cin >> wingspan;
        cout << "Enter head: ";
        cin >> head;
    }

    void print_data()
    {
        cout << "Eagle Details:" << endl;
        Animal::print_data();
        cout << "Wingspan: " << wingspan << endl;
        cout << "Head: " << head << endl;
    }
};
class Giraffe : public loin, public Eagle
{
public:
    Giraffe(string name, int age, int teeth, int wingspan, int head, int neck) : loin(name, age, teeth), Eagle(name, age, wingspan, head)
    {
    }

    void print_data()
    {
        cout << "Giraffe Details:" << endl;
        loin::print_data();
        Eagle::print_data();
    }
};
int main()
{
    loin l("Lion", 10, 20);
    Eagle e("Eagle", 10, 20, 30);
    Giraffe g("Giraffe", 10, 20, 30, 40, 50);
    l.print_data();
    e.print_data();
    g.print_data();
    return 0;
}
