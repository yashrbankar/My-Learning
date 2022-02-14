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
    void display(Node*);
    void split();
};

void Linkedlist::display(Node* temp)
{
    // Node *temp = first;
    while (temp)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << " NULL\n";
}

void Linkedlist::create()
{
    // Node *last;
    vector<int> arr = {1,2,3,4};
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
    last->next = first;
    
}

void Linkedlist::split()
{
    Node *slow = NULL, *fast = first, *last;
    do
    {
        slow = fast;
        fast = fast->next;
    } while (fast != first);
    last = slow;
    last->next = NULL;
    slow=first;

    while (fast)
    {
        fast = fast->next;
        if (fast)
        {
            fast = fast->next;
            if (fast)
            {
                slow = slow->next;
            }
        }
    }
    last=slow->next;
    slow->next=NULL;
    display(first);
    display(last);


}

int main()
{
    Linkedlist obj;
    obj.create();
    obj.split();
    
    return 0;
}