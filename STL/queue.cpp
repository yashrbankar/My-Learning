#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(10); // same as push 
    q.push(5);
    cout<<" size :: "<<q.size()<<"\n";
    cout<<"last element ::"<<q.back()<<"\n";
    cout<<"front element ::"<<q.front()<<"\n";

    while (!q.empty())
    {
        cout<<" "<<q.front();
        q.pop();
    }

   
   return 0;
}