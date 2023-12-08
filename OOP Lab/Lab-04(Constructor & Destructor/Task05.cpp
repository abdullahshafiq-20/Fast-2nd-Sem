#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

const int max_books = 1000;
const int max_members = 500;

class member
{
    string name;
    bool is_member;
    float total_spent;
    float discount;

public:
    void set_name(string name)
    {
        this->name = name;
    }
    void set_is_member(bool is_membber)
    {
        this->is_member = is_member;
    }
    void set_discount_or_member(float total_spent, bool is_member)
    {
        discount = total_spent * 0.05;
        this->is_member=is_member;
        if(is_member==true)
        {
            this->total_spent=total_spent - discount;
        }
        else 
        {
            this->total_spent=total_spent;
        }

    }
    string get_name()
    {
        return name;
    }
    float get_total()
    {
        return (float)total_spent;
    }
};

class Book_strore
{

    string title;
    string author;
    int price;

public:
    member mem;
    void set_title(string title)
    {
        this->title = title;
    }
    void set_author(string author)
    {
        this->author = author;
    }
    void set_price(int price)
    {
        this->price = price;
    }

    string get_title()
    {
        return title;
    }
    string get_author()
    {
        return author;
    }
    int get_price()
    {
        return price;
    }
};

int main()
{
    // Books 1000 defined
    // Member 500 defined
    Book_strore b[max_books];
    member mem[max_members];
    string title;
    string author;
    float price;
    int option;
    bool is_member;
    string name;
    do
    {

        cout << "\n===Book Store===" << endl;
        cout << "1. Add a Book" << endl;
        cout << "2. Add a customer\n";
        cout << "3. Purchase a book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch (option)
        {
        case 1:
        {
            cout << "Enter a Title:";
            cin >> title;
            cout << "Enter Author:";
            cin >> author;
            cout << "Enter Price:";
            cin >> price;
            b->set_title(title);
            b->set_author(author);
            b->set_price(price);
            

            cout << "book is Added.";
        }
        break;
        case 2:
        {
            cout << "Enter Name:";
            cin >> name;
            cout << "Is Costtumer a member?(1/0):";
            cin >> is_member;
            b->mem.set_name(name);
            b->mem.set_is_member(is_member);
            b->mem.set_discount_or_member(price,is_member);
            cout << "Member is Added.";
        }
        break;
        case 3:
        {
            string booktitle;
            string costumername;
            cout << "Enter A book title you Entered above:";
            cin >> booktitle;
            cout << "Enter custumer name uou entered above:";
            cin >> costumername;
            if (b->get_title() == booktitle)
            {
                if (b->mem.get_name() == costumername)
                {
                    cout << "The Book price was: " << b->get_price() << endl;
                    if (b->get_price()==price)
                    {
                        cout<<"Checkout (5% OFF): "<<b->mem.get_total();

                    }
                    else
                    {
                        cout << "Checkout: " << b->mem.get_total();

                    }
                    cout << "yes OR no (1/0)";
                    bool opt;
                    cin >> opt;
                    if (opt == true)
                    {
                        cout << "Book Purchased.\n";
                    }
                    else if (opt == false)
                    {
                        cout << "You cancled your purchase.";
                    }
                }
            }
        }
        }

    } while (option != 4);
}