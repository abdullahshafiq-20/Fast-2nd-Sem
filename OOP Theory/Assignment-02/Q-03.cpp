#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string name;
    float price;

public:
    Product() {}
    Product(string name, float price)
    {
        setName(name);
        setPrice(price);
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setPrice(int price)
    {
        this->price = price;
    }

    string getName()
    {
        return name;
    }

    float getPrice()
    {
        return price;
    }
    virtual float get_discounted_Price()
    {
        return price;
    }

    virtual void print_details()
    {
        cout << "Name: " << getName() << endl;
        cout << "Price: " << getPrice() << endl;
    }
    friend Product operator&( Product& p6, Product& p7);
};
Product operator&( Product& p6, Product& p7)
{
    float avg;
    avg = (p6.getPrice() + p7.getPrice()) / 2;
    string name;
    name = p6.getName() + " & " + p7.getName();
    return Product(name, avg);
}
class Book : public Product
{
    string author;
public:
    Book() {}
    Book(string name, float price, string author) : Product(name, price)
    {
        setAuthor(author);
    }
    void setAuthor(string author)
    {
        this->author = author;
    }
    string getAuthor()
    {
        return author;
    }
    void print_details() override
    {
        cout << "Name: " << getName() << endl;
        cout << "Price: " << getPrice() << endl;
        cout << "Author: " << getAuthor() << endl;
    }
    float get_discounted_Price() override
    {
        return getPrice() - (getPrice() * 0.05);
    }
};
class Electronic : public Product
{
    string brand;
public:
    Electronic() {}
    Electronic(string name, float price, string brand) : Product(name, price)
    {
        setBrand(brand);
    }
    void setBrand(string brand)
    {
        this->brand = brand;
    }
    string getBrand()
    {
        return brand;
    }
    void print_details() override
    {
        cout << "Name: " << getName() << endl;
        cout << "Price: " << getPrice() << endl;
        cout << "Brand: " << getBrand() << endl;
    }
    float get_discounted_Price() override
    {
        return getPrice() - (getPrice() * 0.15);
    }
};
class Clothing : public Product
{
    string size;

public:
    Clothing() {}
    Clothing(string name, float price, string size) : Product(name, price)
    {
        setSize(size);
    }
    void setSize(string size)
    {
        this->size = size;
    }
    string getSize()
    {
        return size;
    }
    void print_details() override
    {
        cout << "Name: " << getName() << endl;
        cout << "Price: " << getPrice() << endl;
        cout << "Size: " << getSize() << endl;
    }

    float get_discounted_Price() override
    {
        return getPrice() - (getPrice() * 0.1);
    }
};
class Customer
{
    string name;
    float balance;
public:
    Customer() {}
    Customer(string name, float balance)
    {
        setName(name);
        setBalance(balance);
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setBalance(float balance)
    {
        this->balance = balance;
    }
    string getName()
    {
        return name;
    }
    float getBalance()
    {
        return balance;
    }
    void print_details()
    {
        cout << "Name: " << getName() << endl;
        cout << "Balance: " << getBalance() << endl;
    }
    virtual void buy(Product *p)
    {
        if (getBalance() >= p->getPrice())
        {
            setBalance(getBalance() - p->getPrice());
            cout << "You have bought " << p->getName() << endl;
            cout << "Your balance is " << getBalance() << endl;
        }
        else
        {
            cout << "You don't have enough balance to buy " << p->getName() << endl;
        }
    }
};
class VIP_customers : public Customer
{
public:
    VIP_customers() {}
    VIP_customers(string name, float balance) : Customer(name, balance) {}
    void buy(Product *p) override
    {
        if (getBalance() >= p->get_discounted_Price())
        {
            setBalance(getBalance() - p->get_discounted_Price());
            cout << "You have bought " << p->getName() << endl;
            cout << "Your balance is " << getBalance() << endl;
        }
        else
        {
            cout << "You don't have enough balance to buy " << p->getName() << endl;
        }
    }
};
int main()
{
    cout<<"\n### 22k-4489 ###\n### Abdullah Shafiq ###"<<endl;
    Product *p1 = new Product("Product 1", 100);
    Product *p2 = new Book("Book 1", 200, "Author 1");
    Product *p3 = new Electronic("Electronic 1", 300, "Brand 1");
    Product *p4 = new Clothing("Clothing 1", 400, "Size 1");
    Customer *c1 = new Customer("Customer 1", 1000);
    Customer *c2 = new VIP_customers("VIP Customer 1", 1000);
    cout<<"***Regular Customer Buying Item***"<<endl;
    c1->buy(p1);
    c1->buy(p2);
    c1->buy(p3);
    c1->buy(p4);
    cout<<"\n***VIP Customer Buying Item***"<<endl;
    c2->buy(p1);
    c2->buy(p2);
    c2->buy(p3);
    c2->buy(p4);
    cout<<"\n### 22k-4489 ###\n### Abdullah Shafiq ###"<<endl;

    // creating 2 products with the prices of 2 and 10.
    cout<<"\nOperator & called:"<<endl;
    Product p6("Book",10);
    Product p7("Pen",2);
    Product p8 = p6 & p7;
    p8.print_details();
    return 0;
}

