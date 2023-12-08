
#include <iostream>
#include <cstring>
#include <list>
#include <vector>
using namespace std;
class players
{
    string name;
    int age;
    int sold_price;

public:
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

    int getSold_price()
    {
        return sold_price;
    }

    void setSold_price(int sold_price)
    {
        this->sold_price = sold_price;
    }
    players(){}
    players(string name, int age, int price)
    {
        setName(name);
        setAge(age);
        setSold_price(price);
    }
};

class batsman : virtual public players
{
    string role;

public:
    string getRole()
    {
        return role;
    }

    void setRole(string role)
    {
        this->role = role;
    }
};

class bowler : virtual public players
{
    string bowling_type;

public:
    string getBowling_type()
    {
        return bowling_type;
    }

    void setBowling_type(string bowling_type)
    {
        this->bowling_type = bowling_type;
    }
};

class all_rounder : public batsman, public bowler
{
public:
    void print_data()
    {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Sold Price: " << getSold_price() << endl;
        cout << "Role: " << getRole() << endl;
        cout << "Bowling Type: " << getBowling_type() << endl;
    }
};

int main()
{
    all_rounder a;
    a.setName("Abdullah");
    a.setAge(21);
    a.setSold_price(1098);
    a.setRole("Opener");
    a.setBowling_type("Fast");
    a.print_data();
    return 0;
}
