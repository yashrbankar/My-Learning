#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector <int> v;
  
  for(int i=1;i<=5;i++)
  {
     v.push_back(i);
  }
  int x=0;
                       // or single value
  v.insert(v.begin()+5,{60,70,80,90,x});
  
  v.erase(v.begin()+3 ,v.begin()+7);
  //       single parameter for deleting sinlge element
  
  
  
  for(auto i=v.begin();i<v.end();i++)
  {
       cout<<" "<<*i;
  }
}  
