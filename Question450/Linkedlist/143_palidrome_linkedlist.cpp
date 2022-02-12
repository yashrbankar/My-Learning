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
    bool function();
    void display();
    Node *getmid();
    Node *reverse(Node *forw);
};

void Linkedlist::create()
{
    Node *last;
    int arr[] = {1, 2, 3, 4, 2, 1};
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

Node *Linkedlist::getmid()
{
    Node *slow = first, *fast = first->next;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node *Linkedlist::reverse(Node *forw)
{
    Node *cur = NULL, *tail = NULL;
    Node *join = forw;
    // Node*tail=NULL;
    while (forw)
    {
        tail = cur;
        cur = forw;
        forw = forw->next;
        cur->next = tail;
    }
    return cur;
}

bool Linkedlist::function()
{
    Node *mid, *t = first;

    mid = getmid();
    Node *join = reverse(mid->next);
    mid->next = join;
    display();

    Node *temp = mid->next;
    while (temp)
    {
        if (temp->data != t->data)
        {
            join = reverse(mid->next);
            mid->next = join;
            display();
            return false;
        }
        else
        {
            temp = temp->next;
            t = t->next;
        }
    }
    join = reverse(mid->next);
    mid->next = join;
    display();
    return true;
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
    cout << "\n";
     int key=obj.function();
    if (key==1)
    {
        cout<<"panlidrome ";
    }
    else
    {
        cout<<"NOT panlidrome ";
    }
    

    return 0;
}