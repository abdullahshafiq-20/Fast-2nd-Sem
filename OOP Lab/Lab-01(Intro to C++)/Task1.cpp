#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float km;
    cout << "Enter Speed in km:";
    cin >> km;
    cout << "speed in miles:" << fixed << setprecision(2) << km / 1.609;
}