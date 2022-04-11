#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *createNode(int d)
{
    Node *temp = new Node;
    temp->data = d;
    temp->next = NULL;
    return temp;
}

///////

int Index(int key)
{
    return key % 10;
}

void insert(int val, vector<Node *> &H)
{
    Node *pos = NULL,*last;
    int index = Index(val);
    pos = H[index];
    int tval = val,x;
    if (!H[index])
    {
        H[index] = createNode(val);
    }
    else
    {
        while (pos)
        {
            if(pos->data>tval)
            {
                x=pos->data;
                pos->data=tval;
                tval=x;
                last=pos;
                pos=pos->next;
            }
            else
            {
                last=pos;
                pos=pos->next;
            }
        }

    last->next=createNode(tval);
    }
}

int main()
{
    vector<Node *> H;
    for (int i = 0; i < 10; i++)
    {
        H.push_back(NULL);
    }
    insert(55, H);
    insert(15, H);
    insert(75, H);
    insert(25, H);
    insert(23,H);
    insert(21,H);
    cout<<"yash";
}
