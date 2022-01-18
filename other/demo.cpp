#include <iostream>
using namespace std;

class Node
{
public:
    Node *lchild;
    Node *rchild;
    int data;
};
class Queue
{
public:
    int front = -1;
    int rare = -1;
    Node *arrq[50];
    int s = 50;
    Node *dequeue();
    void enqueue(Node *);
};

class Tree : public Queue, public Node
{
public:
    Node *t;
    void create();
    void preorder(Node *);
    void Inorder(Node *);
    void postorder(Node *);
    int count(Node *);
};

void Queue::enqueue(Node *data)
{
    if (rare == s - 1)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        rare++;
        arrq[rare] = data;
    }
}
Node *Queue::dequeue()
{
    if (front == rare)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        front++;
        return arrq[front];
    }
}
void Tree::preorder(Node *t)
{
    if (t != NULL)
    {
        cout << t->data << endl;
        preorder(t->lchild);
        preorder(t->rchild);
    }
}
void Tree::Inorder(Node *t)
{
    if (t != NULL)
    {
        Inorder(t->lchild);
        cout << t->data << endl;
        ;
        Inorder(t->rchild);
    }
}
void Tree::postorder(Node *t)
{
    if (t != NULL)
    {
        Inorder(t->rchild);
        Inorder(t->lchild);
        cout << t->data << endl;
    }
}

void Tree::create()
{
    Node *root, *t, *p;
    int x;
    root = new Node;
    cout << "Enter value of root" << endl;
    cin >> x;
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(root);
    while (front != rare)
    {
        p = dequeue();
        cout << "Enter data of left child of " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(t);
        }
        cout << "Enter data of left right of " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(t);
        }
    }
    cout << "......Preorder......." << endl;
    preorder(root);
    cout << "......Inorder......." << endl;
    Inorder(root);
    cout << "......postorder......." << endl;
    postorder(root);
    cout<<"Total number of nodes are "<<count(root);

}
int Tree::count(Node *t)
{
    if (t != NULL)
    {
        int x,y;
        x = count(t->lchild);
        y = count(t->rchild);
        return x + y + 1;
    }
}

int main()
{
    Tree q;
    q.create();
    return 0;
}