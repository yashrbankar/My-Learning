#include<iostream>
using namespace std;


class Queue
{
    int size;
    int front;
    int rear;
    int *arr;

    public:
    Queue()
    {
        front=rear=0;
        cout<<"enter the size ::";
        cin>>size;
        arr = new int[size];
    }
    void enqueue(int);
    int dequeue();
    void display();
    int isfull();
    int isempty();
};

int Queue::isfull()
{
    return ((rear+1)%size == front);
}
int Queue::isempty()
{
    return (rear == front);
}

void Queue::enqueue(int x)
{
    if (isfull())
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        rear=(rear+1)%size;
        arr[rear]=x;
    }
    

}
int Queue::dequeue()
{
    int x=-1;
    if (isempty())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        front=(front+1)%size; // mistake 
        x=arr[front];
    }
    return x;

}
void Queue::display()
{
    
    if (isempty())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        int i=front+1;
        while (i!=(rear+1)%size)
        {
            cout<<arr[i]<<" ";
            i=(i+1)%size;
        }
        
    }

}
int main()
{

    Queue obj;
    cout<<"deleted :: "<<obj.dequeue()<<endl;
    obj.enqueue(1);
    obj.enqueue(2);
    obj.enqueue(3);
    obj.enqueue(4);
    obj.enqueue(5); // 

    cout<<"deleted :: "<<obj.dequeue()<<endl;
    cout<<"deleted :: "<<obj.dequeue()<<endl;
    obj.enqueue(1);
    obj.enqueue(2);
    obj.enqueue(3);
    // cout<<"deleted :: "<<obj.dequeue()<<endl;
    obj.display();
   
   return 0;
}