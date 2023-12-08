#include <iostream>
using namespace std;

struct details
{
    int asc_number;
    string author_name;
    string book_title;
    int flag_no;
};
int main()
{
    struct details lib[100];
    int n, opt, add, n1, av = 0;
    string author, title;
    char ch;
    cout << "Enter no. of books in the lib: ";
    cin >> n;

    cout << "Enter book details in the library" << endl;
    for (int i=0; i < n; i++)
    {

        cout << "Enter book name: ";
        cin >> lib[i].book_title;
        cout << "Enter author name: ";
        cin >> lib[i].author_name;
        cout << "Enter accession number: ";
        cin >> lib[i].asc_number;
        cout << "Is it available ? ";
        cin >> lib[i].flag_no;
    }

    do
    {
        n;
        cout << "------Main Menu------" << endl;
        cout << "1.Display book information" << endl;
        cout << "2.Add new book" << endl;
        cout << "3.Display books of particular author_name" << endl;
        cout << "4.Display no. of books of particular title" << endl;
        cout << "5.Total no. of books" << endl;
        cout << "6.Issue a book" << endl;
        cin >> opt;

        switch (opt)
        {
        case 1:
        {
            for (int i = 0; i < n; i++)
            {
                cout << "Accssion no.: " << lib[i].asc_number << endl;
                cout << "Book name: " << lib[i].book_title << endl;
                cout << "author_name name: " << lib[i].author_name << endl;
                if (lib[i].flag_no == 1)
                    cout << "Available" << endl;
                else
                    cout << "Not Available" << endl;
            }
        }
        break;
        case 2:
        {
            cout << "Enter no. of books to be added: ";
            cin >> add;
            add = add + n;
            for (int i = n; i < add; i++)
            {
                cout << "Enter book name: ";
                cin >> lib[i].book_title;
                cout << "Enter author name: ";
                cin >> lib[i].author_name;
                cout << "Enter accession number: ";
                cin >> lib[i].asc_number;
                cout << "Is it available ? ";
                cin >> lib[i].flag_no;
            }
            n = n + add-1;
        }
        break;
        case 3:
        {
            cout << "Enter author name: ";
            cin >> author;
            for (int i = 0; i < n; i++)
            {
                if (author == lib[i].author_name)
                {
                    cout << "Accession no.: " << lib[i].asc_number << endl;
                    cout << "Book title: " << lib[i].book_title << endl;
                    cout << "Author: " << lib[i].author_name << endl;
                    cout << "Available: ";
                    if (lib[i].flag_no == 1)
                        cout << "Yes" << endl;
                    else
                        cout << "No" << endl;
                }
            }
        }
        break;
        case 4:
        {
            cout << "Enter Boot title: ";
            cin >> title;
            for (int i = 0; i < n; i++)
            {
                if (title == lib[i].book_title)
                {
                    n1++;
                }
            }
            cout << "There are " << n1 << " books of this title" << endl;
        }
        break;

        case 5:
        {
            cout << "There are total " << n << " books in this library." << endl;
        }
        break;
        case 6:
        {
            cout << "Enter book name: ";
            cin >> title;
            cout<<"Enter author name: ";
            cin>>author;
            for (int i = 0; i < n; i++)
            {
                if (title == lib[i].book_title && author == lib[i].author_name)
                {
                    if (lib[i].flag_no == 1)
                    {
                        cout << "Book available" << endl;
                        cout << "Thankyou" << endl;
                        lib[i].flag_no = 0;
                        break;
                    }
                }
            }
        }
        break;
        }

        cout << "Do want to perform another task ? (y-yes, n-no)"<<endl;
        cin >> ch;
    } while (ch != 'n');

    return 0;
}