#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *lchild;
    Node *rchild;
};

class Stack
{
public:
    int top = -1;
    Node *arrs[20];
};

class Queue
{
public:
    int front = -1;
    int rear = -1;
    Node *arrq[20];
};

class Tree : public Node, public Stack, public Queue
{
public:
    Node *root;
    // stack
    void push(Node *);
    Node *pop();
    // queue
    void enQueue(Node *);
    Node *deQueue();
    // tree
    void create();
    void preorder(Node*);
};

int main()
{
    Tree obj;
    obj.create();
    
    return 0;
}

void Tree::push(Node *datas)
{
    if (top == 19)
    {
        cout << "Stack is full \n";
    }
    else
    {
        top++;
        arrs[top] == datas;
    }
}
Node *Tree::pop()
{
    if (top == -1)
    {
        cout << "Stack is empty \n";
    }
    else
    {
        Node *t;
        t = arrs[top];
        top--;
        return t;
    }
}

// queue function

void Tree::enQueue(Node *dataq)
{
    if (rear == 19)
    {
        cout << "Queue is full \n";
    }
    else
    {
        rear++;
        arrq[rear] = dataq;
    }
}
Node *Tree::deQueue()
{
    if (front == rear)
    {
        cout << "Queue is empty \n";
    }
    else
    {
        front++;
        return arrq[front];
    }
}

// tree

void Tree::create()
{
    Node *p, *last ,*temp;
    root = new Node;
    int x;
    cout << "enter the root value ::";
    cin >> x;
    root->data = x;
    root->lchild = root->lchild = NULL;
    enQueue(root);
    while (rear != front)
    {
        p = deQueue();

        cout << "enter the left child of " << p->data << " :: ";
        cin >> x;
        if (x != -1)
        {
            temp = new Node;
            p->lchild = temp;
            temp->data=x;
            temp->lchild = temp->rchild = NULL;
            enQueue(temp);
        }

        cout << "enter the right child of " << p->data << " :: ";
        cin >> x;
        if (x != -1)
        {
            temp = new Node;
            temp->data=x;
            p->rchild = temp;
            temp->lchild = temp->rchild = NULL;
            enQueue(temp);
        }
    }
}

void Tree::preorder(Node *temp)
{
    if (temp)
    {
        cout<<" "<<temp->data;
        preorder(temp->lchild);
        preorder(temp->rchild);
    }
    


}
