#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* lchild;
    Node* rchild;
};



class Stack
{
    public:
    int top;
    vector<Node*>vs;
    Stack()
    {
        top=-1;
    }
    void push(Node*);
    Node* pop();
};

void Stack::push(Node* temp)
{
    top++;
    vs.push_back(temp);
}

Node* Stack::pop()
{
    if(top==-1)
    {
        cout<<"error stack empty";
        return NULL;
    }

    Node* temp=vs[top];
    top--;
    return temp;
}
class Queue
{
    public:
    int front;
    int rear;
    vector<Node*>vq;
    Queue()
    {
        front=rear=-1;
    }
    void enQueue(Node*);
    Node* deQueue();

};

void Queue::enQueue(Node*temp)
{
    rear++;
    vq.push_back(temp);
}

Node* Queue::deQueue()
{
    if(rear==front)
    {
        cout<<"Error queue is empty";
        return NULL;
    }
    front++;
    return vq[front];
}

class Tree:public Node,public Stack,public Queue
{
    public:
    Node* root;
    void create_level();
    void preorder(Node*);
};

void Tree::create_level()
{
    int d;
    root=new Node;
    cout<<"enter the root data ::";
    cin>>d;
    if(d==-1)
    {
      return;
    }
    root->lchild=root->rchild=NULL;
    root->data=d;
    enQueue(root);
    while (rear!=front)
    {
        Node* q=deQueue();
        cout<<"enter the data to be stored left side of "<<q->data<<" : ";
        cin>>d;
        if(d!=-1)
        {
           Node* temp= new Node;
           temp->data=d;
           temp->lchild=temp->rchild=NULL;
           q->lchild=temp;
           enQueue(temp);
        }

        cout<<"enter the data to be stored left side of :: "<<q->data<<" : ";
        cin>>d;
        if(d!=-1)
        {
           Node* temp= new Node;
           temp->data=d;
           temp->lchild=temp->rchild=NULL;
           q->rchild=temp;
           enQueue(temp);
        }
    }
}

void Tree::preorder(Node* root)
{ 
    if(root)
    {
        cout<<" "<<root->data;
        preorder(root->lchild);
        preorder(root->rchild);
    }
}

int main()
{
    Tree obj;
    obj.create_level();
    obj.preorder(obj.root);
   
   return 0;
}