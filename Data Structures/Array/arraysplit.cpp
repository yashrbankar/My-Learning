#include <iostream>
using namespace std;

int main()
{
    int i, j, a;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int arrf[4];
    int arrs[4];
    for (j = 0, i = 0; j < 5, i < 5; j++, i++)
    {

        arrf[j] = arr[i];

        cout << arrf[i];
    }
    cout << endl;
    for (j = 0, i = 5; j < 5, i < 10; j++, i++)
    {

        arrs[j] = arr[i];

        cout << arrs[j];
    }

    return 0;
}