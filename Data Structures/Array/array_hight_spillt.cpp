#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;
};

class Linkedlist : public Node
{
    Node* first;
    int counter;
    public:
    Linkedlist()
    {
        first =new Node;
        counter=0;
    }
    void create();
    void display();
    void removeDublicate();
};

void Linkedlist::create()
{
    
    cout<<"enter the number of element you want to insert in the LL";
    cin>> counter;
    vector<int> arr={1,2,2,3,3,4,4,5,3};
    cout<<"enter First element in linkedlist ";
    first->data=arr[0];
    first->next=first->prev=NULL;
    Node*last=first; // this used to maintain the history of last Node
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp=new Node;
        temp->data=arr[i];
        last->next=temp;
        temp->prev=last;
        last=temp;
        temp->next=NULL;
    }
}


void Linkedlist::display()
{
    Node* temp=first;
    while (temp)
    {
        cout<<"->"<<temp->data<<"<-";
        temp=temp->next;
    }
    
}

void Linkedlist::removeDublicate()
{
    set<int> dubli;
    Node* cur=first , *prev=NULL;
    while (cur)
    {
        auto test=dubli.insert(cur->data);
        if(!test.second)
        {
            cout<<"e : "<<cur->data;
            prev->next=cur->next;
            delete cur;
            cur=prev->next;
            cur->prev=prev;
        }
        prev=cur;
        cur=cur->next;    
    }
    cout<<"\n";
    display();
}

int main()
{
    Linkedlist obj;
    obj.create();
    obj.display();
    obj.removeDublicate();
   return 0;
}