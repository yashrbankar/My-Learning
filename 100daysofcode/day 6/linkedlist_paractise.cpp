#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

class linkedlist
{
    public:
    Node* root;
    void create();
    void display(Node *);

};

void linkedlist::create()
{
    int arr[5]={1,2,3,4,5};
    Node *temp , *last ;
    root=new Node;
    cout<<"enter the root value :: ";
    cin>>root->data;
    arr[0]=root->data;
    root->next=NULL;
    last=root;
    for (int i = 1; i < 5; i++)
    {
        temp=new Node;
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    display(root);
}

void linkedlist::display(Node * temp)
{
    while (temp)
    {
        cout<<" "<<temp->data;
        temp=temp->next;
    }
    
}

int main()
{
    linkedlist obj;
    obj.create();
   return 0;
}