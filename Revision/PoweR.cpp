#include <bits/stdc++.h>
using namespace std;

int Pow(int b , int n)
{
    if(n>0)
    {
      return b*Pow(b,n-1);
    }
    return 1;
}
int main()
{
  cout<<"Answer :: "<<Pow(5 , 3);
  return 0;

}
