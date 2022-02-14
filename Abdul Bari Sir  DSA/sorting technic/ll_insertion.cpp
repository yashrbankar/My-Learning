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

void Linkedlist::display()
{
    Node *temp = first;
    while (temp)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << "\n";
}

void Linkedlist::create()
{
    Node *last;
    vector<int> arr = {3, 2, 5, 4, 1};
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < arr.size(); i++)
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
                second = temp;
                first = temp;
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
                if (ll->next == NULL)
                {
                    ll->next=temp;
                    break;
                }
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
    first = second;
}
int main()
{
    Linkedlist obj;
    obj.create();
    obj.insertion();
    obj.display();

    return 0;
}