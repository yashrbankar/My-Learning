#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
class Stack
{
public:
    int top = -1;
    Node *arr[10];
    int size = 10;
    void push(Node *);
    Node *pop();
};

void Stack::push(Node *data)
{
    if (top == size - 1)
    {
        cout << "stack is full \n ";
    }
    else
    {
        top++;
        arr[top] = data;
    }
}

Node *Stack::pop()
{
    if (top == -1)
    {
        cout << "stack is empty \n";
    }
    else
    {
        Node *p;
        p = arr[top];
        top--;
        return p;
    }
}

class linkedlist
{
public:
    Node *first;
    Node *second;
    Node *third;
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2, 4, 6, 8, 10};
    linkedlist()
    {
        create(first, arr1, 5);
        display(first);
        create(second, arr2, 5);
        display(second);
        // merge();
    }

    void merge();
    void create(Node *&, int *, int);
    void display(Node *temp);
    void insert();
    void intersection();
    // stack function
};

void linkedlist::create(Node *&head, int arr[], int n)
{
    Node *last, *temp;
    head = new Node;
    head->data = arr[0];
    head->next = NULL;
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
        last->next = first;
    }
    else
    {
        last->next = second;
    }
    display(third);
}

void linkedlist::intersection()
{
    Stack stk1;
    Stack stk2;
    Node *p1, *p2;
    p1 = first;
    p2 = second;
    while (!p1)
    {
        stk1.push(p1);
        p1 = p1->next;
    }

    while (p2)
    {
        stk2.push(p2);
        p2 = p2->next;
    }

    p1 = stk1.pop();
    p2 = stk2.pop();
    Node *intersect;
    while (p1 == p2)
    {
        intersect = p1;
        p1 = stk1.pop();
        p2 = stk2.pop();
    }
    cout << "intersection :: " << intersect->data;
}

int main()
{
    linkedlist obj;
    obj.second->next->next->next = obj.first->next->next;
    obj.display(obj.first);
    obj.display(obj.second);
   // obj.intersection();
    return 0;
}