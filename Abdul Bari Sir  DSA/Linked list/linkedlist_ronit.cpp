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
    Node *first, *last;
    int index = 0;

public:
    Linkedlist(int);
    void Insert_Last();
    void display();
    void insert(); 
    void search();
    void replace();
    void rotation();
    void reverse();
    void max_element();
    void min_element();
    void _delete();
    bool is_sorted();
    void dublicate();
};
int main()
{
    int data, choice;
    cout << "Enter The Data Of First Node : ";
    cin >> data;
    bool ans;
    Linkedlist l(data);
    do
    {
        cout << "Enter 1 To Create (Insert_Last) :" << endl;
        cout << "Enter 2 To Search : " << endl;
        cout << "Enter 3 To Insert :" << endl;
        cout << "Enter 4 To Replace :" << endl;
        cout << "Enter 5 To Rotation Linkedlist :" << endl;
        cout << "Enter 6 To Find Max Element :" << endl;
        cout << "Enter 7 To Find Min Element :" << endl;
        cout << "Enter 8 To Delete Node :" << endl;
        cout << "Enter 9 To Is_sorted :" << endl;
        cout << "Enter 10 To Find Dublicate :" << endl;
        cout << "Enter 11 To Display :" << endl;
        cout << "ENTER YOUR CHOICE ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            l.Insert_Last();
            break;
        case 2:
            l.search();
            break;
        case 3:
            l.insert();
            break;
        case 4:
            l.replace();
            break;
        case 5:
            l.rotation();
            break;
        case 6:
            l.max_element();
            break;
        case 7:
            l.min_element();
            break;
        case 8:
            l._delete();
            break;
        case 9:
            ans = l.is_sorted();
            if (ans == true)
            {
                cout << "Array Is Sorted." << endl;
            }
            else
            {
                cout << "Array Is Not Sorted " << endl;
            }

            break;
        case 10:
            l.dublicate();
            break;
        case 11:
            l.display();
            break;

        // default:
        //     cout << "Invalid Choice " << endl;
        //     break;
        }
    } while (choice != 0);

    return 0;
}

// constructor to create first node
Linkedlist ::Linkedlist(int data)
{
    first = new Node;
    first->data = data;
    first->next = NULL;
    last = first;
    index++;
}
// create function

void Linkedlist ::Insert_Last()
{
    Node *temp = new Node;

    cout << "Enter The Data : ";
    cin >> temp->data;
    cout << endl;
    temp->next = NULL;
    last->next = temp;
    last = temp;
    index++;
}

void Linkedlist ::display()
{
    Node *temp;
    temp = first;
    while (temp != NULL)
    {
        cout << temp->data << "*";
        temp = temp->next;
    }
    cout << endl;
    cout << endl;
}
// searching in linkedlist and move to head

void Linkedlist ::search()
{
    int search, i = 0;
    cout << "What You Want To Search :";
    cin >> search;
    Node *temp, *q = NULL;
    temp = first;
    while (temp != NULL)
    {
        if (temp->data == search)
        {
            i++;
            cout << search << " Found At Index " << i << endl;
            q->next = temp->next;
            temp->next = first;
            first = temp;
        }
        q = temp;
        temp = temp->next;
        i++;
    }
}
// inserting element in linkedlist and in first;
void Linkedlist ::insert()
{
    Node *temp, *insert, *left;
    int index;
    insert = first;
    temp = new Node;
    cout << "Enter Index At Which You Want To Insert : ";
    cin >> index;
    cout << endl;
    cout << "Enter The Data Of Node ";
    cin >> temp->data;
    index++;
    if (index == 1)
    {
        temp->next = first;
        first = temp;
    }
    else
    {
        for (int i = 1; i < index; i++)
        {
            insert = insert->next;
        }

        left = insert->next;
        insert->next = temp;
        temp->next = left;
    }
}
// replacing element
void Linkedlist ::replace()
{
    int index, i = 1, data;
    cout << "Enter The Index Which You Want To Replace : ";
    cin >> index;
    Node *replace;

    cout << "Enter The Data : ";
    cin >> data;
    cout << endl;

    replace = first;
    while (i != index)
    {
        replace = replace->next;
        i++;
    }
    replace->data = data;
}

void Linkedlist ::rotation()
{
    int i = 1;
    while (i != index)
    {
        Node *p;
        p = first;
        first = p->next;
        last->next = p;
        p->next = NULL;
        last = p;
        i++;
    }
}

// Reverse function

void Linkedlist ::reverse()
{
}

void Linkedlist ::max_element()
{
    Node *temp ;
    temp = first;
    int max = first->data;

    while (temp != NULL)
    {
        if (temp->data > max)
        {
            max = temp->data;
        }
        temp = temp->next;
    }
    cout << "Max Number Is " << max << endl;
}
void Linkedlist ::min_element()
{
    Node *temp ;
    temp = first;
    int min = first->data;

    while (temp != NULL)
    {
        if (temp->data < min)
        {
            min = temp->data;
        }
        temp = temp->next;
    }
    cout << "Max Number Is " << min << endl;
}

void Linkedlist ::_delete()
{
    int index;
    Node *temp, *q;
    cout << "Enter The Index :";
    cin >> index;
    temp = first;
    if (index == 1)
    {
        first = first->next;
        delete temp;
    }
    else
    {

        for (int i = 1; i < index; i++)
        {
            /* code */
            q = temp;
            temp = temp->next;
        }
        if (temp)
        {
            q->next = temp->next;
            delete temp;
        }
        else
        {
            cout << "Invalid Index ! " << endl;
        }
    }
}

bool Linkedlist::is_sorted()
{
    Node *temp = first;
    int x = first->data;
    while (temp != NULL)
    {
        if (x > temp->data)
        {
            return false;
        }
        x = temp->data;
        temp = temp->next;
    }
    return true;
}

void Linkedlist ::dublicate()
{
    Node *temp = first->next;
    Node *q = first;

    while (temp != NULL)
    {
        if (q->data == temp->data)
        {
            q->next = temp->next;
            delete temp;
            temp=q->next;
        }
        else
        {
            q = temp;
            temp = temp->next;
        }
    }
}