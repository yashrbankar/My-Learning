#include <bits/stdc++.h>
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
    Node *arrs[20];
    void push(Node *);
    Node *pop();
};

class Queue
{
public:
    int front;
    int rear;
    Node *arr[100];
    Queue()
    {
        front = rear = -1;
    }

    // function
    void enqueue(Node *);
    Node *dequeue();
};

class Tree : public Queue, public Node, public Stack
{
public:
    Node *y;
    void create();
    void preorder(Node *);
    void inorder(Node *);
    void levelorder(Node *);
};

int main()
{
    Tree t;
    t.create();
    return 0;
}

// Stack function

void Stack::push(Node *d)
{
    if (top == 19)
    {
        cout << "Stack is full";
    }
    else
    {
        top++;
        arrs[top] = d;
    }
}

Node *Stack::pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow";
    }
    else
    {
        Node *temp = arrs[top];
        top--;
        return temp;
    }
}

// Queue Function

void Queue::enqueue(Node *data)
{
    if (rear == 99)
    {
        cout << "Queue is full " << endl;
    }

    else
    {
        rear++;
        arr[rear] = data;
    }
}

Node *Queue::dequeue()
{
    if (front == rear)
    {
        cout << "Queue is Empty";
    }

    else
    {
        front++;
        return arr[front];
    }
}

// tree function
void Tree::create()
{
    int x;
    Node *t, *p;
    Node *root;
    root = new Node;
    cout << "Enter the value of root :: ";
    cin >> x;
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(root);
    while (front != rear)
    {
        p = dequeue();

        cout << "enter the left child of " << p->data << " :: ";
        cin >> x;

        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(t);
        }

        ///////////////

        t = new Node;
        cout << "enter the right child of " << p->data << " :: ";
        cin >> t->data;
        if (t->data != -1)
        {
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(t);
        }
    }
    cout << "Preorder :: ";
    preorder(root);
    cout << endl;
    cout << "inorder :: ";
    inorder(root);
    cout << "\n";
    cout << "levelorder :: ";
    levelorder(root);
    cout << "\n";
}

void Tree::preorder(Node *temp)
{
    while (temp || top != -1)
    {

        if (temp)
        {
            cout << temp->data << " ";
            push(temp);
            temp = temp->lchild;
        }
        else
        {
            temp = pop();
            temp = temp->rchild;
        }
    }
}
void Tree::inorder(Node *r)
{
    Node *temp;
    temp = r;
    while (temp || top != -1)
    {

        if (temp)
        {
            push(temp);
            temp = temp->lchild;
        }
        else
        {
            temp = pop();
            cout << temp->data << " ";
            temp = temp->rchild;
        }
    }
}

void Tree::levelorder(Node *temp)
{
    Queue q;
    cout << temp->data << " ";
    q.enqueue(temp);
    while (q.front != q.rear)
    {
        temp = q.dequeue();
        if (temp->lchild)
        {
            cout << " " << temp->lchild->data;
            q.enqueue(temp->lchild);
        }
        if (temp->rchild)
        {
            cout << " " << temp->rchild->data;
            q.enqueue(temp->rchild);
        }
    }
}
