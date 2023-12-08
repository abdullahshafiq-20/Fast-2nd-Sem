#include <iostream>
using namespace std;
int main()
{

    int item[3][3];
    int sum = 0;
    int row, col;
    cout << "Enter array elements:" << endl;

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            cin >> item[row][col];
            sum = sum + item[row][col];
        }

        cout << "The sum of row" << row << " : " << sum << endl;
        sum = 0;
    }
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            cout << item[row][col]<<" ";
        }
        cout << "\n";
    }
    cout << endl;
    return 0;
}
