#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <windows.h>
using namespace std;

class juice
{
    int price;
    string ingredient;
    string taste;

public:
    int getPrice()
    {
        return price;
    }

    void setPrice(int price)
    {
        this->price = price;
    }

    string getIngredient()
    {
        return ingredient;
    }

    void setIngredient(string ingredient)
    {
        this->ingredient = ingredient;
    }

    string getTaste()
    {
        return taste;
    }

    void setTaste(string taste)
    {
        this->taste = taste;
    }

    juice() {}
    juice(int price, string ingredient, string taste)
    {
        setPrice(price);
        setIngredient(ingredient);
        setTaste(taste);
    }

    virtual void print()
    {
        cout << "=Price:" << getPrice() << endl;
        cout << "=Ingredient:" << getIngredient() << endl;
        cout << "=Taste:" << getTaste() << endl;
    }
};

class fruit : public juice
{

protected:
    string season;

public:
    static int counter;
    fruit() {}
    fruit(int price, string ingredient, string taste) : juice(price, ingredient, taste)
    {
    }
};

int fruit::counter = 0;
class vegitables : public juice
{
    string origin;

public:
    static int counter;
    vegitables() {}
    vegitables(int price, string ingredient, string taste) : juice(price, ingredient, taste)
    {
    }
};

int vegitables::counter = 0;

class mixjuice : public juice
{
public:
    static int counter;
    mixjuice() {}
    mixjuice(int price, string ingredient, string taste) : juice(price, ingredient, taste)
    {
    }
};

int mixjuice::counter = 0;

class citrus : public fruit
{
public:
    citrus()
    {
    }
    citrus(int price, string ingredient, string taste) : fruit(price, ingredient, taste)
    {
    }
    void set_citrus()
    {
        setPrice(99);
        setIngredient("orange");
        setTaste("sweet");
    }
    void print() override
    {
        cout << "*Citrus Juice*" << endl;
        juice::print();
    }
};
class tropical : public fruit
{
public:
    tropical()
    {
    }
    tropical(int price, string ingredient, string taste) : fruit(price, ingredient, taste)
    {
    }
    void set_tropical()
    {
        setPrice(99);
        setIngredient("banana");
        setTaste("sweet");
    }
    void print() override
    {
        cout << "*Tropical Juice*" << endl;
        juice::print();
    }
};

class berry : public fruit
{
public:
    berry()
    {
    }
    berry(int price, string ingredient, string taste) : fruit(price, ingredient, taste)
    {
    }
    void set_berry()
    {
        setPrice(99);
        setIngredient("strawberry");
        setTaste("sweet");
    }
    void print() override
    {
        cout << "*Berry Juice*" << endl;
        juice::print();
    }
};

class leefy : public vegitables
{
public:
    leefy()
    {
    }
    leefy(int price, string ingredient, string taste) : vegitables(price, ingredient, taste)
    {
    }
    void set_leefy()
    {
        setPrice(99);
        setIngredient("spinach");
        setTaste("sweet");
    }
    void print() override
    {
        cout << "*Leefy Juice*" << endl;
        juice::print();
    }
};
class root : public vegitables
{
public:
    root()
    {
    }
    root(int price, string ingredient, string taste) : vegitables(price, ingredient, taste)
    {
    }
    void set_root()
    {
        setPrice(99);
        setIngredient("carrot");
        setTaste("sweet");
    }
    void print() override
    {
        cout << "*Root Juice*" << endl;
        juice::print();
    }
};
class mixed : public vegitables
{
public:
    mixed()
    {
    }
    mixed(int price, string ingredient, string taste) : vegitables(price, ingredient, taste)
    {
    }
    void set_mixed()
    {
        setPrice(99);
        setIngredient("beetroot");
        setTaste("sweet");
    }
    void print() override
    {
        cout << "*Mixed Juice*" << endl;
        juice::print();
    }
};

class fruit_veggy : public mixjuice
{
public:
    fruit_veggy()
    {
    }
    fruit_veggy(int price, string ingredient, string taste) : mixjuice(price, ingredient, taste)
    {
    }
    void set_fruit_veggy()
    {
        setPrice(99);
        setIngredient("apple");
        setTaste("sweet");
    }
    void print() override
    {
        cout << "*Fruit-Veggy Juice*" << endl;
        juice::print();
    }
};

class smoothey : public mixjuice
{
public:
    smoothey()
    {
    }
    smoothey(int price, string ingredient, string taste) : mixjuice(price, ingredient, taste)
    {
    }
    void set_smoothey()
    {
        setPrice(99);
        setIngredient("mango");
        setTaste("sweet");
    }
    void print() override
    {
        cout << "*Smoothey Juice*" << endl;
        juice::print();
    }
};

class sales : public juice
{
    int saleID;
    string customerName;
    int totalBill;
    int numberOfFruitJuice;
    int numberOfVegetableJuice;
    int numberOfMixedJuice;

public:
    int bill = 0;
    sales() {}
    sales(int saleID, string customerName, int totalBill) : juice()
    {
        setSaleID(saleID);
        setCustomerName(customerName);
        setTotalBill(totalBill);
    }
    void setSaleID(int saleID)
    {
        this->saleID = saleID;
    }
    void setCustomerName(string customerName)
    {
        this->customerName = customerName;
    }
    void setTotalBill(int totalBill)
    {
        this->totalBill = totalBill;
    }

    int getSaleID()
    {
        return saleID;
    }
    string getCustomerName()
    {
        return customerName;
    }
    int getTotalBill()
    {
        return totalBill;
    }
    int getNumberOfFruitJuice()
    {
        return fruit::counter;
    }
    int getNumberOfVegetableJuice()
    {
        return vegitables::counter;
    }
    int getNumberOfMixedJuice()
    {
        return mixjuice::counter;
    }
    int getTbill()
    {
        bill = (fruit::counter * 99) + (vegitables::counter * 99) + (mixjuice::counter * 99);
        return bill;
    }

    void print()
    {
        cout<<"\n### 22k-4489 ###\n### Abdullah Shafiq ###"<<endl;
        cout << "Sale ID:" << getSaleID() << endl;
        cout << "Customer Name:" << getCustomerName() << endl;
        cout << "Total Bill:" << getTbill() << endl;
        cout << "The Total Number Fruit Juices: " << getNumberOfFruitJuice() << endl;
        cout << "The Total Number Vegetable Juices: " << getNumberOfVegetableJuice() << endl;
        cout << "The Total Number Mixed Juices: " << getNumberOfMixedJuice() << endl;
    }
    friend sales operator+(const sales &sal, const sales &sal1);
};

sales operator+( sales &s1,sales &s2)
{
    if (s1.getCustomerName() != s2.getCustomerName())
    {
        throw invalid_argument("Customer names do not match");
    }

    sales result;
    int bill;
    result.setCustomerName(s1.getCustomerName());
    result.setSaleID(rand());
    result.setTotalBill(s1.getTbill() + s2.getTbill());
    return result;
}

int main()
{
    citrus c;
    tropical t;
    berry b;
    leefy l;
    root r;
    mixed m;
    fruit_veggy fv;
    smoothey s;
    sales sal, sal1;
    string customer_name;
    string newname;
    int option;
    cout<<"\n### 22k-4489 ###\n### Abdullah Shafiq ###"<<endl;
here:
    cout << "Welcome to our juice shop! What is your name?\n";
    cin >> customer_name;

    if (sal.getCustomerName() == customer_name)
    {
        cout << "You are already in our system!\n";
        sal1.setCustomerName(customer_name);
    }
    else if (sal.getCustomerName() != customer_name)
    {
        cout << "Welcome to our juice shop! Can you please enter your name again?\n";
        cin >> newname;
        sal1.setCustomerName(newname);
        fruit::counter = 0;
        vegitables::counter = 0;
        mixjuice::counter = 0;
        sal.bill = 0;
    }
    cout << "Hello, " << customer_name << "<3\n";
    cout << "Here is our menu:\n";
    cout << "1-Fruit Juices" << endl;
    cout << "2-Vegetable Juices" << endl;
    cout << "3-Mixed Juices" << endl;
    cout << "4-Checkout" << endl;
    cout << "5-Exit from menu" << endl;
    cout << "6-Exit from main program\n\n";
    cout << "Enter your option: ";
    cin >> option;
    while (option)
    {
        
        system("cls");
        cout<<"\n### 22k-4489 ###\n### Abdullah Shafiq ###"<<endl;
        switch (option)
        {
        case 1:
            fruit::counter++;
            cout << "1-Citrus Juice" << endl;
            cout << "2-Tropical Juice" << endl;
            cout << "3-Berry Juice" << endl;
            cout << "Enter your option: ";
            cin >> option;
            switch (option)
            {
            case 1:
                sal.setTotalBill(99);
                c.set_citrus();
                c.print();

                break;
            case 2:
                sal.setTotalBill(99);
                t.set_tropical();
                t.print();
                break;
            case 3:
                sal.setTotalBill(99);
                b.set_berry();
                b.print();
                break;
            default:
                cout << "Invalid Option" << endl;
                break;
            }
            break;
        case 2:
            vegitables::counter++;
            cout << "1-Leefy Juice" << endl;
            cout << "2-Root Juice" << endl;
            cout << "3-Mixed Juice" << endl;
            cout << "Enter your option: ";
            cin >> option;
            switch (option)
            {
            case 1:
                sal.setTotalBill(99);
                l.set_leefy();
                l.print();
                break;
            case 2:
                sal.setTotalBill(99);
                r.set_root();
                r.print();
                break;
            case 3:
                sal.setTotalBill(99);
                m.set_mixed();
                m.print();
                break;
            default:
                cout << "Invalid Option" << endl;
                break;
            }
            break;
        case 3:
            mixjuice::counter++;
            cout << "1-Fruit-Veggy Juice" << endl;
            cout << "2-Smoothey Juice" << endl;
            cout << "Enter your option: ";
            cin >> option;
            switch (option)
            {
            case 1:
                sal.setTotalBill(99);
                fv.set_fruit_veggy();
                fv.print();
                break;
            case 2:
                sal.setTotalBill(99);
                s.set_smoothey();
                s.print();
                break;
            default:
                cout << "Invalid Option" << endl;
                break;
            }
            break;
        case 4:
            sal.setSaleID(rand());
            sal.setCustomerName(customer_name);
            sal.print();
            break;
        case 5:
            goto here;
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "Invalid Option" << endl;
            break;
        }
        cout << "\nMain Course:" << endl;
        cout << "(1-Fruit Juices)" << endl;
        cout << "(2-Vegetable Juices)" << endl;
        cout << "(3-Mixed Juices)" << endl;
        cout << "4-Checkout" << endl;
        cout << "5-Exit" << endl;
        cout << "6-Exit from main program" << endl;
        cout << "0-Operator overloaded bill\n\n";
        cout << "Enter your option: ";
        cin >> option;
    }
    sales sal2 = sal + sal1;
    sal2.print();

    return 0;
}