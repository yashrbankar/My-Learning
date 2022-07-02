#include<bits/stdc++.h>
using namespace std;

class Node{

    public:// access specifer 
    int data;
    Node* next; // self referencial pointer
};

class Linkedlist
{
    Node* first;
    int length;
    public:
    Linkedlist()
    {
      first=new Node();
      cout<<"enter size of linkedlist :: ";
      cin>>length;
      create();
    }
    void create();
    void display();
    void reverse();
};

void Linkedlist::reverse()
{
    Node* cur=first,* prev=NULL,*forw=first->next;
    while (cur)
    {
        cur->next=prev;
        prev=cur;
        cur=forw;
        if(forw)
        forw=forw->next;
    }
    first=prev;
    cout<<"\n";
    display();
}



void Linkedlist::create()
{
    int x;
    cout<<"enter the first element in the linkedlist::";
    cin>>x;
    first->data=x;
    first->next=NULL;
    Node* last=first;
    for (int i = 1; i < length; i++)
    {
        Node* temp=new Node;
        cin>>temp->data;
        last->next=temp;// linking node with the prev node
        last=temp;// upadating last to current 
        temp->next=NULL;
    }
    display();
    
}
void Linkedlist::display()
{
    Node* temp=first;
    while (temp)
    {
        if(temp->next)
        {
           cout<<temp->data<<"->";
        }
        else
        {
            cout<<temp->data<<"-->NULL";
        }
        temp=temp->next;
        
    }
    
}

int main()
{
    Linkedlist obj;
    obj.reverse();
   return 0;
}