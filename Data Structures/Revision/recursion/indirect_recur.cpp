#include <bits/stdc++.h>
using namespace std;
void Func1(int);
void Func(int n)
{
   if(n>0)
   {
     cout<<" "<<n;
     Func1(n-1);
   }
   
}

void Func1(int n)
{
   if(n>0)
   {
     cout<<" "<<n;
     Func(n/2);
   }
   
}



int main()
{
  Func(20);
  return 0;
 }
 
