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
    Node *oddEvenList(Node *);
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
    vector<int> arr = {2, 1, 3, 5, 6, 4, 7};
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
    cout << "Linkedlist before sort ::\n";
    display();
}

Node *Linkedlist::oddEvenList(Node *head)
{
    Node *check = head, *even = NULL, *odd = NULL, *lasteven, *lastodd;

    if (!head || !head->next)
    {
        return head;
    }
    int data1 = head->data;
    int data2 = head->next->data;
    while (check)
    {
        if (check->data % 2 == 0)
        {
            if (even == NULL)
            {
                even = check;
                lasteven = check;

                head = head->next;

                check->next = NULL;
                check = head;
            }
            else
            {
                lasteven->next = check;
                head = head->next;
                check->next = NULL;
                lasteven = check;
                check = head;
            }
        }
        else
        {
            if (odd == NULL)
            {
                odd = check;
                lastodd = check;
                head = head->next;
                check->next = NULL;
                check = head;
            }
            else
            {
                lastodd->next = check;
                head = head->next;
                check->next = NULL;
                lastodd = check;
                check = head;
            }
        }
    }
    
    
        lastodd->next = even;
        head = odd;
        return head;
}

int main()
{
    Linkedlist obj;
    obj.create();
    obj.first = obj.oddEvenList(obj.first);
    cout << "\nAfter insertion sort :: \n";
    obj.display();
    return 0;
}