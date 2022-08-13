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
    Node*first;
    Node*last;
    void create();
    void display(Node*);
    void func();
};

void Linkedlist::create()
{
    vector<int>v={1,2,3,4,5,6,7};
    Node * temp;
    first=new Node;
    first->data=v[0];
    first->next=NULL;
    last=first;
    for (int i = 1; i < v.size(); i++)
    {
        temp=new Node;
        temp->data=v[i];
        last->next=temp;
        temp->next=NULL;
        last=temp;
    }
    last->next=first;
    display(first);
}
void Linkedlist::func()
{
    Node* slow=first , *fast=first;
    do
    {
        if(fast->next==first)
        {
            break;
        }
        fast=fast->next;
        if(fast->next==first)
        {
            break;
        }
        fast=fast->next;
        slow=slow->next;  
    } while (fast!=first);
    cout<<"mid :: "<<slow->data;
    
}
void Linkedlist::display(Node* temp)
{
    do
    {
        cout<<" "<<temp->data;
        temp=temp->next;
    } while (temp!=first);
    
}



int main()
{
    Linkedlist obj;
    obj.create();
    cout<<"\n";
    obj.func();
   return 0;
}