#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

class Movie
{
    string movie_name;
    string show_time;

public:
    Movie()
    {
        this->movie_name = "The Legend";
        this->show_time = "10:00 PM to 1:00 AM";
    }
    string get_mov_name()
    {
        return movie_name;
    }
    string get_show_time()
    {
        return show_time;
    }
};
class ticket
{
    int row_number;
    int seat_number;
    int ticket_id;
    bool status;

public:
    void set_row(int row_number)
    {
        this->row_number = row_number;
    }
    void set_seat(int seat_number)
    {
        this->seat_number = seat_number;
    }
    void set_id(int ticket_id)
    {
        this->ticket_id = ticket_id;
    }
    int get_row()
    {
        return row_number;
    }
    int get_seat()
    {
        return seat_number;
    }
    int get_id()
    {
        return ticket_id++;
    }
};

int main()
{
    string id;
    string extracted_digits;
    int extracted_digits_int;
    cout << "Enter Your ID: ";
    cin >> id;
    extracted_digits = id.substr(4, 2);
    stringstream ss;
    ss << extracted_digits;
    ss >> extracted_digits_int;
    cout << extracted_digits_int;
    int option;
    int r_number;
    int s_number[50];
    int inc = 0;

    Movie m;
    ticket t;
    cout << "Today's Screen!\n";
    cout << m.get_mov_name() << endl;
    cout << m.get_show_time() << endl;
    t.set_id(extracted_digits_int);
    do
    {
        cout << "You wanna buy ticket? (1/0)\n";
        cin >> option;
        if (option == 1)
        {
            inc++;
            cout << "Enter Row Number:";
            cin >> r_number;
            cout << "Enter Seat Number:";
            cin >> s_number[inc];
            t.set_row(r_number);
            t.set_seat(s_number[inc]);

            for (int i = 0; i < inc; i++)
            {
                if (s_number[inc] == s_number[i])
                {
                    cout << "This seat has already been sold!.\n";
                }
                else
                {
                    cout << "Thankyou For Purchasing Ticket!\n";
                    cout << "--Reciept--\n";
                    cout << "Movie Name :" << m.get_mov_name() << endl;
                    cout << "Time: " << m.get_show_time() << endl;
                    cout << "Ticket ID: " << t.get_id() << endl;
                    cout << "Row Number: " << t.get_row() << endl;
                    cout << "Seat Number: " << t.get_seat() << endl;
                }
            }
        }
    } while (option != 0);
}
