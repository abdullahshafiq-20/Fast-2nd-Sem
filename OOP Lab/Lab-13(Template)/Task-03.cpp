#include<iostream>
#include<cctype>
using namespace std;
template <typename t>
class mycontainer
{
    t a;
    public:
    mycontainer(t a)
    {
        this->a=a;
    }
    void increas()
    {
        a++;
        cout<<"Value Incresed: "<<a<<endl;
    }
};
template<>class mycontainer<char>
{
    char a;
    public:
    mycontainer(char a)
    {
        this->a=a;
    }
    void uppercase()
    {
        a=toupper(a);
        cout<<"Character uppercased: "<<a<<endl;
        a++;
        cout<<"Character Incrimented: "<<a<<endl;

        

    }
};
int main()
{
    cout<<"for Integer: "<<endl;
    mycontainer<int>mc(56);
    mc.increas();
    cout<<"For char: "<<endl;
    mycontainer<char>mc1('c');
    mc1.uppercase();
}