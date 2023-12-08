#include <iostream>
using namespace std;
class Animal
{
    string name;

public:
    Animal() {}
    Animal(string name)
    {
        setName(name);
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void foundIn()
    {
        cout << "Name:" << getName() << endl;
    }
};

class Mammal : virtual public Animal
{
public:
    Mammal() {}
    Mammal(string name) : Animal(name)
    {
    }
    void foundIn()
    {
        cout << "Name:" << getName() << "found on Soil" << endl;
    }
};

class MarineAnimal : public Animal
{
public:
    MarineAnimal() {}
    MarineAnimal(string name) : Animal(name)
    {
    }
    void foundIn()
    {
        cout << "Name:" << getName() << "found in Water" << endl;
    }
};

class Whales : public Mammal, public MarineAnimal
{
    string whaleType;

public:
    Whales() {}
    Whales(string whaleType)
    {
        this->whaleType = whaleType;
    }
    void setWhaleType(string whaleType)
    {

        this->whaleType = whaleType;
    }
    string getWhaleType()
    {
        return whaleType;
    }
    void foundIn()
    {
        cout << "Whale Type:" << getWhaleType() << "found in Sea" << endl;
    }
};
int main()
{
    Mammal mammal("Loin ");
    MarineAnimal marineAnimal("GoldFish ");
    Whales whales("Baleen ");
    mammal.foundIn();
    marineAnimal.foundIn();
    whales.foundIn();
    return 0;
}