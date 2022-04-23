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
   int top=-1;
   vector<Node*> vs;
   Node* pop();
   void push(Node*);
};

void Stack::push(Node* temp)
{
   vs.push_back(temp);
   top++;
}

Node* Stack::pop()
{
   if(vs.empty())
   {
      cout<<"stack is empty";
   }
   Node* temp =vs[top];
   top--;
   vs.pop_back();
   return temp;
}


class Queue
{
    public:
    int front,rear;
    Node* dequeue();
    void enqueue(Node*);
    vector <Node*> vq;
    Queue()
    {
        front=rear=-1;
    }
    
};

void Queue::enqueue(Node* temp)
{
     rear++;
     vq.push_back(temp);
}



Node* Queue::dequeue()
{
   if(front==rear)
   {
      cout<<"Queue is empty";
      return NULL;
   }
   front++;
   return vq[front];
}



class Tree: public Node,public Stack,public Queue
{
    public:
    Node* root;
    void Create();
    void preorder(Node*); 
    int height(Node*);
    int diameter(Node*);
    void levelorder(Node*);
    int counting(Node*);
    void preorderit(Node*);
    Tree()
    {
     Create();
     preorderit(root);
     cout<<"\n";
     preorder(root);
     cout<<"\nheight of tree is "<<height(root);
     cout<<"\ndiameter of tree "<<diameter(root)<<endl;
     cout<<"LevelOrder \n";
     levelorder(root);
     cout<<"Sum :: "<<counting(root);
     
    }
    
};

void Tree::Create()
{
  root= new Node;
  int x;
  
  cout<<"enter the root value ";
  cin>>x;
  if(x==-1)
  {
     return ;
  }
  root->data=x;
  root->rchild=root->lchild=NULL;
  enqueue(root);
  
  while(rear!=front)
  {
      Node* q=dequeue();
      cout<<"enter the data left of "<<q->data <<" : ";
      cin>>x;
      if(x!=-1)
      {
         //changes
          Node* temp=new Node;
          temp->data=x;
          q->lchild=temp;
          temp->rchild=temp->lchild=NULL;
          enqueue(temp);
      }
      
      cout<<"enter the data right of "<<q->data <<" : ";
      cin>>x;
      if(x!=-1)
      {
          Node* temp=new Node;
          temp->data=x;
          q->rchild=temp;
          temp->rchild=temp->lchild=NULL;
          enqueue(temp);
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

int Tree::height(Node*root)
{
    if(root)
    {
       int a=height(root->lchild);
       int b=height(root->rchild);
       int c=max(a,b);
       return c+1;  
    }
    return 0;
}


int Tree::diameter(Node* root)
{
   if(!root)
   {
     return 0;
   }
   
   int l=diameter(root->lchild);
   int b=diameter(root->rchild);
   int h=height(root->lchild)+height(root->rchild)+1;
   int ans=max(l,max(b,h));
   return ans;
}

void Tree::levelorder(Node* root)
{
    Queue obj;
    obj.enqueue(root);
    obj.enqueue(NULL);
    
    while(obj.front!=obj.rear)
    {
      Node* q=obj.dequeue();
      if(q==NULL)
      {
         cout<<"\n";
         if(obj.front!=obj.rear)
         {
            obj.enqueue(NULL);
         }
         
      }
      else
      {
        cout<<" "<<q->data;
        if(q->lchild)
        {
           obj.enqueue(q->lchild);
        }
        if(q->rchild)
        {
           obj.enqueue(q->rchild);
        }
      }
    
    }
}


int Tree::counting(Node* root)
{
   if(root)
   {
     int a=counting(root->lchild);
     int b=counting(root->rchild);
     return a+b+root->data;
   }
   return 0;
}

void Tree::preorderit(Node* root )
{
     Node* temp=root;
     Stack st;
     while(st.top!=-1|| temp)
     {
        if(temp)
        {
           cout<<" "<<temp->data;
           st.push(temp);
           temp=temp->lchild;
        }
        else
        {
           temp=st.pop();
           temp=temp->rchild;
        }
     }
}
int main()
{
   Tree obj; 
   return 0;
}
