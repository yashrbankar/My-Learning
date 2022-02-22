#include<bits/stdc++.h>
using namespace std;

void deletemid(stack <int>&s, int count , int size)
{
    if(count==size/2)
    {
        cout<<"middle element is deleted ::"<<s.top();
        s.pop();
        return;
    }
    int element;
    element=s.top();
    s.pop();
    deletemid(s ,count+1, size);
    s.push(element);
}

int main()
{
    stack <int>s;
    
    for(int i=1;i<=7;i++)
    {
        s.push(i*10);
    }
    cout<<"the size is:: "<<s.size()<<endl;
    deletemid( s,0,s.size());
    cout<<"\n the size is (after the deleting middle) :: "<<s.size()<<endl;
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n ";
    

   
   return 0;
}