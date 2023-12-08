#include <bits/stdc++.h>
using namespace std;

class Standard_Chatred_Type
{
    int account_balance;
    int num_tran;
    int num_dep;
    int num_withdrawl;
    float intrest;

public:
    void set_account_balance(int account_balance)
    {
        this->account_balance = account_balance;
    }
    void set_num_tran(int num_tran)
    {
        this->num_tran = num_tran;
    }
    void set_num_dep(int num_dep)
    {
        this->num_dep = num_dep;
    }
    void set_num_withdrawl(int num_withdrawl)
    {
        this->num_withdrawl = num_withdrawl;
    }
    void set_intrest(float intrest)
    {
        this->intrest = intrest;
    }

    int get_account_balance()
    {
        return account_balance;
    }
    int get_num_tran()
    {
        return num_tran;
    }
    int get_num_dep()
    {
        return num_dep;
    }
    int get_num_withdrawl()
    {
        return num_withdrawl;
    }
    float get_intrest()
    {
        return (float)intrest;
    }
};
int main()
{
    Standard_Chatred_Type sct;
    int option = 0;
    int tran = 0;
    int deposit_ammount = 0;
    int withdraw_ammount = 0;
    int demo_ammount;
    cout << "Enter the following option:\n";
    cout << "1. Display the account balance\n";
    cout << "2. Display the number of transactions\n";
    cout << "3. Display interest earned for this period\n";
    cout << "4. Make a deposit\n";
    cout << "5. Make a withdrawal\n";
    cout << "6. Add interest for this period\n";
    cout << "7. Exit the program\n";

    do
    {

        cin >> option;
        switch (option)
        {
        case 1:
        {
            cout<<"Enter Demo ammount to run this program:\n";
            cin>>demo_ammount;
            sct.set_account_balance(demo_ammount);
            cout << "Balance in Account: " << sct.get_account_balance()<<" RS";
            cout << endl<<"Enter Option:";
        }
        break;
        case 2:
        {
            sct.set_num_tran(tran);
            cout << "Number of Transections Performed: " << sct.get_num_tran();
            cout << endl<<"Enter Option:";
        }
        break;
        case 3:
        {
            sct.set_intrest((float)demo_ammount * 0.1225);
            cout << "Intrest for the year: " << sct.get_intrest()<<" RS";
            cout << endl<<"Enter Option:";
        }
        break;
        case 4:
        {
            tran++;
            cout << "Enter Amount you want to deposit:";
            cin >> deposit_ammount;
            sct.set_account_balance(demo_ammount + deposit_ammount);
            cout << deposit_ammount << " RS amount depositted succesfully";
            cout << endl<<"Enter Option:";
        }
        break;
        case 5:
        {
            tran++;
            cout << "you have " << sct.get_account_balance() << " left\n";
            cout << "Enter Amount you want to Withdraw:";
            cin >> withdraw_ammount;
            if (withdraw_ammount > sct.get_account_balance())
            {
                cout << "You cannot withdraw this Amount\n";
            }
            else if (withdraw_ammount < sct.get_account_balance())
            {
                demo_ammount+=deposit_ammount;
                sct.set_account_balance(demo_ammount - withdraw_ammount);
                cout << withdraw_ammount << " RS ammount cashed succesfully\n";
                cout << "Balance left: " << sct.get_account_balance()<<" RS";
                cout << endl<<"Enter Option:";
            }
        }
        break;
        case 6:
        {
            cout << "Sorry there is no intrest on you account Balance ammount.";
        }
        break;
        case 7:
        {
            exit(7);
        }
        break;
        }

    } while (option = 7);
}