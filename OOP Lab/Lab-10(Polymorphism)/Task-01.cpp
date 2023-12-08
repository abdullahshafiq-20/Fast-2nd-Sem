#include<iostream>
#include<cstring>
using namespace std;
class Message
{
    
    public:
    string n;
    Message(string s="")
    {
        n=s;
    }
    void print()
    {
        cout<<n<<endl;
    }
    void print(string s)
    {
        n=s;
    }

};

int main()
{
    Message m("Abdullah");
    m.print();
    m.print(m.n);
    return 0;
}
