#include<iostream>

using namespace std;
class cal
{
    public:
    int one=4;
    int two=7;

    int Add()
    {
        return (one+two);
    }

};
int main()
{
    cal c;
    cout<<"Sum is: "<<c.Add();
    
}
