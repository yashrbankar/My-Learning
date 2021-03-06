#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *bottom;
};

class Linkedlist
{
public:
    Node *first;
    void create();
    void display();
    void display2();
    void singly();
    void recur(Node *);
};

void Linkedlist::create()
{
    int arr[] = {5, 10, 19, 28};
    Node *last, *temp;
    first = new Node;
    first->data = arr[0];
    first->bottom = first->next = NULL;
    last = first;
    for (int i = 1; i < 4; i++)
    {
        temp = new Node;
        temp->data = arr[i];
        temp->bottom = temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    temp = first;
    while (temp)
    {
        cout << "enter number of element at bottom element of " << temp->data << " :: ";
        int n;
        cin >> n;
        if (n == 0)
        {
            temp->bottom = NULL;
            // cout << "-->null\n";
            temp = temp->next;
        }
        else
        {
            int *a;
            a = new int[n];
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }

            Node *f, *l, *t;
            f = new Node;
            temp->bottom = f;
            f->data = a[0];
            f->bottom = f->next = NULL;
            l = f;
            for (int i = 1; i < n; i++)
            {
                t = new Node;
                t->data = a[i];
                t->bottom = t->next = NULL;
                l->bottom = t;
                l = t;
            }
            temp = temp->next;
            // this the commit 
        }
    }
}

void Linkedlist::display()
{
    Node *temp = first, *t;
    while (temp)
    {
        cout << temp->data << "-->";
        t = temp;
        while (t->bottom)
        {
            t = t->bottom;
            cout << t->data << " -->";
        }
        cout << "null \n";
        temp = temp->next;
    }
}

void Linkedlist::display2()
{
    Node *temp = first;
    while (temp)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL \n";
}

void Linkedlist::singly()
{
    Node *temp_next = first;
    Node *temp_bottom = first->bottom;
    Node *target = temp_bottom;
    Node *cur, *tail, *base = first;
    while (temp_next) // for traversing linear
    {
        tail = temp_next;
        cur = tail->next;
        while (base->bottom) // for traversing vertical
        {
            if (!cur)
            {
                base->bottom = target->bottom;
                tail->next = target;
                target->bottom = NULL;
                target->next = NULL;
                tail = base;
                cur = tail->next;
            }

            else if (cur->data > target->data)
            {
                base->bottom = target->bottom; //? creating brige 
                tail->next = target; //! inserting  target node after tail
                target->bottom = NULL; //! insertion
                target->next = cur;
                cur = target;
                target = base->bottom;
            }

            else
            {
                tail = cur;
                cur = cur->next;
            }
        }

        base = base->next;
        if (base)
        {
            target = base->bottom;
        }
        temp_next = temp_next->next;
    }
}

int main()
{
    Linkedlist obj;
    obj.create();
    obj.display();
    obj.singly();
    obj.display2();
    // cout<<"\n this the inorder :: \n";
    // obj.recur(obj.first);

    return 0;
}