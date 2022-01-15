#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int Data;
    Node *lchild;
    Node *rchild;
};

class Queue
{
public:
    int front;
    int rear;
    Node *root;
    Node * arr[100];
    // function
    Queue()
    {
        rear = front = -1;
        create();
    }
    void enqueue(Node *);
    Node *dequeue();
    void create();

    void preorder(Node *);
    void postorder(Node *);
    void inorder(Node *);
};

void Queue::preorder(Node *temp)
{

    if (temp != NULL)
    {
        cout << temp->Data;
        cout<<" ";
        preorder(temp->lchild);
        preorder(temp->rchild);
        
    }
   
}
void Queue::postorder(Node *temp)
{

    if (temp != NULL)
    {
        
        postorder(temp->lchild);
        postorder(temp->rchild);
        cout << temp->Data;
        cout<<" ";
    }
   
}
void Queue::inorder(Node *temp)
{
    if (temp != NULL)
    {
        inorder(temp->lchild);
        cout << temp->Data;
        cout<<" ";
        inorder(temp->rchild);
    }
   
}
void Queue::create()
{
    Node *p, *t;
    root = new Node;
    cout << "Enter the root value :: ";
    cin >> root->Data;
    root->lchild = root->rchild = NULL;
    enqueue(root);
    while (front != rear)
    {
        int x;
        p = dequeue();
        

        cout << "Enter the left value of " << p->Data << " :: ";
        cin >> x;
        
        if (x!=-1)
        {
            t = new Node;
            t->Data=x;
            p->lchild = t;
            t->lchild = t->rchild = NULL;
            enqueue(t);
        }
        t = new Node;

        cout << "Enter the left value of " << p->Data << " :: ";
        cin >> x;
        if (x!=-1)
        {
            t = new Node;
            t->Data=x;
            p->rchild = t;
            t->lchild = t->rchild = NULL;
            enqueue(t);
        }
    }
}

void Queue::enqueue(Node *data)
{
    if (rear==99)
    {
        cout<<" full ";
    }
    
    rear++;
    arr[rear]=data;
}

Node *Queue::dequeue()
{
    if (rear == front)
    {
        cout << "queue is empty";
    }
    else
    {
        front++;
        return arr[front];
    }
}
int main()
{
    Queue obj;
    cout << "Preorder :: ";
    obj.preorder(obj.root);
    cout << endl;
    cout << "inorder :: ";
    obj.inorder(obj.root);
    cout << endl;
    cout << "Postorder :: ";
    obj.postorder(obj.root);
    cout << endl;
    return 0;
}