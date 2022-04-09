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
   cout<<"enter the power of e* :: ";
   int x;
   cin>>x;
   cout<<"E* _::_"<<E(x,10);
   return 0;
}
