#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct TelephoneRecord
{
    string person_name;
    string area_code;
    int phone_num;
};

void display(struct TelephoneRecord record[20]);
void add(struct TelephoneRecord record[20]);
void update(struct TelephoneRecord record[20]);
int main()
{
    int i = 0;
    int a = 0;
    int option;
    TelephoneRecord record[20];
    do
    {
        i++;
        cout << "Enter " << i << " Person name:";
        cin >> record[i].person_name;
        cout << "Enter " << i << " Area Code:";
        cin >> record[i].area_code;
        cout << "Enter " << i << " Phone Number:";
        cin >> record[i].phone_num;

    } while (i < 3);
    do
    {
        cout<<"\n#########################";
        cout << "\nEnter Followin Option:";
        cout << "\n1.Dispaly.\n2.Add Record.\n3.Update.\n4.END.";
        cin >> option;
        switch (option)
        {
        case 1:
        {
            display(record);
            if (option == 1)
            {
                a++;
            }
            if (a > 1)
            {
                add(record);
                break;
            }
            break;
        }
        case 2:
        {
            int k = 3;
            do
            {
                k++;
                cout << "Enter " << k << " Person name:";
                cin >> record[k].person_name;
                cout << "Enter " << k << " Area Code:";
                cin >> record[k].area_code;
                cout << "Enter " << k << " Phone Number:";
                cin >> record[k].phone_num;
                cout<<"##Record Added Succesfully.##";
            } while (k < 4);
            break;
        }
        case 3:
        {
            update(record);
            break;
        }
        case 4:
        {
            exit(4);
            break;
        }
        }
    } while (option = 4);
}
void display(struct TelephoneRecord record[20])
{
    int j = 0;
    do
    {
        j++;
        cout << "\nRecord# " << j << endl;
        cout << "Name: " << record[j].person_name << endl;
        cout << "Area Code: " << record[j].area_code << endl;
        cout << "Phone Number:" << record[j].phone_num << endl;
    } while (j < 3);
}
void add(struct TelephoneRecord record[20])
{
    int t = 3;
    do
    {
        t++;
        cout << "\nRecord# " << t << endl;
        cout << "Name: " << record[t].person_name << endl;
        cout << "Area Code: " << record[t].area_code << endl;
        cout << "Phone Number:" << record[t].phone_num << endl;
        if (t = 4)
        {
            break;
        }
    } while (t < 4);
}
void update(struct TelephoneRecord record[20])
{
    cout << "In which Index you want to Update Record:";
    int index;
    cin >> index;
    cout << index << " Index Record:\n";
    cout << "Record# " << index << endl;
    cout << "Name: " << record[index].person_name << endl;
    cout << "Area Code: " << record[index].area_code << endl;
    cout << "Phone Number:" << record[index].phone_num << endl;
    cout << "type A new Record:\n";
    cout << "Enter " << index << " Person name:";
    cin >> record[index].person_name;
    cout << "Enter " << index << " Area Code:";
    cin >> record[index].area_code;
    cout << "Enter " << index << " Phone Number:";
    cin >> record[index].phone_num;
    cout << "\n##Record Updated Succesfully.##";
}
