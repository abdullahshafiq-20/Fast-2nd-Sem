#include <iostream>
#include <string>
using namespace std;

class dayType
{

    string day;

public:
    // Constructors
    dayType()
    {
        day = "Sun";
    }

    dayType(string d)
    {
        day = d;
    }

    dayType(const dayType &other)
    {
        day = other.day;
    }

    // Set the day
    void setDay(string d)
    {
        day = d;
    }

    // Print the day
    void printDay()
    {
        cout << day << endl;
    }

    // Return the day
    string getDay()
    {
        return day;
    }

    string getNextDay()
    {

        string days[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
        for (int i = 0; i < 7; i++)
        {
            if (days[i] == day)
            {
                return days[(i + 1) % 7];
            }
        }
    }

    string getPreviousDay()
    {
        string days[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
        for (int i = 0; i < 7; i++)
        {
            if (days[i] == day)
            {
                return days[(i + 6) % 7];
            }
        }
    }

    // Return the day after adding a certain number of days
    string getDayAfterAdding(int x)
    {
        string days[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
        for (int i = 0; i < 7; i++)
        {
            if (days[i] == day)
            {
                return days[(i + x) % 7];
            }
        }
    }
};
int main()
{
    dayType delight; // default constructor, sets day to "Sun"
    string daychoice;
    cout << "Set the Day:" << endl;
    cin >> daychoice;
    delight.setDay(daychoice);

    int option;
    cout << "1-cuurent day\n";
    cout << "2-next day\n";
    cout << "3-previous day\n";
    cout << "4-add";
    cin >> option;

    switch (option)
    {

    case 1:
    {
        string currentDay = delight.getDay();
        cout << currentDay << endl;
        main();
        break;
    }

    case 2:
    {
        string nextDay = delight.getNextDay();
        cout << nextDay << endl;
        main();
        break;
    }
    case 3:
    {
        string previousDay = delight.getPreviousDay();
        cout << previousDay << endl;
        main();
        break;
    }

    case 4:
    {
        int n;
        cout << "Add no of days:" << endl;
        cin >> n;
        string Day = delight.getDayAfterAdding(n);
        cout << Day << endl;
        main();
        break;
    }
    }
}