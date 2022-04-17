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
    vector<int> arr = {1 ,3 ,5 ,7};
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
    cout << "-----------------------::\n";
    display();
}

Node *Linkedlist::oddEvenList(Node *head)
{
    if(head == NULL) return NULL;
        if(head->next==NULL) return head;
        
        Node *even = head->next;
        Node *evenHead = head->next;
       
        Node *odd = head;
       // ! in this code 1 3 5 7 that is odd nodes & then even nodes
       //* are segretted 
       //! Data is Not compared
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
    cout << "\n----------------------\n";
    obj.display();
    return 0;
}