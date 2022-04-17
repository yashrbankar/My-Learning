#include <iostream>
using namespace std;
int n;
int arr[1]; // universal variables 

int max()
{

    int max = -100000;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Maxium :" << max;
}

int main()
{

    cout << " N ";
    cin >> n;

    // arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max();

    return 0;
}