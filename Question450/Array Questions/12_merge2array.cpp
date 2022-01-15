#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n)
    {

        if (arr1[i] > arr2[j])
        {
            int t = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = t;
            sort(arr2, arr2 + m);
        }
        i++;
    }
}
int main()
{
    int n , m;
     cout<<"Enter the N & M :: ";
    cin>>n>>m;
    int arr1[n], arr2[m];
    cout<<"Enter the elements in first array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
     cout<<"Enter the elements in Second array ";
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    merge(arr1 ,arr2, n , m);

    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    for (int i = 0; i < m; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
}