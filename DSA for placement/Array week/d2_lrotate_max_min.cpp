#include<bits/stdc++.h>
using namespace std;

void Display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
}

int Min(int arr[] , int count)
{
    int min=arr[0];
   for (int i = 0; i < count; i++)
   {
       if(min>arr[i])
       {
           min=arr[i];
       }
   }
   return min;
}

int Max(int arr[] , int count)
{
    int max=arr[0];
   for (int i = 0; i < count; i++)
   {
       if(max<arr[i])
       {
           max=arr[i];
       }
   }
   return max;
}

void Delete1(int arr[], int n)
{
    cout<<"\n";
    Display( arr, n);
    int index;
    cout<<"\n enter the index of element to be deleted :: "; 
    cin>>index;

    for (int i =index; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    Display(arr , n-1);

}
void rotate(int arr[] , int n)
{
    cout<<"\n left rotate ::";
   int first=arr[0];
   for (int i = 0; i < n; i++)
   {
       arr[i]=arr[i+1];
   }
   arr[n-1]=first;
   Display(arr , n);

}

int main()
{
   int n=5;
   int arr[n]={4,3,2,7,5};
   cout<<"\n minium :: "<<Min(arr , n);
   cout<<"\n maxium :: "<<Max(arr , n);
   Delete1(arr , n);
   n--;
   rotate(arr , n);

   return 0;
}
