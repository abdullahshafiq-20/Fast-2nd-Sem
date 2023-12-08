#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, temp;
    cout << "Enter Values:\n";
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}