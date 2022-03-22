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
   void create();
   void display();
   void reverse();
   
};

void Linkedlist::create()
{
   int data;
   Node *last;
   first=new Node;
   vector<int>v={1,2,3,4,5};
   first->data=v[0];
   first->next=NULL;
   last=first;

   for (int i = 1; i < v.size(); i++)
   {
      Node*temp=new Node;
      temp->data=v[i];
      temp->next=NULL;
      last->next=temp;
      last=temp;
   }
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

void Linkedlist::reverse()
{
   Node *prev=NULL,*cur=first,*forw=first->next;
   while (cur)
   {
      cur->next=prev;
      prev=cur;
      cur=forw;
      if(forw)
      forw=forw->next;
   }
   first=prev;
}

int main()
{
   Linkedlist obj;
   obj.create();
   obj.display();
   cout<<"\n address ::"<<obj.first->next;
   obj.reverse();
   cout<<"\n";
   obj.display();
   return 0;
      
}