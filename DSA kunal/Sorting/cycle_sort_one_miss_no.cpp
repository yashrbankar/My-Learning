#include <iostream>
using namespace std;

int cycle_missing(int arr[], int n)
{
    int i = 0;
    while (i <= n)
    {
        int correctindex = arr[i]; //3, 0, 5, 2, 1
        if (i != correctindex && correctindex != n)
        {
            int temp = arr[i];
            arr[i] = arr[correctindex];
            arr[correctindex] = temp;
        }
        else
        {
            i++;
        }
    }
}

/////////////////////////////////
int missing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i)
        {
            return i;
        }
        
    }
    
}

int display(int arr[], int no)
{
    for (int i = 0; i < no; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int sizeofarray;
    int arr[] = {3, 0, 5, 2, 1};
    sizeofarray = sizeof(arr) / sizeof(arr[0]);

    cout << "input array ::" << endl;
    display(arr, sizeofarray);
    cycle_missing(arr, sizeofarray);
    cout << endl;

    // cout << "This Sorted Arrray  :: " << endl;
    // display(arr, sizeofarray);

    cout<<"The Missing Number in the array is  :: "<<missing( arr, sizeofarray);

    return 0;
}