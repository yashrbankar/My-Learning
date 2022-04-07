#include<bits/stdc++.h>
using namespace std;

int SumN(int n)
{
  if(n>0)
  {
     return n+SumN(n-1);
  }
  return 0;
}

int main()
{
   cout<<"answer :: "<<SumN(10);
}

