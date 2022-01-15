#include <iostream>
using namespace std;
int compare(int arr[], int n)
{
    int j = 0;
    int dubli[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            dubli[j] = 0; 
            j++;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {

            dubli[j] = 1;
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            dubli[j] = 2;
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dubli[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter The no. of elements :: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    compare(arr, n);

    return 0;
}