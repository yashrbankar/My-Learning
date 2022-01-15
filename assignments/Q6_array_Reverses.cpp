#include<iostream>
using namespace std;

int main()
{
    int i ,n ;
    
    cout<<"Enter N :";
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"-----------------"<<endl;
    for ( i = n-1; i <=n && i>=0; i--)
    {
        cout<< arr[i]<<" ";
    }
    
    


return 0;
}