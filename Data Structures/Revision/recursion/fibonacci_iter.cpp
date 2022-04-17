#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
  int t1=0 , t2=1,s=0;
  cout<<" "<<t1<<" "<<t2;
  for(int i=1;i<n;i++)
  {
    s=t1+t2;
    t1=t2;
    t2=s;
    cout<<" "<<s;
  }
  return s;

}


int main()
{
   fib(5);
   return 0;
}


