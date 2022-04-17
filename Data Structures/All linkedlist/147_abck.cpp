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
    void func();
};
void Linkedlist::create()
{
    vector<int> vect{1, 2, 4, 5, 6, 8, 9};
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
void Linkedlist::func()
{
    // Node *f, *l, *mid = first;

    cout << "enter sum  ::";
    int key;
    Node *l, *m, *f;
    cin >> key;
    f = first;
    m = first->next;
    l = first->next->next;
    while (f)
    {
        while (m)
        {
            while (l)
            {
                if (f->data + m->data + l->data == key)
                {
                    cout << f->data << " + " << m->data << " + " << l->data << " = " << key<<"\n";
                    break;
                }
                l = l->next;
            }
            if (m->next)
            {
                m = m->next;
            }
            else
            {
                break;
            }
            if (m->next)
            {
                l = m->next;
            }
            else
            {
                break;
            }
        }
        if (f->next)
        {
            f = f->next;
        }
        else
        {
            break;
        }
        if (f->next)
        {
            m = f->next;
        }
        else
        {
            break;
        }
        if (f->next)
        {
            l = m->next;
        }
        else
        {
            break;
        }
    }
}
int main()
{
    Linkedlist obj;
    obj.create();
    obj.func();
    return 0;
}