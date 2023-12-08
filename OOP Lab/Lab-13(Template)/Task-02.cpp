#include<iostream>
using namespace std;
template <typename t>
class A
{
    t a;
    t b;
    t temp;
    public:
    A(t *a,t *b)
    {
        this->a=*a;
        this->b=*b;
    }
    void swap()
    {
        cout<<"Before Swapping:"<<endl;
        cout<<"a= "<<a<<" b= "<<b<<endl;
        temp=a;
        a=b;
        b=temp;
        cout<<"swapped"<<endl;
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }

};
int main()
{

    cout<<"Ineger data type:"<<endl;
    int a=12;int b=34;
    A<int>a1(&a,&b);
    a1.swap();
    float c=12.67,d=67.89;
    cout<<"Float data type:"<<endl;
    A<float>a2(&c,&d);
    a2.swap();
    string e="Abdullah", f="4489";
    cout<<"Character data tupe:"<<endl;
    A<string>a3(&e,&f);
    a3.swap();

}