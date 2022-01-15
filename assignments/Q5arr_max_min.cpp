#include <iostream>
using namespace std;

int main()
{
    int min, max, n, i;

    cout << "Enter the NO. OF element : ";
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int int_max = -100000, int_min = 100000;
    for (i = 0; i < n; i++)
    {
        if (int_max < arr[i])
        {
            int_max = arr[i];
        }
        if (int_min > arr[i])
        {
            int_min = arr[i];
        }
    }
    cout << "The min Value :" << int_min << endl;
    cout << "The max Value :" << int_max;

    return 0;
}