#include<iostream>
using namespace std;
template <typename t>
class A
{
    t a;
    t b;
    public:
    A(t a,t b)
    {
        this->a=a;
        this->b=b;
    }
    void add()
    {
        cout<<"Sum of "<<a<<" and "<<b<<" is : "<<a+b<<endl;
    }
    void subtract()
    {
        cout<<"subtraction of "<<a<<" and "<<b<<" is : "<<a-b<<endl;
    }
    void divide()
    {
        cout<<"division of "<<a<<" and "<<b<<" is : "<<a/b<<endl;
    }
    void multiply()
    {
        cout<<"multipliaction  of "<<a<<" and "<<b<<" is : "<<a*b<<endl;
    }
};
int main()
{
    cout<<"for Integers:"<<endl;
    A<int>a(10,10);
    a.add();
    a.divide();
    a.multiply();
    a.subtract();

    cout<<"For FLoat:"<<endl;
    A<float>a1(45.78f,67.1f);
    a1.add();
    a1.divide();
    a1.multiply();
    a1.subtract();


}