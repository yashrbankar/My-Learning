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
    int count;
    Node *first;
    void create();
    int search(int);
    void display();
    Linkedlist()
    {
        create();
    }
    int delete1();
    void sum();
    void insert(int x);
};

int main()
{
    Linkedlist obj;
    char ch;
    int key;

    do
    {
        cout << "enter the correct key " << endl;
        cout << "0 : Exit " << endl;
        cout << "1 : display " << endl;
        cout << "2 : search " << endl;
        cout << "3 : delete " << endl;
        cout << "enter the key :: ";
        cin >> key;

        switch (key)
        {
        case 0:
            return 0;
            break;
        case 1:
            obj.display();
            break;
        case 2:
            cout<<"Enter the element to be search ";
            int ele;
            cin>>ele;
            cout<<"at the position :: "<<obj.search( ele )<<endl;
            break;
        case 3:
            obj.delete1();
            break;
        default:
            break;
        }
        cout << "do u want to contine  (y/n) ::";
        cin >> ch;
        if (ch == 'n' || ch == 'N')
        {
            return 0;
        }

    } while (ch == 'y' || ch == 'Y');
};

void Linkedlist::create()
{
    int n;
    Node *temp, *last;
    first = new Node;
    cout << "Enter the starting size of linkedlist";
    cin >> n;
    count = n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i <= n; i++)
    {
        temp = new Node;
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    display();
}

void Linkedlist::display()
{
    Node *t;
    t = first;
    while (t->next)
    {
        cout << t->data << " ";
        t = t->next;
    }
}

int Linkedlist::delete1()
{
    display();
    int ele;
    cout << "\n";
    cout << "Enter the correct element to be delete :: " << endl;
    cin>>ele;
    Node* p;
    int position=search(ele);
    if (position == 1)
    {
            
            p=first;
            first=first->next;
            delete p;
            p=NULL;
    }
    else
    {
        p=first;
        Node*q;
        for (int i = 1; i < position; i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        delete p;
        p=NULL;
        display();
    }
}

int Linkedlist::search(int element)
{
    int counter=0;
    Node* t=first;
    while (t)
    {
        if(t->data==element)
        {
            counter++;
           cout<<"Element is found"<<endl;
           return counter;
        }
        else
        {
            t=t->next;
            counter++;
        }
    }
}
