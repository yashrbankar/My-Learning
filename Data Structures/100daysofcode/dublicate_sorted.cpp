#include<bits/stdc++.h>
using namespace std;

void dubli()
{
    int arr[]={1,2,2,3,3,3,4,4,4,4};
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]==arr[i+1])
        {
          int j=i+1;
          while (arr[i]==arr[j])
          {
              j++;
          }
          cout<<"element "<<arr[i]<<" is dualicate "<<j-i <<" times\n";
          i=j-1;
        }
    }

}

int main()
{
    dubli();
   return 0;
}