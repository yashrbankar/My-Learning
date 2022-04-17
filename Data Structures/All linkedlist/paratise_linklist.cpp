#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *Next;
};

class Linkedlist
{

public:
    Node *First;
    int count = 0;
    Linkedlist();
    void display();
    void search();
    void insert();
    void delete1();
    void dublicate();
    void Reverse();
    void Reverse1();
    void Recur_r(Node *, Node *);
};

int main()
{
    int key = 0;
    Linkedlist obj;
    obj.display();
    do
    {
        cout << "Enter the current key" << endl;
        cout << "Enter the key 0 ::  for Exit" << endl;
        cout << "Enter the key 1 ::  for displaying  " << endl;
        cout << "Enter the key 2 ::  for searching  " << endl;
        cout << "Enter the key 3 ::  for Inserting  " << endl;
        cout << "Enter the key 4 ::  for Deleting  " << endl;
        cout << "Enter the key 5 ::  for Counting node   " << endl;
        cout << "Enter the key 6 ::  finding duplicate" << endl;
        cout << "Enter the key 7 ::  for reversing linkedlist with O space " << endl;
        cout << "Enter the key 8 ::  for reversing linkedlist without O space " << endl;
        cout << "Enter the key 9 ::  for reversing ( RECURSION ) linkedlist without O space " << endl;
        cout << " Enter the valid key :: ";
        cin >> key;
        switch (key)
        {
        case 1:
            obj.display();
            break;
        case 2:
            obj.search();
            break;
        case 3:
            obj.insert();
            break;
        case 4:
            obj.delete1();
            break;
        case 5:
            cout << "Count of the Node is ::" << obj.count << endl;
            cout << "------------------------------" << endl;
            cout << "------------------------------" << endl;
            break;
        case 6:
            obj.dublicate();
            break;
        case 7:
            obj.Reverse();
            break;
        case 8:
            obj.Reverse1();
            break;
        case 9:
            obj.Recur_r(NULL , obj.First);
            break;
        default:
            cout << " Enter the valid keys " << endl;
            cout << "------------------------------" << endl;
            cout << "------------------------------" << endl;
            break;
        }

    } while (key != 0);
    return 0;
}

Linkedlist::Linkedlist()
{
    // int n;
    // cout<<"Enter no of element to be insert in the linkedlist :: ";
    int arr[5] = {1, 2, 3, 4, 5};
    count = 5;
    Node *last, *temp;
    First = new Node;
    First->data = arr[0];
    First->Next = NULL;
    last = First;
    for (int i = 1; i < 5; i++)
    {
        temp = new Node;
        temp->data = arr[i];
        temp->Next = NULL;
        last->Next = temp;
        last = temp;
    }
}

void Linkedlist::display()
{
    Node *p;
    p = First;
    while (p)
    {
        cout << p->data << " ";
        p = p->Next;
    }
    cout << endl;
    cout << "------------------------------" << endl;
    cout << "------------------------------" << endl;
}

/// Searching element ( improving search )
void Linkedlist::search()
{
    cout << "enter the element for search :: ";
    int search, i = 0;
    cin >> search;
    Node *p, *q = NULL;
    p = First;
    while (p != NULL)
    {
        if (p->data == search)
        {
            i++;
            cout << "Element is found at  :: " << i << endl;
            q->Next = p->Next;
            p->Next = First;
            First = p;
        }
        q = p;
        p = p->Next;
        i++;
    }
    cout << "------------------------------" << endl;
    cout << "------------------------------" << endl;
}

// inserting new element at the valid index
void Linkedlist::insert()
{
    int ind, element;
    cout << "Enter INDEX for inserting ::" << endl;
    cin >> ind;
    cout << "Enter ELEMENT for inserting ::" << endl;
    cin >> element;
    Node *p, *temp, *q;
    temp = new Node;
    p = First;

    if (ind == 0)
    {
        temp->data = element;
        temp->Next = First;
        First = temp;
        count++;
    }
    else
    {
        
        for (int i = 1; i <= ind; i++)
        {
            q = p;
            p = p->Next;
        }
        temp->data = element;
        temp->Next = p;
        q->Next = temp;
        count++;
    }
    display();
}
// Deleting node in cpp
void Linkedlist::delete1()
{
    int del, x;
    cout << "Enter the Index to be delete ::  ";
    cin >> del;
    Node *p, *q = NULL;
    p = First;
    if (del > 0 || del <= count)
    {
        if (del == 1)
        {
            x = p->data;
            First = p->Next;
            delete p;
            p = NULL;
            cout << " Sucessfully Deleted " << endl;
            display();
            cout << "------------------------------" << endl;
            cout << "------------------------------" << endl;
            count--;
        }
        else
        {
            for (int i = 2; i <= del; i++)
            {
                q = p;
                p = p->Next;
            }
            q->Next = p->Next;
            x = p->data;
            delete p;
            p = NULL;
            cout << " Sucessfully Deleted " << endl;
            display();
            cout << "------------------------------" << endl;
            cout << "------------------------------" << endl;
            count--;
        }
    }
}
// dublicate Node in the linkedlist
void Linkedlist::dublicate()
{
    Node *p, *q;
    p = First;
    q = p->Next;
    while (q)
    {
        if (p->data == q->data)
        {
            p->Next = q->Next;
            delete q;
            q = p;
            q = p->Next;
            count--;
        }
        else
        {
            p = q;
            q = q->Next;
        }
    }
    display();
}

void Linkedlist::Reverse()
{
    int n, i = 0;
    n = count;
    int arr1[n];
    Node *q;
    q = First;

    while (q)
    {
        /*

          | 5 | 4 |  3 | N 2 |  N-1 (1)| ARR

          |  |  |   |   |   | Linkedlist 1 ,2,3,4,5
        */
        arr1[n - 1] = q->data;
        q = q->Next;
        n--;
    }
    q = First;
    while (q)
    {
        q->data = arr1[n];
        q = q->Next;
        n++;
    }
    display();
}

void Linkedlist::Reverse1()
{
    Node *p, *q, *r;
    p = First;
    q = NULL;
    r = NULL;

    while (p)
    {
        r = q;
        q = p;
        p = p->Next;
        q->Next = r;
    }

    First = q; // mistake scope
    display();
}

void Linkedlist::Recur_r(Node *q, Node *p)
{

    if (p)
    {
        Recur_r(p, p->Next);
        p->Next = q;
    }
    else
    {
        First = q;
    }
}
