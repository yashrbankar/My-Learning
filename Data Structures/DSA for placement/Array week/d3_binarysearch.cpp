#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}

int binary(int arr[], int l, int h, int key)
{

    if (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            return binary(arr, l, mid - 1, key);
        }
        else
        {
            return binary(arr, mid + 1, h, key); // mistake scope;
        }
    }
    return -1;
}

void reverse1(int arr[], int n)
{
    int i = 0, j = n;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    display(arr, n);
}

int main()
{
    int key;
    int arr[5] = {2, 5, 7, 9, 10};
    // int n=5;
    cout << "enter the value to searched :: ";
    cin >> key;
    cout << "result :: " << binary(arr, 0, 4, key);
    cout<<"\n";

    reverse1(arr, 4);

    int n, m , count=0;

    cout<<"\nenter the two for merging ::\n\n";
    cout<<"number of element in array 1 ";
    cin>>n;
    cout<<"number of element in array 2 ";
    cin>>m;

    int arr1[m];
    int arr2[n];
    int arrm[m+n];

    cout<<"\nenter the element in array 1\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
        arrm[count++]=arr1[i];
    }
    cout<<"\nenter the element in array 2 \n ";
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
        arrm[count++]=arr2[i];
    }
    display(arrm , n+m);
    return 0;
}