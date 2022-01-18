#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n)
{
   int flag;
   for (int i = 0; i < n - 1; i++)
   {
      flag = 0;
      for (int j = 0; j < n - i - 1; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            swap(arr[j], arr[j + 1]);
            flag = 1;
         }
      }
      if (flag == 0)
      {
         break;
      }
   }
}
int minindex(int arr[], int j, int n)
{
   int min = 10000;
   int index = 0;
   for (int i = j; i < n; i++)
   {
      if (arr[i] < min)
      {
         min = arr[i];
         index = i;
      }
   }
   return index;
}
void selection(int arr[], int n)
{
   int index = 0;
   for (int i = 0; i < n; i++)
   {
      int mini = minindex(arr, i, n);
      swap(arr[mini],arr[index++]);
   }
}

int main()
{
   int arr[5] = {5,4,3,2,1};
   cout << "unsorted array";
   int n = 5;
   for (int i = 0; i < n; i++)
   {
      cout << " " << arr[i];
   }
   cout << "\n";
   selection(arr, n);
   cout << "sorted array";
   for (int i = 0; i < n; i++)
   {
      cout << " " << arr[i];
   }
}