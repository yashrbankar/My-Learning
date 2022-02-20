#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* lchild;
    Node* rchild;
    Node()
    {
        lchild=rchild=NULL;
    }
    Node(int x)
    {
        data=x;
    }
    
};


class Tree
{
    public:
    int leafcount=0;
    Node*root;
    void create();
    void preorder(Node*);
    void preorder_i();
    void level();
    int leaf(Node*);

};
void Tree::create()
{
    int x=-1;
    Node* p ,*temp;
    root=new Node();
    cout<<"enter the root value";
    cin>>root->data;
    root->lchild=root->rchild=NULL;
    queue<Node*>q;
    q.push(root);

    while (!q.empty())
    {
        p=q.front();
        q.pop();
        cout<<"enter the left child of "<<p->data<<" :: ";
        cin>>x;
        if(x!=-1)
        {
            temp=new Node;
            temp->data=x;
            p->lchild=temp;
            temp->lchild=temp->rchild=NULL;
            q.push(temp);

        }
        cout<<"enter the right child of "<<p->data<<" :: ";
        cin>>x;
        if(x!=-1)
        {
            temp=new Node;
            temp->data=x;
            p->rchild=temp;
            temp->lchild=temp->rchild=NULL;
            q.push(temp);
        }
    }
    preorder(root);

}

void Tree::preorder(Node *root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorder(root->lchild);
        preorder(root->rchild);
    }

}

void Tree::preorder_i()
{
    Node *temp=root;
    stack<Node*>p;
    while (temp||!p.empty())
    {
        if(temp)
        {
            p.push(temp);
            cout<<temp->data<<" ";
            temp=temp->lchild;
        } 
        else
        {
            temp=p.top();
            p.pop();
            temp=temp->rchild;
        }  
    }
    
}

void Tree::level()
{
    Node *p;
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
       p=q.front();
       cout<<p->data<< " " ;
    
       if(p->lchild)
       {
           q.push(p->lchild);
       }
       if(p->rchild)
       {
           q.push(p->rchild);
       }
       q.pop();
    }
    
}

int Tree::leaf(Node*root)
{
    if(root)
    {
        leaf(root->lchild);
        leaf(root->rchild);
        if(root->lchild==NULL &&root->rchild==NULL)
        {
           leafcount++;
        }

    }
    return leafcount;
}
int main()
{
   Tree obj;
   obj.create();
   obj.preorder_i();
   cout<<"level order :: ";
   obj.level();
   cout<<"\n leaf count ::"<<obj.leaf(obj.root);
   return 0;
}