#include<bits/stdc++.h>
using namespace std;

void binary()
{
    int arr[5]={2,4,6,7,9};
    int l=0, h=4, mid , key , ind=-1;
    cout<<"enter the to be search :: ";
    cin>>key;

    while (l<=h)
    {
        mid=(l+h)/2;
        if(key==arr[mid])
        {
            ind=mid;
            break;
        }
        else if(key>arr[mid])
        {
             l=mid+1;
        }
        else if(key<arr[mid])
        {
             h=mid-1;
        }
    }
    if(ind==-1)
    {
        cout<<"element Not found ";
    }
    else
    {
        cout<<"element is found at index :: "<<ind;
    }
}
int main()
{
    binary();
   
   return 0;
}