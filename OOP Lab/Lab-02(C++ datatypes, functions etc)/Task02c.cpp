#include <iostream>
using namespace std;

int sum(int number, int power)
{
    if (power == 0)
    {
        return 1;
    }
    return number * sum(number, power - 1);
}

int main()
{
    int number, p;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the power: ";
    cin >> p;

    cout << number << " to the power of " << p << " is " << sum(number, p) << endl;
    return 0;
}