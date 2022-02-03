#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=6;
    int arr[]={1,2,3,4,5,6};
    int temp=arr[0];
    for (int i = 1; i <=6; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[5]=temp;

    int i=0,j=5;
    while (i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    
    for (int i = 0; i < 6; i++)
    {
        cout<<" "<<arr[i];
    }


    
    
   
   return 0;
}