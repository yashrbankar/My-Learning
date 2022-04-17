#include <iostream>
using namespace std;

int main()
{
    int i, n, search;
    cout << "Enter N :";
    cin >> n;

    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "search no : ";
    cin >> search;
    for ( int q=0 , i = 0; i < n; q++ , i++)
    {
        if (arr[i] == search)
        {
            cout << arr[i] << " is Found";
        }
            
        
    }
    // for (i = 0; i < n; i++)
    // {
    //     if (arr[i] =!search)
    //     {
    //         cout << "Not Found";
    //     }
    // }

    return 0;
}