#include <iostream>
#include <string>
using namespace std;


bool func(int a1[] , int a2[], int n , int m)
{
    int min=a1[0] , max=a1[0];
    for (int i = 0; i <n; i++)
    {
        if (min>a1[i])
        {
            min=a1[i];
        }
        if (max<a1[i])
        {
            max=a1[i];
        }
    }

  int o=max-min+1;
   int O[o];
   for (int i = 0; i <o; i++)
   {
       /* code */
   }
     

   for (int i = 0; i < n; i++)
   {
      O[a1[i]-min]++;
   }
   for (int i = 0; i < m; i++)
   {
       if (O[a2[i]-min]==0)
       {
          return false;
       }
       
   }
   return true;
   
}
int main()
{
    int n = 7, m = 5;
    int A[n] = {1,2,3,4,5,6,7};
    int B[m] = {1111,4,5,111,7};
    cout<<func(A ,B, n ,m);

    return 0;
}