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
    void function(Node *);
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

void Linkedlist::function(Node *head)
{
    
}

int main()
{
    Linkedlist obj;
    obj.create();
    obj.function(obj.first);
    cout << "\n----------------------\n";
    obj.display();
    return 0;
}