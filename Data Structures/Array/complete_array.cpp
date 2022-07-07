#include<bits/stdc++.h>
using namespace std;

class Node
{
   public: // access specifor
   int data;
   Node* right;// self referencail pointer
   Node* left;// self referencail pointer
};

class Queue
{
   public:
   int front=-1;
   int rear=-1;
   vector<Node*>arrQ;
   Queue()
   {
      front=rear=-1;
   }
   Node* frontElement();
   void  push(Node*);
   Node* pop();
   

};

Node* Queue::frontElement()
{
   if(arrQ.empty())
   {
      cout<<"Queue is empty";
      return NULL;
   }
   return arrQ[front];
}

void Queue::push(Node* newNode)
{
   front++;
   arrQ.push_back(newNode);
}

Node* Queue::pop()
{
   if(arrQ.empty())
   {
      return NULL;
   }
   Node* temp;// temp Node
   rear++;
   temp=arrQ[rear];
   return temp;
}


class Tree:public Queue
{
   public:
   Node* root;
      void createTree();
      void preOrder(Node*);
};

void Tree::preOrder(Node* root)
{
   if(root)
   {
      preOrder(root->left);
      cout<<" "<<root->data;
      preOrder(root->right);
   }
}

void Tree::createTree()
{
   // creating the tree in the level order we required Queue
   // stl of queue 
      root=new Node();
      // spacee of int and left right is allocate in the heap 
      // remeber that pointer first is present in the stack memory itself
      // new keyword is used for getting space in the heap
      cout<<"enter the root data :";
      cin>>root->data;
      root->left=root->right=NULL;
   int x;
   push(root);
   int count=0;
   while (front!=rear) // runs till the Queue is not empty
   {
      //cout<<front<<" "<<rear<<endl;
      cout<<count++;
      Node* current=pop();

      cout<<"enter the element left to the  "<<current->data<<" : ";
      cin>> x;
      if(x!=-1)// -1 is taken as NULL  
      {
         Node* temp=new Node;
         temp->data=x;
         temp->left=temp->right=NULL;
         current->left=temp;
         push(temp);
      }
      cout<<"enter the element right to the  "<<current->data<<" : ";
      cin>> x;
      if(x!=-1)// -1 is taken as NULL  
      {
         Node* temp=new Node;
         temp->data=x;
         temp->left=temp->right=NULL;
         current->right=temp;
         push(temp);
      }
   }
   cout<<"root";
   preOrder(root);
}

int main()
{
   Tree obj;
   obj.createTree();
   return 0;
}