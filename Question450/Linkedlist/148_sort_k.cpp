#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

class Linkedlist
{
public:
    Node *first, *last;
    void create();
    Node *func();
    void display(Node*);
};
void Linkedlist::create()
{
    vector<int> vect{3,6,2,12,56,8};
    Node *temp;
    first = new Node;
    first->data = vect[0];
    last = first;

    for (int i = 1; i < vect.size(); i++)
    {
        temp = new Node;
        temp->data = vect[i];
        last->next = temp;
        temp->prev = last;
        last = temp;
    }
}
Node *Linkedlist::func()
{
    Node *head = first, *newhead = NULL;
    Node *cur = NULL;
    int k;
    cout << "k:: ";
    cin >> k;

    priority_queue<Node *, vector<Node *>, greater<Node *>> q;
    if (head == NULL)
    {
        return head;
    }
    for (int i = 0; head != NULL && i <= k; i++)
    {
        q.push(head);
        head = head->next;
    }

    while (!q.empty())
    {
        if (!newhead)
        {
            newhead = q.top();
            newhead->prev = NULL;
            cur = newhead;
        }
        else
        {
            cur->prev = q.top();
            q.top()->prev = cur;
            cur = q.top();
        }
        q.pop();
        if (head)
        {
            q.push(head);
            head = head->next;
        }
    }
    return newhead;
}
void Linkedlist::display(Node*temp)
{
    while (temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    Linkedlist obj;
    obj.create();
    Node*temp=obj.func();
    obj.display(temp);

    return 0;
}