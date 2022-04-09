#include <bits/stdc++.h>
using namespace std;

int Nested(int n)
{
   if(n>100)
   {
      return n-10;
   }
   else
   {
       return Nested(Nested(n+11)); 
   }

}



int main()
{
   cout<<"Answer :: "<<Nested(95);
}
