#include <iostream>
#include <cstring>
#include <list>
#include <vector>
using namespace std;
class resturant
{
    string name;
    string adress;
    string p_number;
    float rating;

public:
    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getAdress()
    {
        return adress;
    }

    void setAdress(string adress)
    {
        this->adress = adress;
    }

    string getP_number()
    {
        return p_number;
    }

    void setP_number(string p_number)
    {
        this->p_number = p_number;
    }

    float getRating()
    {
        return rating;
    }

    void setRating(float rating)
    {
        this->rating = rating;
    }


};

class menuItem:public resturant
{
    string name;
    int price;

public:
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    int getPrice()
    {
        return price;
    }
    void setPrice(int price)
    {
        this->price = price;
    }
    menuItem() {}
    menuItem(string name, int price)
    {
        setName(name);
        setPrice(price);
    }
    void Italian_menu()
    {
        cout<<"ITALIAN RESTURANT\n";
        vector<string> italian_menu = {"Pizza-10$", "Pasts-5$"};
        for (int i = 0; i < italian_menu.size(); i++)
        {
            cout << italian_menu[i] << endl;
        }
    }
    void mexacian_memu()
    {
        cout<<"MEXICAN RESTURANT\n";
        vector<string> mexican_menu = {"Salsa-3$", "taco-7$", "Burrito-12$"};
        for (int i = 0; i < mexican_menu.size(); i++)
        {
            cout << mexican_menu[i] << endl;
        }
    }
    void add_italian()
    {
        vector<string> italian_menu = {"Pizza-10$", "Pasts-5$"};
        string item;
        cout << "Enter the item you want to add: ";
        cin >> item;
        italian_menu.push_back(item);
        cout << "Item added successfully!!\n";
        for (int i = 0; i < italian_menu.size(); i++)
        {
            cout << italian_menu[i] << endl;
        }
    }
    void add_mexican()
    {
        vector<string> mexican_menu = {"Salsa-3$", "taco-7$", "Burrito-12$"};
        string item;
        cout << "Enter the item you want to add: ";
        cin >> item;
        mexican_menu.push_back(item);
        cout << "Item added successfully!!\n";
        for (int i = 0; i < mexican_menu.size(); i++)
        {
            cout << mexican_menu[i] << endl;
        }
    }
};


class Italianrest:public resturant
{
    string pizza_type;
    string pasta_type;

public:
    string getPizza_type()
    {
        return pizza_type;
    }
    void setPizza_type(string pizza_type)
    {
        this->pizza_type = pizza_type;
    }
    string getPasta_type()
    {
        return pasta_type;
    }
    void setPasta_type(string pasta_type)
    {
        this->pasta_type = pasta_type;
    }
    void make_pasta()
    {
        cout << "Your Pasta ins bieng prepared!!!\n";
        cout << "Dined in";
    }

    void make_pizza()
    {
        cout << "Your Pizza is bieng prepared!!\n";
        cout << "Dined in";
    }
};

class Mexicanrest:public resturant
{
    string spice_level;
    string salsa_type;

public:
    string getSpice_level()
    {
        return spice_level;
    }

    void setSpice_level(string spice_level)
    {
        this->spice_level = spice_level;
    }

    string getSalsa_type()
    {
        return salsa_type;
    }

    void setSalsa_type(string salsa_type)
    {
        this->salsa_type = salsa_type;
    }

    void make_taco()
    {
        cout << "Your Tacco is bieng prepared!!\n";
        cout << "Dined in";
    }
    void make_burrito()
    {
        cout << "Your burrito is bieng prepared!!\n";
        cout << "Dined in";
    }
};

int main()
{
    bool opt;
    int option;
    string item;
    menuItem m;
    resturant res;
    Italianrest ires;
    Mexicanrest mres;
    m.Italian_menu();
    m.mexacian_memu();
    cout << "Want to Add menu?";
    cin >> opt;
    if (opt == true)
    {
        cout<<"1-Italian Menu\n";
        cout<<"0-Mexican Menu\n";
        cin>>option;
        if(option==1)
        {
            m.add_italian();
        }
        else if(option==0)
        {
            m.add_mexican();
        } 
    }
    else
    {
        cout << "Continuing......." << endl;
        
    }
    m.Italian_menu();
    m.mexacian_memu();
    cout << "Enter Option:" << endl;
    cin >> option;
    if (option == 1)
    {
        ires.make_pizza();
    }
    else if (option == 2)
    {
        ires.make_pasta();
    }
    else if (option == 3)
    {
        mres.make_taco();
    }
    else if (option == 4)
    {
        mres.make_burrito();
    }
}