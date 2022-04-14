#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string>p; // declaration
    // intailizion
    //p=make_pair(43,"Yash"); 
    p={43,"Yash"};
    
    pair<int,string>p1=p; // copying values
    p1.second="Yash Bankar";// call by value
    
    pair<int,string>&p2=p; // call by reference
    p2.first=20143;
    
    cout<<p.first<<" , "<<p.second;
    
    // pair of vector
    
    pair<vector<int> , vector<int>>pv;
    
    pv.first={1,2,3,4};
    pv.second={11,22,33,44};
    // swap(pv[0],pv[3]); ! giving the error 
    cout<<"swaping result :: "<<pv.first[3]<<"\n";
    
    for(int i=0;i<4;i++)
    {
       cout<<pv.first[i]<<" , "<<pv.second[i];
    }
    
}
