#include <bits/stdc++.h>
using namespace std;

int partition(int first, int last, int arr[])
{
    int i = first;
    int j = last;
    int pivot = arr[first];

    while (i < j)
    // this commit
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j) // mistake : condtion is very imp beacaue the eg 5,4,3,2,1
        {
            swap(arr[i], arr[j]); // ( swapiing i th index vs j th index )
            // swap function 
        }
    }
    swap( arr[first], arr[j]); // first with j th 
    return j;
}

void Quicksort(int first, int last, int arr[]) // passing vector as parameter
{
    if (first < last)
    {
        int j1;
        j1 = partition(first, last, arr);
        Quicksort(first, j1 - 1, arr);
        Quicksort(j1 + 1, last, arr);
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout << "before sorting ::";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    Quicksort(0, 4, arr);

    cout << "Sorted Array :: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}