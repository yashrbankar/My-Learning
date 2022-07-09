#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* Next;
};

class Linkedlist
{

    public:
    Node* first;
    int length;
    Linkedlist()
    {
        length=0;
        cout<<"Number of element to be insert in Linkedlist :: ";
        cin>>length;
        first=new Node(); // memory assigned in the heap
        create_linkedlist();
    }
    void create_linkedlist();
    void display();
    void reverse();
};

void Linkedlist::create_linkedlist()
{
    int x;
    Node* last;
    cout<<"enter the first element ";
    cin>>x;
    first->data=x;
    first->Next=NULL;
    last=first;
    for(int i=1;i<length;i++)
    {
       Node* tempNode=new Node();
       last->Next=tempNode;
       last=tempNode;
       cout<<"insert the element in linkedlist :: ";
       cin>>tempNode->data;
       tempNode->Next=NULL;
    }
}
void Linkedlist::display()
{
    Node* current=first;
    while(current)
    {
        cout<<current->data<<"-->";
        current=current->Next;
    }
}
void Linkedlist::reverse()
{
    Node* prev=NULL, *current=first,*forw=first->Next;
    while (current)
    {
        current->Next=prev;
        prev=current;
        current=forw;
        if(forw)
        {
          forw=forw->Next;
        }
    }
    first=prev;  
}
int main()
{
    Linkedlist Linkedlist1;
    Linkedlist1.reverse();
    Linkedlist1.display();
   return 0;
}