#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

class Linkedlist
{

    public:
    Node* first;
    Node* second;
    Node* third;
    Node* last;
    int arr[5]={1,2,3,4,5};
    int arr1[3]={8,9,6};
    void create(Node*& , int* , int);
    void Display(Node*);
    void intersection();
    Linkedlist()
    {
        create(first, arr,5);
        Display(first);
        create(second, arr1,3);
        Display(second);
        second->next->next=first->next->next->next;
        Display(second);
        intersection();  
    }


};



void Linkedlist::create(Node*&head , int arr[] , int n )
{
    head=new Node;
    head->data=arr[0];
    head->next=NULL;
    last=head;
    Node*temp;
    for (int i = 1; i < n; i++)
    {
        temp=new Node;
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void Linkedlist::Display(Node*temp)
{
    while (temp)
    {
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

void Linkedlist::intersection()
{
    Node*temp=first;
    Node*temp1=second;
     unordered_set<Node*>pt;
    while (temp)
    {
        pt.insert(temp);
        temp=temp->next;
    }
    while (temp1)
    {
        auto t=pt.insert(temp1);
        if(!t.second)
        {
            cout<<"intersection point : "<<temp1->data;
           break;
        }
        temp1=temp1->next;
    }
    
    
}

int main()
{
    Linkedlist obj;

    
   return 0;
}