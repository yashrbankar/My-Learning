#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

class Linkedlist
{
public:
    Node *first, *last;
    void create();
    void func();
    void func2();
};
void Linkedlist::create()
{
    vector<int> vect{1, 2, 3, 5, 5, 6, 3, 8, 3};
    Node *temp;
    first = new Node;
    first->data = vect[0];
    last = first;

    for (int i = 1; i < vect.size(); i++)
    {
        temp = new Node;
        temp->data = vect[i];
        last->next = temp;
        temp->prev= last;
        last = temp;
    }
}
void Linkedlist::func()
{
    Node *f, *l;
    f = first;
    l = last;
    cout << "enter sum  ::";
    int key;
    cin >> key;
    while (f != l->next)
    {
        if (f->data + l->data < key)
        {
            f = f->next;
        }
        else if (f->data + l->data > key)
        {
            l = l->prev;
        }
        else
        {
            cout << f->data << " + " << l->data << " = " << key;
            l=l->prev;
            f=f->next;
            cout<<"\n";
        }
    }
}

void Linkedlist::func2()
{
    map<int, int> checker;
    Node* temp=first;
    while(temp)
    {
       auto it=checker.find(temp->data);
        if(it==checker.end())
        {
            checker[temp->data]=1;
        }
        else
        {
            it->second++;
        }
        temp=temp->next;
    }
    for(auto it=checker.begin();it!=checker.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    
}
int main()
{
    Linkedlist obj;
    obj.create();
    obj.func2();
    return 0;
}