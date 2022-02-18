#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Linkedlist
{

    Node *first;

public:
    Linkedlist();
    void search();
    void display();
    int count();
    void insert();
    void max();
    void deleteNode();
    void issorted();
    void dubli();
    
};

void Linkedlist::dubli()
{
    Node *p, *q;
    p = first;
    q = p->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

void Linkedlist::issorted()
{
    int min = -12344;
    Node *p;
    p = new Node;

    p = first;
    while (p != NULL)
    {
        if (min >= p->data)
        {
            cout << "unsorted " << endl;
            break;
        }
        min = p->data;
        p = p->next;
    }
    if (p == NULL)
    {
        cout << " Sorted " << endl;
    }
}

Linkedlist::Linkedlist()
{
    int n;
    cout << "Enter No of element insert first time in linkedlist " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements :: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *last, *temp;

    first = new Node;
    first->data = arr[0];
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
    n = count();
}

void Linkedlist::deleteNode()
{
    cout << "enter the posotion :: ";
    int pos;
    cin >> pos;
    Node *p;
    p = new Node;
    if (pos == 1)
    {

        cout << "deleted :: " << first->data << endl;
        p = first;
        first = first->next;
        delete p;
    }
    else
    {
        int c;
        c = count();

        if (pos < c)
        {
            p = first;
            Node *q = NULL;
            q = new Node;
            for (int i = 1; i < pos - 1; i++)
            {
                q = p;
                p = p->next;
            }
            cout << "deleted ::" << p->next << endl;
            q->next = p->next;
        }
    }
    display();
}
void Linkedlist::max()
{
    Node *p;
    p = new Node;
    p = first;
    int min = first->data;
    int max = first->data;
    while (p != NULL)
    {
        if (max < p->data)
        {
            max = p->data;
        }
        if (min > p->data)
        {
            min = p->data;
        }
        p = p->next;
    }
    cout << "maxium :: " << max << endl
         << "minium  :: " << min << endl;
}
void Linkedlist::search()
{
    int key;
    cout << "enter key for searching  ::  ";
    cin >> key;
    Node *p;        // moving pointer ;
    Node *q = NULL; // follow pointer p
    p = first;
    while (p != NULL)
    {
        if (p->data == key)
        {
            q->next = p->next; // jump
            p->next = first;   // trafer 1st node  into 2 node  by saving address of the first in p next
            first = p;         // chaning first
            cout << "element is found" << endl;
            cout << p->data;
        }
        q = p;       //  follwing
        p = p->next; //  moving
    }
}

void Linkedlist::display()
{
    Node *p;
    p = first;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int Linkedlist::count()
{
    Node *p;
    int count = 0;
    p = first;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

void Linkedlist::insert()
{
    int ind;
    Node *n; // the to be inserted in the linkedlist
    n = new Node;
    cout << "Node data for inserting ";
    cin >> n->data;
    cout << "enter index ";
    cin >> ind;
    Node *p;
    Node *q = NULL; // following pointer
    p = first;      // moving
    if (ind == 1)
    {
        n->next = first;
        first = n;
    }
    else
    {
        for (int i = 1; i < ind; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = n;
        n->next = p;
    }
}

int main()
{
    Linkedlist obj;
    // obj.deleteNode();

    // cout << "enter passcode for opperation :: " << endl;
    // cout << " enter key 0 for exit ::  ";
    // obj.max();
    // obj.search();
    // obj.insert();
    // obj.issorted();
    obj.dubli();
    obj.display();
    return 0;
}