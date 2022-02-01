#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *lchild;
    Node *rchild;
} *root = NULL;

Node *insert(Node *p, int key)
{
    Node *t;
    if (!p)
    {
        t = new Node;
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    else if (key < p->data)
    {
        p->lchild = insert(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = insert(p->rchild, key);
    }
    return t;
}

void insert_i(int key)
{
    Node *r = root, *t, *p = NULL;
    if (root == NULL)
    {
        root = new Node;
        root->data = key;
        root->lchild = root->rchild = NULL;
    }
    else
    {
        while (r)
        {
            if (key == r->data)
            {
                return;
            }
            else if (key > r->data)
            {
                p = r;
                r = r->rchild;
            }
            else if (key < r->data)
            {
                p = r;
                r = r->lchild;
            }
        }

        t = new Node;
        t->data = key;
        t->lchild = t->rchild = NULL;
        if (p->data < key)
        {
            p->rchild = t;
        }
        else if (p->data > key)
        {
            p->lchild = t;
        }
    }
}

void inorder(Node *t)
{
    if (t)
    {
        inorder(t->lchild);
        cout << " " << t->data;
        inorder(t->rchild);
    }
}

int main()
{

    // root = insert(root, 10); // recursive version
    insert_i(40);
    insert_i(20);
    insert_i(40);
    insert_i(50);
    insert_i(60);
    inorder(root);
    return 0;
}