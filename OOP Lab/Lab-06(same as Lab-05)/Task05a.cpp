#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Book
{
private:
    static int count;
    string name;
    const string ISBN;
    char *author;
    string genre;

public:
    Book()
    {
    }
    Book(string name, string ISBN, char *author, string genre)
    {
        set_name(name);
        set_author(author);
        set_genre(genre);
        count++;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    void set_author(char *author)
    {
        this->author = new char[31];
    }
    void set_genre(string genre)
    {
        this->genre = genre;
    }
    static int get_count()
    {
        return count;
    }
    Book(const Book &other) : name(other.name), ISBN(other.ISBN), genre(other.genre)
    {
    }
        ~Book()
    {
        delete[] author;
    }


};
int Book::count = 0;

int main()
{
    int n_book;
    cout << "Enter Number of books You want tio enter:";
    cin >> n_book;
    Book *books=new Book[n_book];
    for (int i = 0; i < n_book; i++)
    {
        string name, isbn, genre;
        char author[31];

        cout << "\nBook #" << i + 1 << "\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "ISBN: ";
        getline(cin, isbn);
        cout << "Author: ";
        cin.getline(author, 31);
        cout << "Genre: ";
        getline(cin, genre);
        Book (name,isbn,author,genre);

    }
     cout << "\nNumber of books in library: " << Book::get_count() << "\n";
    Book bookOne("The Catcher in the Rye", "978-0316769174", "J.D. Salinger", "Fiction");
    Book bookTwo(bookOne);
    Book bookThree = bookTwo;

    return 0;
}

