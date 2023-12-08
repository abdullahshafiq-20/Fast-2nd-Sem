#include <iostream>
using namespace std;

class Bank
{
public:
    virtual double getInterestRate() = 0;
};

class HMB : public Bank
{
public:
    double getInterestRate() override
    {
        return 4.0;
    }
};

class HBL : public Bank
{
public:
    double getInterestRate() override
    {
        return 2.0;
    }
};

class MCB : public Bank
{
public:
    double getInterestRate() override
    {
        return 3.0;
    }
};

int main()
{
    HMB hmb;
    HBL hbl;
    MCB mcb;
    cout << "Interest rate for HMB bank: " << hmb.getInterestRate() << "%" << endl;
    cout << "Interest rate for HBL bank: " << hbl.getInterestRate() << "%" << endl;
    cout << "Interest rate for MCB bank: " << mcb.getInterestRate() << "%" << endl;
    return 0;
}
