#include <iostream>
using namespace std;
class bank_details
{
    string name;
    int age;
    double CNIC;
    string adress;
    double openingBalance;
    double currentBalance;
    double contact;
    string pin;
    double tax;

public:
    void setname(string name)
    {
        this->name = name;
    }
    void setage(int age)
    {
        this->age = age;
    }
    void setCNIC(double CNIC)
    {
        this->CNIC = CNIC;
    }
    void setadress(string adress)
    {
        this->adress = adress;
    }
    void setopeningbalance(double openingbalance)
    {
        this->openingBalance = openingbalance;
        currentBalance = openingBalance;
    }
    void setcontact(double contact)
    {
        this->contact = contact;
    }
    void setpin(string pin)
    {
        this->pin = pin;
    }
    int calculation()
    {
        this->age = age;
        this->currentBalance = currentBalance;
        if (age >= 60)
        {
            tax = openingBalance * 0.15;
        }
        else
        {
            tax = openingBalance * 0.25;
        }
        return tax;
    }
    int checkbalance()
    {
        currentBalance = openingBalance - tax;
        cout << "your Current Balance is " << currentBalance;

        return 0;
    }

    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    double getCNIC()
    {
        return CNIC;
    }
    string getadress()
    {
        return adress;
    }
    double getopeningbalance()
    {
        return openingBalance;
    }
    double getcontact()
    {
        return contact;
    }
    string getpin()
    {
        return pin;
    }
};
int main()
{
    char opt;
    string name;
    int age;
    int cnic;
    string adress;
    double opt_bal;
    string pin;
    bank_details b;
    b.setname("Abdullah");
    b.setage(45);
    b.setCNIC(12345);
    b.setadress("etc");
    b.setopeningbalance(560000);
    b.setcontact(123456);
    b.setpin("2222");

    cout << "Name: " << b.getname() << endl;
    cout << "Age: " << b.getage() << endl;
    cout << "CNIC: " << b.getCNIC() << endl;
    cout << "Adress: " << b.getadress() << endl;
    cout << "Account Opening Balnce: " << b.getopeningbalance() << endl;
    cout << "Contact Number: " << b.getcontact() << endl;
    cout << "Your setted Pin: " << b.getpin() << endl;
    cout << b.checkbalance();
    cout<<"\n";
    cout << "If want to modified your Info press (y/Y)";
    cin >> opt;
    switch (opt)
    {
    case 'y':
    case 'Y':
    {
        cout<<"Enter your PIN: ";
        cin>>pin;
        if (pin == "2222")
        {
            pin="****";
            b.setpin(pin);
            cout << "name:";
            cin >> name;
            b.setname(name);
            cout << "Age: ";
            cin >> age;
            b.setage(age);
            cout << "CNIC: ";
            cin >> cnic;
            b.setCNIC(cnic);
            cout << "Adress: ";
            cin >> adress;
            b.setadress(adress);
            cout << "Opening Balnce: ";
            cin >> opt_bal;
            b.setopeningbalance(opt_bal);
        }
        else 
        {
            cout<<"Pin is incorrect";
        }
    }
    }
    cout<<"Your Modified Info:\n";
    cout << "Name: " << b.getname() << endl;
    cout << "Age: " << b.getage() << endl;
    cout << "CNIC: " << b.getCNIC() << endl;
    cout << "Adress: " << b.getadress() << endl;
    cout << "Account Opening Balnce: " << b.getopeningbalance() << endl;
    cout << "Contact Number: " << b.getcontact() << endl;
    cout << "Your setted Pin: " << b.getpin() << endl;
    cout << b.checkbalance();

}
