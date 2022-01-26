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
    Node *first;
    Node *second;
    Node *third;
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2,4,6,8,10};
    //    int arr[10];
    linkedlist()
    {
        create(first, arr1, 5);
        display(first);
        create(second, arr2, 5);
        display(second);
        // merge();
    }

    void merge();
    void create(Node * &, int *, int);
    void display(Node *temp);
};

void linkedlist::create(Node *&head, int arr[], int n)
{
    head = new Node;
    head->data = arr[0];
    head->next = NULL;
    Node *last, *temp;
    last = head;
    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void linkedlist::display(Node *temp)
{
    while (temp)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << "\n";
}

void linkedlist::merge()
{
    Node *last;
    if (first->data < second->data)
    {
        last = third = first;
        first = first->next;
        last->next = NULL;
    }
    else
    {
        last = third = second;
        second = second->next;
        last->next = NULL;
    }

    while (first && second)
    {
        if (first->data < second->data)
        {
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }
        else
        {
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }
    }
    if (first)
    {
        last->next=first;
    }
    else
    {
        last->next=second;
    }
    display(third);
}

int main()
{
    linkedlist obj;
    return 0;
}