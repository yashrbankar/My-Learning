#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class Stack
{
    Node *top=NULL;
    public:
    void push(int);
    int pop();
    void peak(int);
};

void Stack::push(int x)
{
    Node *t;
    t=new Node;
    if (t==NULL)
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
       t->data=x;
       t->next=top;
       top=t;
    }
    
}

int Stack::pop()
{
    int x=-1;
    Node *t=top;
    if (top==NULL)
    {
        cout<<"Stack overflow"<<endl;
    }
    else
    {
       top=top->next;
       x=t->data;
       delete t;
    }
    return x;
}

void Stack::peak(int pos)
{
    Node *t=top;
    for ( int i=1; t==NULL, i<pos; i++)
    {
        t=t->next;
    }
    if (t!=NULL)
    {
        cout<<"element :: "<<t->data<<endl;
    }

}

int main()
{
    Stack obj;
    cout<<"deleted :: "<<obj.pop()<<endl;
    obj.push(1);
    obj.push(2);
    obj.push(3);

    cout<<"deleted :: "<<obj.pop()<<endl;
    obj.peak(1);
    obj.peak(2);
    obj.peak(3);
   
   return 0;
}