#include<bits/stdc++.h>
using namespace std;

int partition(int arr[] , int l , int h)
{
    int i , j , pivot;
    i=l;
    j=h;
    pivot=arr[l];
    while (i<j)
    {
        while(pivot>=arr[i]){i++;}
        while(pivot<arr[j]){j--;}
        if (i<j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(pivot , arr[j]);
    return j;    
}


void quicksort(int arr[], int l , int h)
{
    if (l<h)
    {
      int j1=partition(arr , l , h);
      quicksort(arr , l, j1-1 );//
      quicksort(arr ,j1+1 , h); //
    }
    
}

int main()
{
   int arr[5]={5,4,3,2,1};
   for(int i=0; i<5;i++)
   {
       cout<<arr[i]<<" ";
   }
   quicksort(arr , 0 ,4);

   for(int i=0; i<5;i++)
   {
       cout<<arr[i]<<" ";
   }

   return 0;
}