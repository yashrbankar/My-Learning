#include <bits/stdc++.h>
using namespace std;

void Tree(int n)
{
   if(n>0)
   {
     
     Tree(n-1);
     cout<<" "<<n;
     Tree(n-1);
   }
}

int main()
{
   Tree(3);
   return 0;
}
