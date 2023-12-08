#include <iostream>
#include <cstring>
using namespace std;

class bookType
{
    string title;
    string author;
    string publisher;
    int isbn;
    int price;
    int year;
    int num_copies;

public:
    void set_title(string title)
    {
        this->title = title;
    }
    void set_author(string author)
    {
        this->author = author;
    }
    void set_publisher(string publisher)
    {
        this->publisher = publisher;
    }
    void set_isbn(int isbn)
    {
        this->isbn = isbn;
    }
    void set_price(int price)
    {
        this->price = price;
    }
    void set_year(int year)
    {
        this->year = year;
    }
    void set_num_copies(int num_copies)
    {
        this->num_copies = num_copies;
    }

    string get_title()
    {
        return title;
    }
    string get_author()
    {
        return author;
    }
    string get_publisher()
    {
        return publisher;
    }
    int get_isbn()
    {
        return isbn;
    }
    int get_price()
    {
        return price;
    }
    int get_year()
    {
        return year;
    }
    int get_num_copies()
    {
        return num_copies;
    }
};

int main()
{
    bookType b[100];
    b[0].set_title("Jannat-ke-patty");
    b[0].set_author("Nimrah-Ahmed");
    b[0].set_publisher("Ilmo-Irfan");
    b[0].set_isbn(22334455);
    b[0].set_price(750);
    b[0].set_year(2012);
    b[0].set_num_copies(12000);
    cout << b[0].get_title() << endl;
    cout << b[0].get_author() << endl;
    cout << b[0].get_publisher() << endl;
    cout << b[0].get_isbn() << endl;
    cout << b[0].get_price() << endl;
    cout << b[0].get_year() << endl;
    cout << b[0].get_num_copies() << endl;

    // searching by its title
    string title;
    int isbn;
    int n;
    int option;
    cout << "1-Searching by title.\n2-Searching by ISBN.";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        cout << "Enter Title to be Searched:";
        cin >> title;
        for (int i = 0; i < 100; i++)
        {
            if (b[i].get_title() == title)
            {
                cout << "The Book is present at " << i + 1 << "Sno.\n";
                cout << b[i].get_title() << endl;
                cout << b[i].get_author() << endl;
                cout << b[i].get_publisher() << endl;
                cout << b[i].get_isbn() << endl;
                cout << b[i].get_price() << endl;
                cout << b[i].get_year() << endl;
                cout << b[i].get_num_copies() << endl;
                cout << "Enter Number of copies for Update:";
                cin >> n;
                b[i].set_num_copies(n);
                cout << "Number copies updated succesfully!";
                break;
            }
            else
            {
                cout << "The book is not present.";
                break;
            }
        }
    }
    break;
    case 2:
    {
        cout << "Enter ISBN to be Searched:";
        cin >> isbn;
        for (int i = 0; i < 100; i++)
        {
            if (b[i].get_isbn() == isbn)
            {
                cout << "The Book is present at " << i + 1 << "Sno.\n";
                cout << b[i].get_title() << endl;
                cout << b[i].get_author() << endl;
                cout << b[i].get_publisher() << endl;
                cout << b[i].get_isbn() << endl;
                cout << b[i].get_price() << endl;
                cout << b[i].get_year() << endl;
                cout << b[i].get_num_copies() << endl;
                cout << "Enter Number of copies for Update:";
                cin >> n;
                b[i].set_num_copies(n);
                cout << "Number copies updated succesfully!";
                break;
            }
            else
            {
                cout << "The book is not present.";
                break;
            }
        }
    }
    }
}