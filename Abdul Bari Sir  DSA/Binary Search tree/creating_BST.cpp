#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *lchild;
    Node *rchild;
};

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
    // return t;
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
    Node *root = NULL;
    root = insert(root, 30);
    insert(root, 20);
    insert(root, 50);
    inorder(root);
    return 0;
}