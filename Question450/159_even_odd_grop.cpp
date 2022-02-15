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
    Node *oddEvenList(Node *);
};

void Linkedlist::display()
{
    Node *temp = first;
    while (temp)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << " NULL\n";
}

void Linkedlist::create()
{
    Node *last;
    vector<int> arr = {1,2,3,4,5,6,7};
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
    cout << "Linkedlist before sort ::\n";
    display();
}

Node *Linkedlist::oddEvenList(Node *head)
{
    if(head == NULL) return NULL;
        if(head->next==NULL) return head;
        
        Node *even = head->next;
        Node *evenHead = head->next;
       
        Node *odd = head;
       
        while(even != NULL && even->next != NULL){
           odd->next = even->next;
           odd = odd->next;
           
           even->next = odd->next;
           even = even->next;
        }
       
        odd->next = evenHead;
        return head;
}

int main()
{
    Linkedlist obj;
    obj.create();
    obj.first = obj.oddEvenList(obj.first);
    cout << "\nAfter insertion sort :: \n";
    obj.display();
    return 0;
}