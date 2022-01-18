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

int main()
{
   int arr[5] = {5, 4, 1, 2, 3};
   cout << "unsorted array";
   int n = 5;
   for (int i = 0; i < n; i++)
   {
      cout << " " << arr[i];
   }
   cout << "\n";
   bubble(arr, n);
   cout << "sorted array";
   for (int i = 0; i < n; i++)
   {
      cout << " " << arr[i];
   }
}