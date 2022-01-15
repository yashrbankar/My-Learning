#include <iostream>
using namespace std;

int func(int arr[], int n)
{
    // int i=0;
    int buy = arr[0], sell = arr[ 1];
    int  profit1= 0;
    for (int  i = 0; i < n-1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            if (buy >= arr[i])
            {
                buy = arr[i];
            }
            if (sell <= arr[i + 1])
            {
                sell = arr[i + 1];
            }
            profit1= sell - buy;
        }
        else if (arr[i] > arr[i + 1])
        {
            if (buy >= arr[i])
            {
                buy = arr[i];
            }
        }
    }
    cout<<" profit1: "<< profit1+1 ;
}

int main()
{
    int arr[7] = {10,21,1,2,43,0,2};
    func(arr, 7);
    return 0;
}