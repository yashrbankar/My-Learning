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
    void func();
};

void Linkedlist::create()
{
    vector<int>arr = {9,9,9};
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
void Linkedlist::func()
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

int main()
{
    Linkedlist obj;
    obj.create();
    cout<<"\n";
    obj.display(obj.first);
    obj.func();
    return 0;
}