#include<bits/stdc++.h>
using namespace std;

void kadane(int arr[] , int n)
{
    int max=-10000;
    int cur=0;

    for (int i = 0; i < n; i++)
    {
        cur=arr[i]+cur;

        if(cur>max)
        {
           max=cur;
        }
        if(cur<0)
        {
            cur=0;
        }
    }
    cout<<"max sum in the array is :: "<<max;
    

}

int main()
{
    int arr[5]={1 ,-2 ,10 ,2 ,-2};
    kadane(arr , 5);
    return 0;
}