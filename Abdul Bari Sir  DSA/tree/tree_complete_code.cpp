#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};

class Stack
{
public:
    int top = -1;
    Node *arrs[20];

    void push(Node *data);
    Node *pop();
};

class Queue
{
public:
    int front = -1;
    int rear = -1;
    Node *arrq[20];

    void enQueue(Node *data);
    Node *deQueue();
};

class Tree : public Node, public Stack, public Queue
{
public:
    int leafcounter=0;
    // function
    void create();
    void preorder(Node *);
    void preorder_i(Node *);
    void postorder(Node *);
    void inorder(Node *);
    void inorder_i(Node *);
    void levelorder_i(Node *);
    int count(Node *);
    int length_tree(Node *);
    int add(Node *);
    int leafnode(Node*);
};

int main()
{
    Tree obj;
    obj.create();
    return 0;
}

// stack
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
        cout << "Stack is Empty \n";
    }
    else
    {
        Node *t;
        t = arrs[top];
        top--;
        return t;
    }
}

//  Queue

void Queue::enQueue(Node *dataq)
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
Node *Queue::deQueue()
{
    if (rear == front)
    {
        cout << "Queue is Empty \n";
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
    Node *root;
    Node *t, *p;
    root = new Node;
    cout << "Enter the root value :: ";
    cin >> x;
    root->data = x;
    root->lchild = root->rchild = NULL;
    enQueue(root);
    while (front != rear)
    {
        p = deQueue();
        cout << "enter the left value of " << p->data << " :: ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            p->lchild = t;
            t->data = x;
            t->lchild = t->rchild = NULL;
            enQueue(t);
        }
        cout << "enter the right value of " << p->data << " :: ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            p->rchild = t;
            t->data = x;
            t->lchild = t->rchild = NULL;
            enQueue(t);
        }
    }
    cout << "\n Preorder :: ";
    preorder(root);
    cout << "\n Preorder iterative :: ";
    preorder_i(root);
    cout << "\n inorder itertive  :: ";
    inorder_i(root);
    cout << "\n postorder ";
    postorder(root);
    cout << "\n levelorder using queue ";
    levelorder_i(root);
    cout << "\n count : " << count(root);
    cout << "\n length_tree : " << length_tree(root);
    cout << "\n add : " << add(root);
    leafnode(root);
    cout<<"\nNo of leaf node :: "<<leafcounter;
    cout<<"\nNo of internal node :: "<<leafcounter-1;
}

void Tree::preorder(Node *root)
{
    Node *t = root;
    if (t != NULL)
    {
        cout << t->data << " ";
        preorder(t->lchild);
        preorder(t->rchild);
    }
}

void Tree::postorder(Node *root)
{
    Node *t = root;
    if (t != NULL)
    {
        postorder(t->lchild);
        postorder(t->rchild);
        cout << t->data << " ";
    }
}

int Tree::count(Node *root)
{
    Node *t = root;
    while (t != NULL)
    {
        int x, y;
        x = count(t->lchild);
        y = count(t->rchild);
        return x + y + 1;
    }
    return 0;
}

int Tree::add(Node *root)
{
    Node *t = root;
    while (t != NULL)
    {
        int x, y;
        x = add(t->lchild);
        y = add(t->rchild);
        return x + y + t->data;
    }
}

int Tree::length_tree(Node *root)
{
    Node *t = root;
    while (t != NULL)
    {
        int x, y;
        x = length_tree(t->lchild);
        y = length_tree(t->rchild);
        if (x > y)
        {
            return x + 1;
        }
        else
        {
            return y + 1;
        }
    }
    return 0;
}

void Tree::preorder_i(Node *root)
{
    Node *t = root;
    while (t || top != -1)
    {
        if (t)
        {
            cout << t->data << " ";
            push(t);
            t = t->lchild;
        }
        else
        {
            t = pop();
            t = t->rchild;
        }
    }
}

void Tree::inorder_i(Node *root)
{
    Node *t = root;
    while (t || top != -1)
    {
        if (t)
        {
            push(t);
            t = t->lchild;
        }
        else
        {
            t = pop();
            cout << t->data << " ";
            t = t->rchild;
        }
    }
}



void Tree::levelorder_i(Node *temp)
{
    cout<<temp->data<<" ";
    Queue q;
    q.enQueue(temp);
    while (q.front!=q.rear)
    {
        temp=q.deQueue();
        if(temp->lchild)
        {
           cout<<temp->lchild->data<<" ";
           q.enQueue(temp->lchild);
        }
        if(temp->rchild)
        {
           cout<<temp->rchild->data<<" ";
           q.enQueue(temp->rchild);
        }
    }
    
}


int Tree::leafnode(Node* temp)
{
   Queue lq;
   Node* p;
   lq.enQueue(temp);
   while (lq.front!=lq.rear)
   {
       p=lq.deQueue();
       if(!(p->lchild && p->rchild))
       {
          leafcounter++;
       }
       else
       {
           if (p->lchild)
           {
               lq.enQueue(p->lchild);
           }
           if(p->rchild)
           {
               lq.enQueue(p->rchild);
           }
       }
   }  
}
