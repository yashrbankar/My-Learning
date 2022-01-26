#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    Node* next;
    int data;
};

class linkedlist
{
    public:
    Node* first ,*last;
    int arr[5]={1,2,3,4,5};
    linkedlist()
    {
        create();
        display();
        cout<<"result of is_loop :: "<<is_sort();
    }
    void create();
    void display();
    bool is_sort();
    
};



void linkedlist::create()
{
    first=new Node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for (int i = 1; i < 5; i++)
    {
        Node *temp=new Node;
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    cout<<"do u want to create loop (0/1) :: ";
    int key;
    cin>>key;
    if (key==1) // 1 2 3 4 5
    {
        Node *temp1 , *temp2;
        temp1=first->next->next;
        temp2=first->next->next->next->next;
        temp2->next=temp1;
    }
}

bool linkedlist::is_sort()
{
    Node *p , *q;
    p=q=first;

    while (p && q)
    {
        p=p->next;
        q=q->next;
        if (q==NULL)
        {
            return false;
        }
        q=q->next;
        if (p==q)
        {
          return true;  
        }
    } 
}

void linkedlist::display()
{
    Node * temp;
    temp=first;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main()
{
   linkedlist obj;
   return 0;
}