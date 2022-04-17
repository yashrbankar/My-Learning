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
    Node *oddEvenList(Node * ,int);
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
    vector<int> arr = {1,2,3,4,5};
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

Node *Linkedlist::oddEvenList(Node *head ,int k)
{
    Node* temp=head, *ptr1,*ptr2 , *p1,*p2;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
         int k1=k, k2,a,b;
        k2=count-k+1;
        
        temp=head;
        count=1;
        while(temp)
        {
            if(k1==count)
            {
                ptr1=temp;
            }
            if(k2==count)
            {
                ptr2=temp;
            }
            count++;
            temp=temp->next;
        }
        b=ptr1->data;
        a=ptr2->data;
        
        ptr1->data=a;
        ptr2->data=b;
        return head;
}

int main()
{
    Linkedlist obj;
    obj.create();
    obj.first = obj.oddEvenList(obj.first ,2);
    cout << "\n----------------------\n";
    obj.display();
    return 0;
}