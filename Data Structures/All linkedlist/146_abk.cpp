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
    vector<int> vect{1, 2, 3, 4, 5, 6, 7, 8, 9};
    Node *temp;
    first = new Node;
    first->data = vect[0];
    last = first;

    for (int i = 1; i < vect.size(); i++)
    {
        temp = new Node;
        temp->data = vect[i];
        last->next = temp;
        temp->prev= last;
        last = temp;
    }
}
void Linkedlist::func()
{
    Node *f, *l;
    f = first;
    l = last;
    cout << "enter sum  ::";
    int key;
    cin >> key;
    while (f != l->next)
    {
        if (f->data + l->data < key)
        {
            f = f->next;
        }
        else if (f->data + l->data > key)
        {
            l = l->prev;
        }
        else
        {
            cout << f->data << " + " << l->data << " = " << key;
            l=l->prev;
            f=f->next;
            cout<<"\n";
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