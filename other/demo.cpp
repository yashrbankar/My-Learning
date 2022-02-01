#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class Clinkedlist
{
public:
    Node *first;
    void create(int A[], int n);
    void display();
    void insert();
    void delet();
};
void Clinkedlist::create(int A[], int n)
{
    Node *temp, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = first;
        last->next = temp;
        last = temp;
    }
}
void Clinkedlist::display()
{
    Node *p;
    p = first;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != first);
}
void Clinkedlist::insert()
{
    Node *p, *t;
    int pos, x;
    cout << "Enter position at which new value is to be inserted :" << endl;
    cin >> pos;
    cout << "Enter the value that is to be inserted :" << endl;
    cin >> x;
    t = new Node;
    p = first;
    t->data = x;
    if (pos == 0)
    {
        t->next = first;
        while (p->next != first)
        {
            p = p->next;
        }
        p->next = t;
        first = t;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
        
    }
    display();
}
void Clinkedlist::delet()
{
    Node *p, *q;
    int pos, x;
    cout << "Enter position at which value is to be deleted :" << endl;
    cin >> pos;
    if (pos == 1)
    {
        p = first;
        while (p->next != first)
        {
            p = p->next;
            p->next = first->next;
            x = first->data;
            delete first;
            first = p->next;
        }
    }
    else
    {
        p = first;
        for (int i = 0; i < pos - 2; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        x = q->data;
        delete q;
    }
    display();
}
int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    Clinkedlist c;
    c.create(A, 5);
    // c.display();
    c.insert();
    // c.delet();
    return 0;
}