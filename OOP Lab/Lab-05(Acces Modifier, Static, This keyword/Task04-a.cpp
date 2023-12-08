#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;


class Account
{
    int ac_no;
    double ac_bal;
    int security;
    static int count;
    public:
    void set_ac_nu(int ac_no)
    {
        this->ac_no=ac_no;
    }
    void set_ac_bal(double ac_bal)
    {
        this->ac_bal=ac_bal;
    }
    void set_security(int security)
    {
        this->security=security;
    }
    int get_ac_no()
    {
        return ac_no;
    }
    double get_ac_bal()
    {
        return ac_bal;
    }
    int get_security()
    {
        return security;
    }
    Account (int ac_no, double ac_bal, int security)
    {
        count++;
    }
    static int get_count()
    {
        return count;
    }

};
int Account:: count=0;
int main()
{
    Account acc1(223344, 45000000, 678);

    cout<<"Number of Objects Created: "<<Account::get_count();

}