#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Linkedlist
{
public:
    Node *first;
    Node *newll;
    void create();
    void function();
    void display();
};

void Linkedlist::create()
{
    Node *last;
    int arr[] = {1,2,2,2,3,3};
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < 6; i++)
    {
        Node *temp = new Node;
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    display();
}

void Linkedlist::function()
{
     Node*tail=first , *cur=first->next;
     while (cur)
     {
        if(cur->data==tail->data)
        {
            tail->next=cur->next;
            cur->next=NULL;
            delete cur;
            cur=tail->next;
        } 
        else
        {
            tail=cur;
            cur=cur->next;
        }
     } 
     display();
}

void Linkedlist::display()
{
    Node *temp = first;
    while (temp)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL \n";
}
int main()
{
    Linkedlist obj;
    obj.create();
    obj.function();
    // obj.display();

    return 0;
}