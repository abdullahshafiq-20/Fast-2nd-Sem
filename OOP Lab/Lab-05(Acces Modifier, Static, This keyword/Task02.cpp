#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

class Emplyee
{
    char *Emplyee_name;
    int Emplyee_id;

public:
    void set_name(char *Emplyee_name)
    {
        this->Emplyee_name = Emplyee_name;
    }
    char *get_Emplyee_name()
    {
        return Emplyee_name;
    }
    int get_Emplyee_id()
    {
        return Emplyee_id;
    }

    Emplyee(char *Emplyee_name, int const Emplyee_id) : Emplyee_name(Emplyee_name), Emplyee_id(Emplyee_id)
    {
        set_name(Emplyee_name);
        get_Emplyee_id();
    }

};
int main()
{
    Emplyee emp1("Abdullah",4489);
    Emplyee emp2("Zain",4490);
    Emplyee emp3("abdullah3",4491);
    cout << emp1.get_Emplyee_name() << endl;
    cout << emp1.get_Emplyee_id() << endl;
    cout << emp2.get_Emplyee_name() << endl;
    cout << emp2.get_Emplyee_id() << endl;
    cout << emp3.get_Emplyee_name() << endl;
    cout << emp3.get_Emplyee_id() << endl;


}