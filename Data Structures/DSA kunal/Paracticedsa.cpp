#include <iostream>
using namespace std;

class Node
{
public:
    Node *lchild;
    Node *rchild;
    int data;
};
class Stack
{
public:
    int top = -1;
    Node *arr[30];
    int size = 30;
    Node *pop();
    void push(Node *);
};
class Queue
{
public:
    int front = -1;
    int rare = -1;
    Node *arrq[30];
    int s = 30;
    Node *dequeue();
    void enqueue(Node *);
};

class Tree : public Stack, public Queue, public Node
{
public:
    void create();
    void preorder(Node *);
    void Inorder(Node *);
    void postorder(Node *);
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
        cout << "Enter data of right of " << p->data << endl;
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
    preorder(root);
}
void Stack::push(Node *data)
{
    if (top == size - 1)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        top++;
        arr[top] = data;
    }
}
Node *Stack::pop()
{
    if (top == -1)
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        Node *p = arr[top];
        top--;
        return p;
    }
}
void Tree ::preorder(Node *root)
{

    while (root != NULL || top != -1)
    {
        if (root != NULL)
        {
            cout << root->data <<endl;
            push(root);
            root = root->lchild;
        }
        else
        {
            root = pop();
            root = root->rchild;
        }
    }
}
int main()
{
    Tree obj;
    obj.create();
    return 0;
}