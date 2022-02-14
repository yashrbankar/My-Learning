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
    Node *second = NULL;
    Node *last;

    void create();
    void insertion();
    void display();
    void newll(Node *);
};

void Linkedlist::display()
{
    Node *temp = first;
    while (temp)
    {
        cout << temp->data<<" ->";
        temp = temp->next;
    }
    cout << " NULL\n";
}

void Linkedlist::create()
{
    Node *last;
    vector<int> arr = {5,4,3,2,1,10,9,8,7,6};
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node;
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    cout<<"Linkedlist before sort ::\n";
    display();
}

void Linkedlist::newll(Node *temp)
{
    temp->next = NULL;
    Node *tail = NULL, *cur;
    cur = second;
    if (cur == NULL)
    {
        second = temp;
    }
    else
    {
        while (cur)
        {
            if (cur->data > temp->data && cur == first) // !adding element at the starting of linkedlist
            {
                temp->next = cur;
                second = temp; //? after the adding element at first we have to
                first = temp;//? changing first node
                break; // ! after insertion at correct index we have to broke the loop
            }
            else if (cur->data > temp->data)// ? adding element in the betw of two nodes
            {
                tail->next = temp;
                temp->next = cur;
                break;
            }
            else //! sliding to the next 
            {
                if (cur->next == NULL) // ? addting at the last node
                {
                    cur->next=temp;
                    break;
                }
                tail = cur;
                cur = cur->next;
            }
        }
    }
}

void Linkedlist::insertion()
{
    Node *breaker = first, *ptr = first->next;

    while (breaker)
    {
        newll(breaker);
        breaker = ptr;
        if (ptr)
        ptr = ptr->next;
    }
}
int main()
{
    Linkedlist obj;
    obj.create();
    obj.insertion();
    cout<<"\nAfter insertion sort :: \n";
    obj.display();
    return 0;
}