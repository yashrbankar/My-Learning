#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int data;
  NOde* next;
  Node* prev;
};

class Linkedlist
{
    public:
    Node* head;
    int arr[5]={2,4,6,8,12};
    void create();
    void display();
};

void Linkedlist::create()
{
    Node* temp , *last;
    temp=new Node;
    temp->data=arr[0];
    temp->next=temp->prev=NULL;
    head=temp;
    last=temp;
    for (int i = 1; i < 5; i++)
    {
        temp=new Node;
        temp->prev=last;
        last->next=temp;
        temp->data=arr[i];
        temp->next=NULL;
        last=temp;
    }
    temp->next=head;
    display();
}

void Linkedlist::display()
{
    Node* t=head;
    do
    {
        cout<<t->data<<" ";
        t=t->next;

    } while (t!=head);
}



int main()
{
    Linkedlist obj;
    obj.create();
   
   return 0;
}