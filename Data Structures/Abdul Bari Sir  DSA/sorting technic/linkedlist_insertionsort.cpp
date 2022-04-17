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
    Node *second = NULL;
    Node *last;

    void create();
    void insertion();
    void display();
    void newll(Node *);
};

void Linkedlist::create()
{
    Node *last;
    int arr[] = {1, 2, 2, 2, 3, 3};
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

void Linkedlist::newll(Node *temp)
{
    temp->next = NULL;
    Node *tail = NULL, *ll;
    ll = second;
    if (ll == NULL)
    {
        second = temp;
    }
    else
    {
        while (ll)
        {
            if (ll->data > temp->data && ll == first)
            {
                temp->next = ll;
                ll = temp;
                break;
            }
            else if (ll->data > temp->data)
            {
                tail->next = temp;
                temp->next = ll;
                break;
            }
            else
            {
                    tail = ll;
                    ll = ll->next;
            }
        }
    }
}

void Linkedlist::insertion()
{
    Node *breaker = first, *ptr = first->next;

    while (breaker)
    {
        newll(breaker);
        breaker = ptr;
        if (ptr)
            ptr = ptr->next;
    }
}
int main()
{
    Linkedlist obj;
    obj.create();
    obj.insertion();
    obj.display();

    return 0;
}