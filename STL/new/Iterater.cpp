#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={3,4,5,6,7};
    vector<int>::iterator it=v.begin();
    
    
    
    cout<<*it+1;
    cout<<"call by value";
    cout<<"\n ";
    for(int value : v) // call by value
    { 
      value++;
      cout<<" "<<value;
    }
    cout<<"\n";    
    for(it=v.begin();it!=v.end();it++)
    {
       cout<<" "<<*it;
    }
    cout<<"\n";
    
    cout<<"call by value\n";
    for(int &value : v) // call by reference
    { 
      value++;
      cout<<" "<<value;
    }
    cout<<"\n"; 
    
    
    for(it=v.begin();it!=v.end();it++)
    {
       cout<<" "<<*it;
    }
    cout<<"\n";
    
    
    
}
