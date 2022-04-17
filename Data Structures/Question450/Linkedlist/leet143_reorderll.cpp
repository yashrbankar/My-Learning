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
    Node *last;

    void create();
    void insertion();
    void display();
    void oddEvenList(Node *);
};

void Linkedlist::display()
{
    Node *temp = first;
    while (temp)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << " NULL\n";
}

void Linkedlist::create()
{
    Node *last;
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
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
    cout << "-----------------------::\n";
    display();
}

void Linkedlist::oddEvenList(Node *head)
{
    Node *temp = head, *second = head->next, *prev = NULL, *nxt ,*end;
    Node *p1, *p2;
    stack<Node *> s;

    if (!head || !head->next)
    {
        return;
    }

    while (temp)
    {
        s.push(temp);
        temp = temp->next;
    }
    temp = head;
    p1 = s.top();
    s.pop();

    while (temp->next && !s.empty())
    {
        nxt = temp->next;
        p2 = s.top();
        s.pop();

        p2->next = NULL;
        end=temp->next;
        temp->next = p1;

        p1->next = end;
        temp = nxt;
        p1 = p2;
    }
}

int main()
{
    Linkedlist obj;
    obj.create();
    obj.oddEvenList(obj.first);
    cout << "\n----------------------\n";
    obj.display();
    return 0;
}