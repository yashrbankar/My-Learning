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
    
        Node* check=head,*even=NULL,*odd=NULL,*lasteven,*lastodd;
    
        if(!head ||!head->next)
        {
            return head;   
        }
        int data=head->data;
        while(check)
        {
            if(check->data%2==0)
            {
               if(even==NULL)
               {
                   even=check;
                   lasteven=check;
                  
                     head=head->next;   
                   
                   check->next=NULL;
                   check=head;   
               }
               else
               {
                   lasteven->next=check;
                   head=head->next;
                   lasteven=check;
                   check->next=NULL;
                   check=head;
               }
                
            }
            else
            {
               if(odd==NULL)
               {
                   odd=check;
                   lastodd=check;
                   head=head->next;
                   check->next=NULL;
                   check=head;   
               }
               else
               {
                   lastodd->next=check;
                   head=head->next;   
                   lastodd=check;
                   check->next=NULL;
                   check=head;
               }
            }
        }
        if(data%2!=0)
        {
            lastodd->next=even;
            head=odd;
        }
        else
        {
            lasteven->next=odd;
            head=even;
        }
        
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