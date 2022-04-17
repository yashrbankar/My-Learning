#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

};

class Linkedlist
{
    public:
    Node *first;
    Linkedlist(int * , int);
    void addition();
    void display();
};

Linkedlist::Linkedlist(int arr[], int n)
{
    Node *temp , *last ;
    first=new Node;
    first->data=arr[0];
    first->next=NULL;
    last=first;//
    
    for (int i = 1; i < n; i++)
    {
        temp=new Node;
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last =temp;
    }

}

void Linkedlist::addition()
{
    Node *p;
    int sum=0;
    p=first;
    while (p!=NULL)
    {
        sum=sum+p->data;
        p=p->next;
    }
    cout<<"the sum is :: "<<sum<<endl;
    
}
void Linkedlist::display()
{
    Node *p;
    p=first;
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    
}

int main()
{
    int arr[5]={1,2,3,4,5};
    Linkedlist l(arr , 5);
    l.addition();
    l.display();
   return 0;
}