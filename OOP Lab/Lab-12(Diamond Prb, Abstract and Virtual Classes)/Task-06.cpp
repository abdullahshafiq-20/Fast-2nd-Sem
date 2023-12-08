#include <iostream>
using namespace std;

class Bank
{
public:
    virtual double getBalance() = 0;
};

class BankA : public Bank
{
private:
    double balance = 100.0;

public:
    double getBalance() override
    {
        return balance;
    }
};

class BankB : public Bank
{
private:
    double balance = 150.0;

public:
    double getBalance() override
    {
        return balance;
    }
};

class BankC : public Bank
{
private:
    double balance = 200.0;

public:
    double getBalance() override
    {
        return balance;
    }
};

int main()
{
    BankA bankA;
    BankB bankB;
    BankC bankC;

    cout << "Bank A balance: $" << bankA.getBalance() << endl;
    cout << "Bank B balance: $" << bankB.getBalance() << endl;
    cout << "Bank C balance: $" << bankC.getBalance() << endl;

    return 0;
}
