#include <iostream>
using namespace std;

void countDown(int number)
{
    if (number == 0)
    {
        cout << 0 << endl;
        return;
    }
    cout << number << " ";
    countDown(number - 1);
}

int main()
{
    int number;
    cout << "Enter the number to start the countdown: ";
    cin >> number;

    cout << "Countdown: ";
    countDown(number);
    return 0;
}