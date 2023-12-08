#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

class Account
{
    string name;
    double acc_number;
    string acc_type;
    double balance;
    float int_rate;
    double dep_amount;
    double wtd_amount;

public:
    Account()
    {
    }
    Account(string name, double acc_number, string acc_type, double balance)
    {
        set_name(name);
        set_acc_number(acc_number);
        set_acc_type(acc_type);
        set_balance(balance);
    }
    Account(const Account &acc1)
    {
        set_name(acc1.name);
        set_acc_number(acc1.acc_number);
        set_acc_type(acc1.acc_type);
        set_balance(acc1.balance);
    }
    // setter functions
    void set_name(string name)
    {
        this->name = name;
    }
    void set_acc_number(double acc_number)
    {
        this->acc_number = acc_number;
    }
    void set_acc_type(string acc_type)
    {
        this->acc_type = acc_type;
    }
    void set_balance(double balance)
    {
        this->balance = balance;
    }

    // getter functions
    string get_name()
    {
        return name;
    }
    double get_acc_number()
    {
        return acc_number;
    }
    string get_acc_type()
    {
        return acc_type;
    }
    double get_balance()
    {
        return balance;
    }

    // member functions
    void set_dep_amount(double dep_amount)
    {
        this->dep_amount = dep_amount;
        cout << "Amount depsotted Successfully!\n";
        balance = get_balance() + dep_amount;
        cout << "Updated Balance: " << get_balance() << endl;
    }
    void set_wtd_amount(double wtd_amount)
    {
        this->wtd_amount = wtd_amount;
        if (wtd_amount > get_balance())
        {
            cout << "Insufficient Balance!\n";
        }
        else
        {
            balance = get_balance() - wtd_amount;
            cout << "Amount withdrawed Successfully!" << endl;
            cout << "Updated Balance: " << get_balance() << endl;
        }
    }
    void set_int_rate(float int_rate)
    {
        int_rate = (get_balance() / 0.1773);
        this->int_rate = int_rate;
    }
    float get_int_rate()
    {
        return int_rate;
    }
    void display()
    {
        cout << "Name: " << get_name() << endl;
        cout << "Account Number: " << get_acc_number() << endl;
        cout << "Account type: " << get_acc_type() << endl;
        cout << "Balance: " << get_balance() << endl;
    }
    void display_rate()
    {
        cout << "Intrest Rate: " << get_int_rate() << endl;
    }
};

int main()
{
    string name;
    double acc_number;
    string acc_type;
    double balance;
    double dep_amount;
    double wtd_amount;

    int opt;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Accountr Number: ";
    cin >> acc_number;
    cout << "Enter Account Type: ";
    cin >> acc_type;
    cout << "Entert Balance: ";
    cin >> balance;
    Account acc(name, acc_number, acc_type, balance);
    do
    {
        cout << "1-Deposit Amount.\n";
        cout << "2-Withdarw Amount.\n";
        cout << "3-Display Details.\n";
        cout << "4-Display Rate.\n";
        cin >> opt;
        switch (opt)
        {
        case 1:
        {
            cout << "Enter Amount to deposit:";
            cin >> dep_amount;
            acc.set_dep_amount(dep_amount);
        }
        break;
        case 2:
        {
            cout << "Enter Amount to withdraw: ";
            cin >> wtd_amount;
            acc.set_wtd_amount(wtd_amount);
        }
        break;
        case 3:
        {
            acc.display();
            cout << endl;
        }
        break;
        case 4:
        {
            acc.display_rate();
            cout << endl;
        }
        }

    } while (opt != 5);
}