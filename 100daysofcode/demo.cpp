#include <bits/stdc++.h>
using namespace std;

struct Node // 20
{
public:
    Node *lchild; // 8 
    int data; // 4
    Node *rchild; // 8
    // Node* root=NULL; //mistake by hon. SYB
} *root = NULL;


void insert_i(int key)
{
    Node*p=NULL;
    Node *t , *r=root;

    if (!r) // mistake scope
    {
        root=new Node;
        root->data=key;
        root->lchild=root->rchild=NULL;
        return; //used for stopping function 
    }

    while (r)
    {
        p=r;
        if(r->data==key)
        {
            cout<<"Dublicate element :: "<<key;
           return;
        }
        else if(r->data >key)
        {
            r=r->lchild;
        }
        else if(r->data==key)
        {
           r=r->lchild;
        }
    }

    t=new Node;
    t->data=key;
    if(r->data>key)
    {
        r->lchild=t;
    }
    else
    {
        r->rchild=t;
    }

}
Node *insert(Node *p, int key)
{
    Node *t;
    if (!p)
    {
        t = new Node; // 24
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
    }
    else if(key<p->data)
    {
        p->lchild=insert(p->lchild , key);
    }
    else if(key>p->data)
    {
        p->rchild=insert(p->rchild , key);
    }
    return t;
}

void inorder(Node* p)
{
    if(p)
    {
        inorder(p->lchild);
        cout<<" "<<p->data;
        inorder(p->rchild);
    }

}

int main()
{
    /*
    root = insert(root, 60);
    insert(root , 1000);
    insert(root , 40);
    insert(root , 70);
    insert(root , 90);
    inorder(root);
    */
    insert_i(20);
    insert_i(30);
    insert_i(10);
    insert_i(50);
    insert_i(5);
    inorder(root);

    return 0;
}