#include <iostream>
#include <string>
using namespace std;

class PetAnimal
{
    string pet_name;
    string owner_name;

    public:
        PetAnimal()
        {
        }
        PetAnimal(string pet_name, string owner_name)
        {
            set_pet_name(pet_name);
            set_owner_name(owner_name);
        }
        string get_pet_name()
        {
            return pet_name;
        }
        string get_owner_name()
        {
            return owner_name;
        }
        void set_pet_name(string pet_name)
        {
            this->pet_name = pet_name;
        }
        void set_owner_name(string owner_name)
        {
            this->owner_name = owner_name;
        }
        void get_details()
        {
            cout << "Pet Name: " << get_pet_name() << endl;
            cout << "Owner Name: " << get_owner_name() << endl;
        }

};

class Cat:public PetAnimal
{
    bool is_feed;

    public:
        Cat(string pet_name, string owner_name, bool is_feed) : PetAnimal(pet_name, owner_name)
        {
            set_is_feed(is_feed);
        }
        bool get_is_feed()
        {
            return is_feed;
        }
        void set_is_feed(bool is_feed)
        {
            this->is_feed = is_feed;
        }
        void feed()
        {
            PetAnimal::get_details();
            cout << "Is Feed: " << get_is_feed() << endl;
            cout<<"The cat is feeded!"<<endl;
        }

};

int main()
{
    Cat cat("Tom", "Tommy", true);
    cat.feed();
    return 0;
}