#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>v1,vector<int>v2)
{
  int i=0,j=0;
  vector <int>v3;
  while(i<v1.size()&&j<v2.size())
  {
    if(v1[i]<v2[j])
    {
       v3.push_back(v1[i++]);
    }
    else if(v1[i]>v2[j])
    {
       v3.push_back(v2[j++]);
    }
    else
    {
       v3.push_back(v1[i++]);
       j++;
    }
  }
  
  for(;j<v2.size();j++)
  {
      v3.push_back(v2[j]);
  }
  for(;i<v1.size();i++)
  {
      v3.push_back(v1[i]);
  }
  
   for(auto it=v3.begin();it<v3.end();it++)
   {
        cout<<" "<<*it;
   }
  

}

int main()
{
  vector<int>v1={1,3,5,7,9};
  vector<int>v2={2,4,6,8,10};
  
  merge(v1,v2);
}
