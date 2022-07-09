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
    void insert(int , int);
    void deleteLl(int);
    void dublicate();

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

void Linkedlist::insert(int element, int position)
{
    if(position>length+1)
    {
        cout<<"invalid position";
      return;
    }
    length++;
    Node* newNode=new Node;
    newNode->data=element;
    if(position==1)
    {
        newNode->Next=first;
        first=newNode;
    }
    else
    {
       Node* cur=first, *forw=first->Next;
       for(int i=0;i<position-2;i++)
       {
          cur=forw;
          if(forw)
          forw=forw->Next;
       }
       newNode->Next=forw;
       cur->Next=newNode;
    }
}
void Linkedlist::deleteLl(int position)
{

    if(position>length)
    {
        cout<<"invalid";
        return;
    }
    Node* deleteMe=first,*prev=NULL;
    if(position==1)
    {
       prev=deleteMe;
       deleteMe=deleteMe->Next;
       delete prev;
       prev=NULL;
       first=deleteMe;
    }
    else
    {
        for(int i=1;i<position;i++)
        {
            prev=deleteMe;
            deleteMe=deleteMe->Next;
        }
        prev->Next=deleteMe->Next;
        delete deleteMe;
        deleteMe=NULL;
    }
    
}

void Linkedlist::dublicate()
{
    Node* current=first, *forw=first->Next;

    while (forw)
    {
        if(current->data==forw->data)
        {
             current->Next=forw->Next;
             delete forw;
             forw=current->Next;
        }
        else
        {
            current=forw;
            if(forw)
            forw=forw->Next;
        }
    }
    
}
int main()
{
    Linkedlist Linkedlist1;
   // Linkedlist1.reverse();
   // Linkedlist1.insert(55,6);
    //Linkedlist1.deleteLl(6);
   // Linkedlist1.display();
   // Linkedlist1.deleteLl(3);
   Linkedlist1.dublicate();
    Linkedlist1.display();
   return 0;
}