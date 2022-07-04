#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int start , int end)
{
    int i=start;
    int j=end;
    int pivot=arr[start];
    // exact position arr[start]
    while (i<j)
    {
        while(arr[i]<=pivot){i++;}
        while(arr[j]>pivot){j--;}
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[start], arr[j]);
    return j;

}
// recursive function 
void quickSort(int arr[], int start , int end)
{
    if(start<end)// that means array contains at least one element 
    {
        int pivotPosition=partition(arr, start,end);
        quickSort(arr,start,pivotPosition-1);
        quickSort(arr,pivotPosition+1,end);
    }
}
void display(int arr[], int n)
{
    // displaying arrays
    for(int i=0;i<n;i++)
    {
        cout<<"] ["<<arr[i];
    }
    cout<<"\n";
}
int main()
{
    int arr[]={5,4,2,2,1};
    display(arr,5);
    quickSort(arr,0,5);
    display(arr,5);
   return 0;
}