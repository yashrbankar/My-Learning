#include <bits/stdc++.h>
using namespace std;

int Factor(int n)
{
   if(n==0||n==1)
   {
      return 1;
   }
   else
   {
    return n*Factor(n-1);
   }
   
}
int main()
{
  cout<<"Factorail ::"<<Factor(5);
  return 0;
}
