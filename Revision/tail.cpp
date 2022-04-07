#include <bits/stdc++.h>
using namespace std;


void recursion(int n)
{
  if(n>0)
  {
    cout<<n<<"-> calling time"<<"\n";
    recursion(n-1);
    
    cout<<n<<"-> returning time"<<"\n";
  }
}

int main()
{
   recursion(5);
   return 0;
}
