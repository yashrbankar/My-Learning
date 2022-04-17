#include<iostream>
using namespace std;

void func(int arr[] , int n)
{
   
   int arr1[n];
   arr1[0]=-1; 
   for (int k= 0; k <n; k++)
   {
     arr[i]=x;
     arr1[x]++;
   }

   for (int i = 1; i <n ; i++)
   {
       if (arr1[i]==0)
       {
            return i;
       }
   }  
}

int main()
{
    int arr[7]={5,4,3,2,1,6};
    cout<<func(arr , 7);    
    return 0;
}