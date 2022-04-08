#include <bits/stdc++.h>
using namespace std;


double  E(int x , int n)
{
  static double p=1,f=1;
  double r;
  if(n==0)
  {
     return 1;
  }
  
  else
  {
      r=E(x,n-1);
      f=f*n;
      p=p*x;
      return r+p/f;
      
  }

}
int main()
{
   cout<<"E* ::"<<E(1,10);
   return 0;
}
