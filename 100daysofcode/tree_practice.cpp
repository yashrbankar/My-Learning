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
    void push(Node *);
    Node *pop();
};
class Queue
{
public:
    int front = -1;
    int rear = -1;
    Node *arrq[20];
    void enQueue(Node *);
    Node *deQueue();
};

class Tree : public Node, public Stack, public Queue
{
public:
    Node *r;
    void create();
    void preorder(Node *);
    void it_preorder(Node *);
    void it_inorder(Node *);
    void it_level(Node *);
    int count(Node *);
    int leaf(Node*);
};

int main()
{
    Tree obj;
    obj.create();
    cout << "\n preorder ::";
    obj.preorder(obj.r);
    cout << "\n preorder iterative ::";
    obj.it_preorder(obj.r);
    cout << "\n inorder iterative ::";
    obj.it_inorder(obj.r);
    cout << "\n levelrder iterative ::";
    obj.it_level(obj.r);
    cout << " \n count :: " << obj.count(obj.r);
    obj.leaf(obj.r);
    return 0;
}

// stack function

void Stack::push(Node *datas)
{
    if (top == 19)
    {
        cout << "Stack is full";
    }
    else
    {
        top++;
        arrs[top] = datas;
    }
}
Node *Stack::pop()
{
    if (top == -1)
    {
        cout << "Stack is Empty";
    }
    else
    {
        Node *t;
        t = arrs[top];
        top--;
        return t;
    }
}

// function queue

void Queue::enQueue(Node *dataq)
{
    if (rear == 19)
    {
        cout << "Queue is full";
    }
    else
    {
        rear++;
        arrq[rear] = dataq;
    }
}

Node *Queue::deQueue()
{
    if (rear == front)
    {
        cout << "Queue is Empty";
    }
    else
    {
        front++;
        return arrq[front];
    }
}

// tree function
void Tree::create()
{
    int x;
    Node *root, *temp, *p;
    cout << "enter the root value :: ";
    root = new Node;
    r = root;
    cin >> x;
    root->data = x;
    root->lchild = root->rchild = NULL;
    enQueue(root);
    while (rear != front)
    {
        p = deQueue();
        cout << "enter the left child of " << p->data << " :: ";
        cin >> x;
        if (x != -1)
        {
            temp = new Node;
            temp->data = x;
            temp->lchild = temp->rchild = NULL;
            p->lchild = temp;
            enQueue(temp);
        }
        cout << "enter the right child of " << p->data << " :: ";
        cin >> x;
        if (x != -1)
        {
            temp = new Node;
            temp->data = x;
            temp->lchild = temp->rchild = NULL;
            p->rchild = temp;
            enQueue(temp);
        }
    }
}

void Tree::preorder(Node *temp)
{
    if (temp)
    {
        cout << temp->data << " ";
        preorder(temp->lchild);
        preorder(temp->rchild);
    }
}

int Tree::count(Node *temp)
{
    int x, y, c;
    if (temp)
    {
        x = count(temp->lchild);
        y = count(temp->rchild);
        return x + y + 1;
    }
    return 0;
}

void Tree::it_preorder(Node *temp)
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

void Tree::it_inorder(Node *temp)
{
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
            cout << " " << temp->data;
            temp = temp->rchild;
        }
    }
}

void Tree::it_level(Node *temp)
{
    Queue lq;
    cout<<" "<<temp->data;
    lq.enQueue(temp);
    while (lq.rear != lq.front)
    {
        temp = lq.deQueue();
        if (temp->lchild)
        {
            cout << temp->lchild->data << " ";
            lq.enQueue(temp->lchild);
        }
        if (temp->rchild)
        {
            cout << temp->rchild->data << " ";
            lq.enQueue(temp->rchild);
        }
    }
}

int Tree::leaf(Node* temp)
{
    int leafounter=0;
    Queue lq;
    lq.enQueue(temp);
    while (lq.front!=lq.rear)
    {
        temp=lq.deQueue();
        if (!(temp->lchild&&temp->rchild))
        {
            leafounter++;
        }
        else
        {
            if (temp->lchild)
            {
                lq.enQueue(temp->lchild);
            }
            if (temp->rchild)
            {
                lq.enQueue(temp->rchild);
            }
        }
    }
    cout<<"\n leafcounter ::"<<leafounter;

}