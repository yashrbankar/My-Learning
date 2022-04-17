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
    Node *first;
    Node *newll;
    void create();
    void sort();
    void display();
};

void
Linkedlist::create()
{
    Node *last;
    int arr[] = {0,0,1, 0, 0};
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < 5; i++)
    {
        Node *temp = new Node;
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    display();
}

void Linkedlist::sort()
{
    Node *temp = first;
    int czero =0, cone = 0, ctwo = 0;
    while (temp)
    {
        if (temp->data == 0)
        {
            czero++;
        }
        else if (temp->data == 1)
        {
            cone++;
        }
        else if (temp->data == 2)
        {
            ctwo++;
        }
        temp=temp->next;
    }
    temp=first;
    while (temp)
    {
        if (czero != 0)
        {
            temp->data = 0;
            czero--;
        }
        else if (cone != 0)
        {
            temp->data = 1;
            cone--;
        }
        else if (ctwo != 0)
        {
            temp->data = 2;
            ctwo--;
        }
        temp = temp->next;
    }
}

void Linkedlist::display()
{
    Node *temp = first;
    while (temp)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL \n";
}
int main()
{
    Linkedlist obj;
    obj.create();
    obj.sort();
    obj.display();

    return 0;
}