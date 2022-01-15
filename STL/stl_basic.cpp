#include <bits/stdc++.h> //
using namespace std;
int main()
{
    
    int element;
    
    cout << "Enter element ::";
    cin >> element;

    int arr[5] = {1, 2, 2, 2, 4};
    // Max and min in the array
    int min = *min_element(arr, arr + 5);
    int max = *max_element(arr, arr + 5);
    // sum of lthe array

    int sum = accumulate(arr, arr + 5, 0);

    // this is the no of times element present inthe array
    int coun = count(arr, arr + 5, 2);

    int search = *find(arr, arr + 5, element);
    reverse(arr, arr + 5); // mistake scope  no return type

    cout << "min" << min << endl
         << "Max" << max << endl
         << "sum" << sum << endl
         << "count" << coun << endl
         << "search" << search << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    if (element == search)
    {
        cout << "Number is found " << endl;
    }
    else
    {
        cout << "Not fund" << endl;
    }
    // sorting
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}