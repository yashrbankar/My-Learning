#include<iostream>
using namespace std;


class node
{
    public:

    int data;
    node *next;
};

class Stack
{
    node *top;
    
    public:
    Stack()
    {
        top=NULL;
    }
    void push(int); // new element in the stack;
    int pop();
    void peek();
    void display();
};

void Stack::push(int x)
{
    node *t;
    t=new node;

    if (!t)
    {
        cout<<"Stack is overflow"<<endl;
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
    node *t=top;

    
    if (t==NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        
        t=top;
        top=top->next;
        x=t->data;
        delete t;
        t=NULL;
        
    }
    return x;
}

void Stack::display()
{
   node *p=top;
   while (p!=NULL)
   {
       cout<<p->data<<" ";
       p=p->next;
   }
   cout<<endl;
}
int main()
{
    Stack s;
    s.pop();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<"deleted  :: "<<s.pop()<<"\n";
    s.display();
    cout<<"deleted  :: "<<s.pop()<<"\n";
    cout<<"deleted  :: "<<s.pop()<<"\n";
    s.display();
    cout<<"deleted  :: "<<s.pop()<<"\n";
    s.display();
    cout<<"deleted  :: "<<s.pop()<<"\n";
    s.pop();
   return 0;
}