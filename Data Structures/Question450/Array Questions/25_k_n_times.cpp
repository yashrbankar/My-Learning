#include <iostream>
#include <algorithm>
using namespace std;

void func(int arr[], int n)
{
    int k = 4, D, count = 0;
    cout << "Enter k :: ";
    // cin >> k;
    D = n / k;
    cout << "Elements are :: " << endl;
    for (int i = 0;  i < n; i++)
    {
        count=0;
        while (arr[i] == arr[i + 1])
        {
            count++;
            i++;
            if (count >= D )
            {
                cout << arr[i] <<" times "<<count+1<< endl;
            } 
        }
    }
}

int main()
{
    int n = 8;
    int arr[n] = {3, 1, 2, 2, 1, 2, 3, 3};
    sort(arr, arr + n);
    func(arr, n);

    return 0;
}