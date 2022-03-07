#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node* next;
    int data;
};

class Linkedlist
{
    public:
    Node* first;
    void create();
    void display();
    Node* grouping(Node* , int);
};

void Linkedlist::create()
{
    int arr[]={1,2,3,4,5,6,7,8};
    Node* temp, *last;
    first=new Node;
    first->data=arr[0];
    first->next=NULL;
    last=first;

    for (int i = 1; i <8; i++)
    {
        temp=new Node;
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }   
    // display();
}

Node* Linkedlist::grouping(Node* head , int k)
{
    
    Node * nex;
    Node * prev=NULL;
    int count=0;
    Node * cur=head;
    while (cur && count<k)
    {
        nex=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nex;
        count++;
    }
    if (cur)
    {
        head->next=grouping(nex, k);
    }
    return prev;
    // ! this my single change to check my commit during the exam 
}



void Linkedlist::display()
{
    cout<<"\n";
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
    obj.display();
    obj.grouping(obj.first , 4);
    obj.display();
   return 0;
}