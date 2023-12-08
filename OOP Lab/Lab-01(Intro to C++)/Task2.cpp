#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter size of Array:";
    cin >> num;
    int array[num];
    int i, temp;
    for (i = 0; i < num; i++)
    {
        cin >> array[i];
    }
    for (i = 0; i < num; i++)
    {
        for (int j = 1; j < num; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "The smallest number is:" << array[0];
}