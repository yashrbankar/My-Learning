#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
  Node* prev;
  int data;
  Node* next;
};


class Linkedlist
{
    public:
    Node* first;
    void create1();
    void display();
    void reverse();
};

void Linkedlist::create1()
{
    int arr[]={2,4,6,8,9};
    Node* temp ,*last;
    first=new Node;
    first->data=arr[0];
    first->next=first->prev=NULL;
    last=first;
    for (int i = 1; i < 5; i++)
    {
        temp=new Node;
        temp->data=arr[i];
        temp->next=temp->prev=NULL;
        last->next=temp;
        temp->prev=last;
        last=temp;
    }
    temp->next=first;
    first->prev=temp;  
}

void Linkedlist::display()
{
    Node *t=first;
    do
    {
        cout<<" "<<t->data;
        t=t->next;
    } while (t!=first);

    //  test linkedlist ;
    // while (t)
    // {
    //     cout<<" "<<t->data;
    //     t=t->next;
    // }  
}

void Linkedlist::reverse()
{
    Node* pt=first;
    Node* t1=NULL,*t2=NULL ,*prev;

    do
    {
        prev=pt;
        t1=pt->next;
        t2=pt->prev;
        Node* temp=t1;
        t1=t2;
        t2=temp;
        pt=t2;
    } while (pt!=first);
    first=prev;
    display();
}



int main()
{
    Linkedlist obj;
    obj.create1();
    obj.display();
    cout<<"\n";
    obj.reverse();
   
   return 0;
}