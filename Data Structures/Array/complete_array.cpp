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



int main()
{
    int arr[]={17,12,13,15,11};
    missing(arr,5);
   return 0;
}