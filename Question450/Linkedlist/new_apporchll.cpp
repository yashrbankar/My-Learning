#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};
class Linkedlist
{
public:
    Node *first;
    void function();
    void create();
    void display();
};

void Linkedlist::function()
{
    int count = INT_MIN;
    Node *fast = first;
    Node *slow = first;
    Node *back = NULL;
    //  this is the leetcode commit 

    // Find the middle of the list using a slow/fast pointer.
    // Reverse the front of the list while moving forward.
    while (fast && fast->next)
    {
        fast = fast->next->next;

        Node *nxt = slow->next;
        slow->next = back;
        back = slow;
        slow = nxt;
    }
    first=slow;
    // We now have two lists that we can traverse forward.
    while (slow && back)
    {
        count = std::max(count, slow->val + back->val);
        slow = slow->next;
        back = back->next;
    }

    cout << "max " << count;
}
void Linkedlist::create()
{
    Node *last, *temp;

    first = new Node;
    first->val = 1;
    first->next = NULL;
    last = first;
    for (int i = 1; i < 6; i++)
    {
        temp = new Node;
        temp->val = i + 1;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void Linkedlist::display()
{
    Node *temp = first;
    while (temp)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
}

int main()
{
    Linkedlist obj;
    obj.create();
    obj.function();
    obj.display();

    return 0;
}