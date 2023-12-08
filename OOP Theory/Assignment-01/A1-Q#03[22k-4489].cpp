#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

class HeartRates
{
    string name;
    int unique_id;
    int day;
    int month;
    int year;
    int age;

public:
    void set_name(string name)
    {
        this->name = name;
    }
    string get_name()
    {
        return name;
    }

    void set_unique_id(int id)
    {
        this->unique_id = unique_id;
    }
    int get_unique_id()
    {
        return unique_id;
    }

    void set_birthday(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int get_birthday()
    {
        this->age = 2023 - year;

        return age;
    }
    int get_rate()
    {
        return (220 - age);
    }
    string target_hr()
    {
        int upper,lower;
        upper=0.85*get_rate();
        lower=0.50*get_rate();
        return (to_string(upper)+"-"+to_string(lower));
    }
    HeartRates(string name, int unique_id, int day, int month, int year)
    {
        set_name(name);
        set_unique_id(unique_id);
        set_birthday(day, month, year);
    }
};
int main()
{
    string name;
    int day, month, year;
    string id;
    string extracted_digits;
    int extracted_digits_int;
    cout << "Enter Your ID: ";
    cin >> id;
    extracted_digits = id[6];
    stringstream ss;
    ss << extracted_digits;
    ss >> extracted_digits_int;
    cout << "Enter your Name:";
    cin >> name;
    cout << "Enter Day:";
    cin >> day;
    cout << "Enter Month:";
    cin >> month;
    cout << "Enter year:";
    cin >> year;
    HeartRates HR(name, extracted_digits_int, day, month, year);
    cout<<"==**INFROMATION**=="<<endl;
    cout<<"Name: "<<HR.get_name()<<endl;
    cout<<"Age: "<<HR.get_birthday()<<endl;
    cout<<"HeartRate: "<<HR.get_rate()<<endl;
    cout<<"Target Heart Rate: "<<HR.target_hr()<<endl;
}