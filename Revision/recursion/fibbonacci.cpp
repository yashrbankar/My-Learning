#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
  if(n==1||n==0)
  {
    return n;
  }
  else
  {
    return fib(n-2)+fib(n-1);
  }
  
}

int main()
{
  cout<<"Fibbonaci serius :: ";
  for(int i=0;i<10;i++)
  {
    cout<<" "<<fib(i);
  }
  return 0;
  

}

