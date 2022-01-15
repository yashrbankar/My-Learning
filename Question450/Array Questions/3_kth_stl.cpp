#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   int arr[5]={2,3,4,1,5}; // 1,2,3,4,5
   cout<<"enter the k:: ";
   sort(arr,arr+5);
   int k=0;
   cin>>k;
   cout<<arr[k-1]<<" "<<arr[5-k];

   return 0;
}