#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    for(int i=1;i<=5;i++)
    {
        v.push_back(i*10);
    }
    
    int var=v[0];
    for(int i=0;i<4;i++)
    {
       v[i]=v[i+1];
    }
    v[4]=var;
    cout<<"after rotation :: ";
    for(auto i=v.begin();i<v.end();i++)
    { 
       cout<<" "<<*i;
    }
    
    
    
}
