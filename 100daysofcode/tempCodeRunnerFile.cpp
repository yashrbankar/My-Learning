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
        temp->prev=last;
        last->next=temp;
        last=temp;
    }
}

void Linkedlist::display()
{
    Node *t=first;
    while (t)
    {
        cout<<" "<<t->data;
        t=t->next;
    }
    

    //  test linkedlist ;
    // while (t)
    // {
    //     cout<<" "<<t->data;
    //     t=t->next;
    // }  
}

void Linkedlist::reverse()
{
    Node* &pt=first;
    Node *prev,*temp;

    while(pt)
    {
        prev=pt;
        temp=pt->next;
        pt->next=pt->prev;
        pt->prev=temp;
        pt=pt->prev;
    }
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