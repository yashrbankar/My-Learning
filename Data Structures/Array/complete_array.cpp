#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<"\n";
}

int partition(int arr[], int start , int end)
{
    int i=start;
    int j=end;
    int pivot=arr[start];

    while (i<j)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[start],arr[j]);
    return j;
}


void Quick(int arr[], int start ,int end)
{
    if(start<end)
    {
        int j=partition(arr, start, end);
        Quick(arr,start,j-1);
        Quick(arr,j+1,end);
    }
}
int main()
{
    int arr[]={5,3,4,3,2,1,INT_MAX};
    display(arr ,6);
    Quick(arr,0,6);
    display(arr,6);
   return 0;
}