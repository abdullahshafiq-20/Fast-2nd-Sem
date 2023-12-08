// Create a class named A include a constructor that accepts one parameter(any type) ,
// create another class named B that inherits from A also include a constructor that accepts one parameter(any type) ,
// create a class named C that inherits from B having a constructor that accepts one parameter now initialize all base
// class constructors through the child classes Remember if the base class is derived from another class, the base-class
// constructor is required to invoke the constructor of the next class up in the hierarchy

#include <iostream>
#include <cstring>
#include <list>
#include <vector>

using namespace std;

class A
{
    int a;

public:
    A(int a)
    {
        this->a = a;
        cout<<"Constructor A is called. ";
    }
};

class B : public A
{
    int b;

public:
    B(int b) :A(13)
    {
        this->b = b;
        cout<<"Constructor B is called. ";
    }
};

class C : public B
{
    int c;

public:
    C(int c) :B(10)
    {
        this->c = c;
        cout<<"Constructor C is called. ";
    }
};

int main()
{
    C c(1);
    return 0;
}
