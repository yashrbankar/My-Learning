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
    void reverse_recur(Node *, Node*);
    void reverse();
    void display(Node * );
};

void Linkedlist::create()
{
    int arr[] = {2, 4, 6, 8, 10};
    Node *temp, *last;
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < 5; i++)
    {
        temp = new Node;
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    display(first);
}

void Linkedlist::reverse_recur(Node *p ,Node* q)
{
    
    if (q)
    {
        reverse_recur(q,q->next);
        p->next=q;
    }
    else
    {
        first=p;
    }
}
void Linkedlist::display(Node *t)
{
    while (t)
    {
        cout << " " << t->data;
        t = t->next;
    }
}

int main()
{
    Linkedlist obj;
    obj.create();
    obj.reverse_recur(obj.first , obj.first->next);
    obj.display(obj.first);
    return 0;
}