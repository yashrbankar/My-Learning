#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;
};

class Linkedlist
{
public:
    Node *first = NULL;
    void create();
    // void reverse_recur(Node *, Node*);
    void reverse();
    void display(Node * );
    void addOne();
    void addOne1();
};

void Linkedlist::create()
{
    vector<int>arr = {1,2,3,8};
    Node *temp, *last;
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < arr.size(); i++)
    {
        temp = new Node;
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    // display(first);
}



void Linkedlist::display(Node *t)
{
    while (t)
    {
        cout << " " << t->data;
        t = t->next;
    }
    cout<<"\n";
}

void Linkedlist::reverse()
{
    Node*q=NULL,*p=NULL,*r=first;
    while (r)
    {
        q=p;
        p=r;
        r=r->next;
        p->next=q;
    }
    first=p;
    display(first);

}
void Linkedlist::addOne()
{
    reverse();
    Node* temp=first;
    while (temp)
    {
        if(temp->data<9)
        {
            temp->data++;
            break;
        }
        else if(temp->data==9)
        {
            temp->data=0;
            
            temp=temp->next;
            
        }
        
    }
    reverse();
    // display(first);
}

void Linkedlist::addOne1()
{
    reverse();
    Node* temp=first , *prev;
    int carry=0;
    while (temp)
    {
        // if digit is less than 9
        if(temp->data<9)
        {
           temp->data=temp->data+1;
           carry=0;
           break;
        }
        // digit is 9
        else if(temp->data==9)
        {
            temp->data=0;
            carry=1;
            prev=temp;
            temp=temp->next;
        }
    }
    //  if stil the carry is exist
    if(carry)
    {
        Node* temp=new Node;
        temp->data=carry;
        carry=0;
        prev->next=temp;
    }
    reverse();
    display(first);
}
int main()
{
    Linkedlist obj;
    obj.create();
    cout<<"\n";
    //obj.display(obj.first);
    obj.addOne1();
    return 0;
}