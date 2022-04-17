#include <iostream>
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
        cout << "enter the size :: ";
        cin >> size;
        arr = new int[size];
        rear=front=-1;
    }
    void enqueue(int);
    void display();
    int dequeue();
    int isfull();
    int isempty();
};


int Queue::isempty()
{
    return (front==rear); // returns 0 or 1 ;
}
int Queue::isfull()
{
    return (rear==size-1); // returns 0 or 1 ;
}
void Queue::enqueue(int x)
{
    if (isfull())
    {
        cout<<"Queue is full"<<endl;
    }
    
    else
    {
        rear++;
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
        front++;
        x=arr[front];
    }
    return x;
}
void Queue::display()
{
    
    if (rear==front)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        for (int i = front+1; i <=rear; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }

}

int
main()
{
    Queue obj;
    cout<<"deleted :: "<<obj.dequeue()<<endl;
    obj.enqueue(1);
    obj.enqueue(2);
    obj.enqueue(3);
    obj.enqueue(4);
    obj.enqueue(5);

    cout<<"deleted :: "<<obj.dequeue()<<endl;
    cout<<"deleted :: "<<obj.dequeue()<<endl;
    cout<<"deleted :: "<<obj.dequeue()<<endl;
    obj.display();
    
    


    return 0;
}