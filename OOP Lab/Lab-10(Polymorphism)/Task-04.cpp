#include <iostream>
using namespace std;

class Bank {
public:
    virtual int getBalance() {
        return 0;
    }
};

class BankA : public Bank {
public:
    int getBalance() {
        return 1000;
    }
};

class BankB : public Bank {
public:
    int getBalance() {
        return 1500;
    }
};

class BankC : public Bank {
public:
    int getBalance() {
        return 2000;
    }
};

int main() {
    BankA a;
    BankB b;
    BankC c;

    cout << "Balance in Bank A: " << a.getBalance() << endl;
    cout << "Balance in Bank B: " << b.getBalance() << endl;
    cout << "Balance in Bank C: " << c.getBalance() << endl;

    return 0;
}


