#include<iostream>
using namespace std;

// rear is used for the inserting element 
// front is used for deleting element in the queue 

class Node
{
    public:
    int data;
    Node *next;
};

class Queue:protected Node
{
    Node *front = NULL;
    Node *rear =  NULL;
    public:
    void enqueue(int);
    void dequeue();
    int isempty();
    void display();
    
};

void Queue::display()
{
    Node *t;
    t=front;
    while (t!=NULL)
    {
        cout<<t->data <<" ";
        t=t->next;

    }
    cout<<"\n";
    
}


int Queue::isempty()
{
    return (rear==front); 
}

void Queue::enqueue(int x)
{
    Node *temp;
    temp=new Node;
    temp->data=x;
    temp->next=NULL;
    if (temp==NULL)
    {
        cout<<"Queue is full "<<endl;
    }
    else
    {
        if (front ==NULL)
        {
            front=rear=temp;
        }
        else
        {
            rear->next=temp; // mistake scope
            rear=temp;
        }
    }
}
void Queue::dequeue()
{
    int x=-1;
    Node *t;
    t=front;
    if (isempty())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        x=front->data;
        front=front->next;
        delete t;
        t=NULL;
    }
    cout<<x<<" is deleted "<<endl;
    
}

int main()
{

     Queue obj;
     
    obj.dequeue();
    obj.enqueue(1);
    obj.enqueue(2);
    obj.enqueue(3);
    obj.enqueue(4);
    obj.enqueue(5);

    obj.display();

    obj.dequeue();
    obj.dequeue();
    obj.dequeue();

    obj.display();
   
   return 0;
}