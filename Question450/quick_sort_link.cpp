#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
};

class Linkedlist
{
    public:
    Node* first;
    Node* last;
    void create();
    void display();
};

Linkedlist::create()
{
    int arr[5]={5,4,3,2,1};
    Node* temp;
    first= new Node;
    first->data=arr[0];
    first->next=first->prev=NULL;
    last=first;

    for(int i = 1; i < 5; i++)
    {
        temp=new Node;
        temp->next=temp->prev=NULL;
        temp->data=arr[i];
        last->next=temp;
        temp->prev=last;
        last=temp;
    }
    cout<<"linkedlist before sort :: "<<display();
}

void Linkedlist::display()
{
    Node* temp=first;
    while (temp)
    {
         cout<<" "<<temp->data;
         temp=temp->next;
    }
}



int main()
{
    Linkedlist obj;
    obj.create();
   
   return 0;
}