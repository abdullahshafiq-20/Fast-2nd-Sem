#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
class Admin;
class Data_scientist
{
private:
    int unique_id;
    string first_name;
    string last_name;
    string highest_education;
    int age;
    string country;
    int num_ans_given;
    int num_ans_asked;
    int users;

public:
    Data_scientist(int unique_id, string first_name, string last_name, int age, string country)
    {
        this->unique_id = unique_id;
        this->first_name = first_name;
        this->last_name = last_name;
        this->highest_education = "MS-CS";
        this->age = age;
        this->country = country;
    }
    void set_num_ans_asked(int num_ans_asked)
    {
        this->num_ans_asked;
    }
    void set_num_ans_given(int num_ans_given)
    {
        this->num_ans_given;
    }
    void set_user_count(int users)
    {
        this->users = users;
    }
    int get_user_count()
    {
        return users++;
    }
    string get_first_name()
    {
        return first_name;
    }
    string get_last_name()
    {
        return last_name;
    }
    int get_age()
    {
        return age;
    }
    string get_country()
    {
        return country;
    }
    string fixed_edu()
    {
        return highest_education;
    }
    int get_ans_given(int num_ans_given)
    {
        return num_ans_given++;
    }
    int get_ans_asked(int num_ans_asked)
    {
        return num_ans_asked++;
    }
};

class Admin
{

    string first_name;
    string last_name;
    int age;
    string country;
    int admin_id;
    int users;

public:
    Admin(int admin_id)
    {
        if (admin_id == 4489)
        {
            this->admin_id = admin_id;
            this->first_name = "Admin 22k-4489\n";
            this->last_name = "Abdullah Shafiq";
            cout << first_name;
            cout << last_name;
        }
        else
        {
            cout << "You are not an Admin.";
        }
    }
    void set_users(int users)
    {
        this->users = users;
    }
    int get_users()
    {
        return users;
    }
};

int main()
{

    string id;
    string extracted_digits;
    int extracted_digits_int;
    int option;
    int opt;
    int admin_id;
    string f_name;
    string l_name;
    int age;
    string country;
    int users = 0;
    cout << "Enter Your ID: ";
    cin >> id;
    extracted_digits = id.substr(id.length() - 3, 2);
    stringstream ss;
    ss << extracted_digits;
    ss >> extracted_digits_int;
    do
    {
        cout << "Enter The Options\n";
        cout << "1-Create User\n";
        cout << "2-Log in as Admin\n";
        cin >> option;
        switch (option)
        {
        case 1:
        {
            users++;
            cout << "Enter First Name:";
            cin >> f_name;
            cout << "Enter Last Name:";
            cin >> l_name;
            cout << "Enter Age:";
            cin >> age;
            cout << "Enter Country:";
            cin >> country;
            Data_scientist data(extracted_digits_int, f_name, l_name, age, country);
            cout << "Asked Question or You want to give an Answer?";
            cout << "\n1-Asked Question\n2-Give Answer";
            cin >> opt;
            if (opt == 1)
            {
                data.set_num_ans_asked(1);
            }
            else if (opt == 2)
            {
                data.set_num_ans_given(1);
            }
        }
        break;
        case 2:
        {
            cout << "Enter Admin ID to login:";
            cin >> admin_id;
            if (admin_id == 4489)
            {
                Admin admin(admin_id);
                admin.set_users(users);
                cout << "\nTotal Users Now: " << admin.get_users() << endl;
                ;
            }
        }
        break;
        case 3:
        {
            exit(0);
        }
        }

    } while (opt != 3);
}
