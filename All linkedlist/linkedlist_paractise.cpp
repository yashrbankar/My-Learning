#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class linkedlist
{
public:
    int count;
    Node *first;
    void create();
    void display();
    void max();
    int delete1();
    bool search();
    void search_im();
    void dublicate();
    void reverse();
    void reverse_recur(Node* , Node*);
};

int main()
{
    linkedlist obj;
    obj.create();
    // obj.max();
    // obj.delete1();
    // cout<<"search result :: "<<obj.search();
    // obj.search_im();
    // obj.dublicate();
    obj.reverse_recur(obj.first , NULL);
    obj.display();
    return 0;
}

void linkedlist::create()
{
    int n=7;
    int arr[n] = {2, 2, 3, 3, 3 , 4 ,4};
    count=n;
    Node *temp, *last;
    first = new Node;
    cout << "\n enter the first value :: ";
    cin >> first->data;
    arr[0] = first->data;
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    // display();
}

void linkedlist::display()
{
    Node *temp = first;
    while (temp)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
}

void linkedlist::max()
{
    int max = -10000, min = 100000;
    Node *temp = first;
    while (temp)
    {
        if (temp->data > max)
        {
            max = temp->data;
        }
        if (temp->data < min)
        {
            min = temp->data;
        }
        temp = temp->next;
    }
    cout << "\n max and min :: " << max << " & " << min << endl;
}

int linkedlist::delete1()
{
    display();
    int pos;
    cout << "\n Enter the valid position :: ";
    cin >> pos;
    Node *p, *q;
    if (pos <= count)
    {
        if (pos == 1)
        {
            p = first;
            first = first->next;
            delete p;
            p = NULL;
        }
        else
        {
            p = first;
            q = NULL;
            for (int i = 1; i < pos; i++)
            {
                q = p;
                p = p->next;
            }
            q->next = p->next;
            delete p;
            p = NULL;
        }
    }
    display();
}

bool linkedlist::search()
{
    display();
    Node *p = first;
    int key, x = -1;
    cout << "enter the key to be search :: ";
    cin >> key;
    while (p)
    {
        if (p->data == key)
        {
            cout << "key is found \n";
            return true;
        }
        else
        {
            p = p->next;
        }
    }
    return false;
}

void linkedlist::search_im()
{
    display();
    int key;
    cout << " \n enter the key to be search :: ";
    cin >> key;
    Node *p = first;
    Node *q = NULL;
    while (p)
    {
        if (key == p->data)
        {
            cout << "key found \n";
            q->next = p->next;
            p->next = first;
            first = p;
        }
        q = p;
        p = p->next;
    }
    display();
}

void linkedlist::dublicate()
{
    Node *p = first, *q = first->next; 
    while (q)
    {
        if (p->data == q->data)
        {
            p->next = q->next;
            delete q;
            q = NULL;
            q=p->next;
        }
        else
        {
            p = q;
            q = q->next;
        }
    }
    display();
}

void linkedlist::reverse()
{
    Node *r ,*p, *q;
    r=q=NULL;
    p=first;
    while (p)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
    display();
}

void linkedlist::reverse_recur(Node* p , Node *q)
{
    if (p)
    {
        reverse_recur( p->next , p );
        p->next=q;
    }
    else
    {
        first =q;
    }
    
}
