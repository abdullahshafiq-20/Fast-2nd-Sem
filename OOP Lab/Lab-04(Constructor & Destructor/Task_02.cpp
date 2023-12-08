#include <iostream>
#include <string>
using namespace std;
class personType
{
    string first_name;
    string last_name;
    string middle_name;
    string first_input;
    string last_input;
    public:

    personType()
    {
        this->first_name = "Abdullah";
        this->last_name = "Shafiq";
        this->middle_name = middle_name;
    }
    string get_first_name(string first_input)
    {
        if (first_name == first_input)
        {
            cout << "First Name matched";
            cout<<endl;
            return first_name;
            
        }
    }
    string get_last_name(string last_input)
    {
        if (last_name == last_input)
        {
            cout<<endl;
            cout << "Last Name matched:";
            cout<<endl;
            return last_name;
            
        }
        
        
    }
};
int main()
{
    personType person;
    string first;
    string last;
    cout<<"Enter First Name: ";
    cin>>first;
    cout<<"Enter last Name: ";
    cin>>last;
    cout<<person.get_first_name(first);
    cout<<person.get_last_name(last);





}


