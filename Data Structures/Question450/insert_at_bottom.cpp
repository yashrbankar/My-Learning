#include<bits/stdc++.h>
using namespace std;
void insertatbottom(stack<int>& stack , int element)
{
    if(stack.empty())
    {
        stack.push(element);
        return ;
    }
    int num=stack.top();
    stack.pop();
    insertatbottom(stack, element); 
    stack.push(num);
}


int main()
{
    stack<int> stack;
    for (int i = 1; i <= 5; i++)
    {
        stack.push(i*10);
    }
    insertatbottom(stack ,1234);

    while (!stack.empty())
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }
    
    
   
   return 0;
}