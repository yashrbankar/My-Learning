#include<bits/stdc++.h>
using namespace std;

void missing(int arr[], int n)
{
    sort(arr,arr+5);
    int i=0;
    int diff =arr[0]-i;
    for(i=0;i<n;i++)
    {
        if(diff!=arr[i]-i)
        {
            cout<<"\n missing element ::"<<diff+i;
            diff++;
        }
    }
}

void multipleMissing(int arr[], int n)
{
    // sort(arr,arr+5);
    int i=0,diff;
    diff=arr[i]-i;
    for ( i = 1; i < n; i++)
    {
        if(diff!=arr[i]-i)
        {
            int tempDiff=arr[i]-i-diff;
            while (tempDiff>0)
            {
                cout<<"\n missing Element is :"<<diff+i;
                diff++;
                tempDiff--;
            }
        }
    }
    
}



int main()
{
    int arr[]={11,13,15,20,25};
    //missing(arr,5);
    multipleMissing(arr,5);
   return 0;
}