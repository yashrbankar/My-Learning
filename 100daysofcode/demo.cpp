#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *next;
    int data;
};

class linkedlist
{
public:
    Node *head;
    int arr[5] = {1, 2, 3, 4, 5};
    void create();
    void display();
    void insert();
};

void linkedlist::create()
{
    head = new Node;
    head->data = arr[0];
    head->next = head;
    Node *last;
    last = head;

    for (int i = 1; i < 5; i++)
    {
        Node *temp = new Node;
        temp->data = arr[i];
        temp->next = last->next; // or head;
        last->next = temp;
        last = temp;
    }
}

void linkedlist::display()
{
    int flag = 0;
    Node *t = head;
    while (t != head || flag == 0)
    {
        flag = 1;
        cout << " " << t->data;
        t = t->next;
    }
}

void linkedlist::insert()
{
    display();
    int pos, d;
    cout << "\n enter valid index :: ";
    cin >> pos;
    cout << "\n enter value to be inserted in the circular linkedlist :: ";
    cin >> d;
    if (pos >= 0 && pos <= 5)
    {
        Node *temp;
        temp = new Node;
        temp->data = d;
        if (pos == 0)
        {
            if (head == NULL)
            {
                head = temp;
                temp->next = head;
            }
            else
            {
                Node *p;
                p=head;
                temp->next = head;
                while (p->next != head)
                {
                    p = p->next;
                }
                p->next = temp;
                head = temp;
            }
        }
        else
        {
            Node *p=head;
            for (int i = 0; i < pos-1; i++)
            {
                p=p->next;
            }
            temp->next=p->next;
            p->next=temp;
        }
    }
    else
    {
        cout << "invalid index ";
    }
    display();
}

int main()
{
    linkedlist obj;
    obj.create();
    obj.insert();

    return 0;
}