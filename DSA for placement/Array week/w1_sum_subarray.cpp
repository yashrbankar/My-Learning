#include<bits/stdc++.h>
using namespace std;

void func(int arr[] , int n , int key)
{
    int sum=0;
    int is=0;
    for (int i =0; i<n; i++)
    {
        sum=sum+arr[i];
        if(sum==key)
        {
            cout<<is<<" "<<i;
        }
        if(sum>key)
        {
            sum=arr[i];
            is=i;
        }
    }
    
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    func(arr,10,15);
   return 0;
}