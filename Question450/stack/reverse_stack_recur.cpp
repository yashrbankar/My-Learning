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
void stack_reverse(stack<int>& stack )
{
    if(stack.empty())
    {
        return ;
    }
    int element=stack.top();
    stack.pop();
    stack_reverse(stack);
    insertatbottom(stack,element);


}

int main()
{
    stack<int> stack;
    for (int i = 1; i <= 5; i++)
    {
        stack.push(i*10);
    }
    stack_reverse(stack);

    while (!stack.empty())
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }
    
    
   
   return 0;
}