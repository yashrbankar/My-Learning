#include<bits/stdc++.h>
using namespace std;

class Node
{
 public:
 int data;
 Node* next;
};

class Linkedlist
{
     public:
     Node* first;
     void  create();
     void display();
     void reverse_r(Node*);
     void reverse();
     void mid();
     
};

void Linkedlist::create()
{
   first=new Node;
   first->next=NULL;
   int n;
   cout<<"Enter no of element want to insert : ";
   cin>>n;
   cout<<"Enter the first element in linkedlist ";
   cin>>first->data;
   Node* last=first;
   for(int i=1;i<n;i++)
   {
     Node* Temp=new Node;
     Temp->data=i;
     last->next=Temp;
     Temp->next=NULL;
     last=Temp;
   }
   
}

void Linkedlist::display()
{
   Node* temp=first;
   while(temp)
   {
     cout<<" "<<temp->data;
     temp=temp->next;
     
   }
}
void Linkedlist::reverse_r(Node* first)
{
    if(first)
    {
      reverse_r(first->next);
      cout<<first->data<<"->";
      //display();
    }
    
}

void Linkedlist:: reverse()
{
    Node* cur=first , *prev=NULL , *forw=first->next;
    while(cur)
    {
       cur->next=prev;
       prev=cur;
       cur=forw;
       if(forw)
       {
        forw=forw->next;
       }
    }
    first=prev;
}


void Linkedlist::mid()
{
   Node* fast=first;
   Node* slow=first;
   int index=0;
   while(fast)
   {
     slow=slow->next;
     fast=fast->next;
     if(fast)
     {
       fast=fast->next;
       index++;
     }
   }
   cout<<"Mid : "<<index;
   
}


int main()
{
   Linkedlist obj;
   obj.create();
   //obj.reverse_r(obj.first);
   //obj.reverse();
   obj.mid();
   obj.display();
}
