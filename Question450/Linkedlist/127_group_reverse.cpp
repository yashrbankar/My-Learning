#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node* next;
    int data;
};

class Linkedlist
{
    public:
    Node* first;
    void create();
    void display();
    void grouping();
};

void Linkedlist::create()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
    Node* temp, *last;
    first=new Node;
    first->data=arr[0];
    first->next=NULL;
    last=first;

    for (int i = 1; i <12; i++)
    {
        temp=new Node;
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }   
    // display();
}

void Linkedlist::grouping()
{
    Node*q=NULL,*pt=first, *r=first->next;
    
    Node* link1=NULL;
    Node* link2=NULL;
    Node* link3=NULL;
    int flag=0, k, fcount=0 , count1=-1;
    cout<<"group of  ::  ";
    cin>>k;

    while (pt)
    {
        if(count1==-1)
        {
            link3=pt;
            count1++;
        }

        pt->next=q;
        q=pt;
        pt=r;
        r=r->next;
        flag++;
        if(flag+1==k)
        {
            flag=0;
            fcount++;
            if(fcount==1)
            {
               first=pt;
            }
            link2=pt;
            pt=pt->next;
            // link2->next=link1;
            link3->next=pt;
            link3=pt;            
            link1=link2;
            q=NULL;
            if(pt)
            {
                r=pt->next;
            }
            
            count1=-1;
        }
    }
    display();
}



void Linkedlist::display()
{
    cout<<"\n";
    Node* temp=first;
    while (temp)
    {
        cout<<" "<<temp->data;
        temp=temp->next;
    }
}


int main()
{
    Linkedlist obj;
    obj.create();
    obj.grouping();
   return 0;
}