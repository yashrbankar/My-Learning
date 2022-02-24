#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* lchild;
    Node* rchild;
    Node(int data)
    {
        this->data=data;
        lchild=rchild=NULL;
    }
};

class Tree
{
    public:
    Node* root;
    Node* create(Node* root);
};

Node* Tree::create(Node* root)
{
    int data;
    cout<<"\nenter the data ::";
    cin>>data;
    root=new Node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"\n enter the left of "<<data;
    root->lchild=create(root->lchild);
    cout<<"\n enter the left of "<<data;
    root->lchild=create(root->lchild);
}
void 

int main()
{
    Tree obj;
    obj.create(obj.root);
   return 0;
}