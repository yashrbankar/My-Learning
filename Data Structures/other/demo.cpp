#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next = NULL;
};
class Linkedlist
{

    Node *tail = NULL;

public:
    Node *head = NULL;
    void create(int *, int);
    void reverse_list(Node *, int);
    void display();
    vector<vector<Node *>> &group(int, Node *);
};
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Linkedlist a;
    vector<vector<Node *>> b;
    a.create(arr, 10);
    // a.reverse_list(a.head, 1);
    a.group(4,a.head);
    // a.display();

    return 0;
}

void Linkedlist ::display()
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void Linkedlist ::create(int arr[], int n)
{
    if (!head)
    {
        head = new Node;
        cout << "Enter the data : ";
        head->data = arr[0];
        tail = head;
        cout << "\n";
    }
    int i = 1;
    while (i < n)
    {

        Node *temp = new Node;
        temp->data = arr[i];
        tail->next = temp;
        tail = temp;
        i++;
    }
}

vector<vector<Node *>> &Linkedlist ::group(int key, Node *head)
{
    // * 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12
    static vector<vector<Node *>> vec;
    vector<Node *> t;

    t.clear();
    int i = 1;
    Node *temp = head;
    static Node*tail_temp=NULL;
    t.push_back(temp);
    while (i != 4)
    {
        tail_temp=temp;
        temp = temp->next;
        i++;
        if (!temp)
        {
            temp=tail_temp;
            break;
        }
    }
    // head = head->next;
    t.push_back(temp);
    vec.push_back(t);
    if (temp)
    {
        group(4, temp->next);
    }
    return vec;
}

void Linkedlist ::reverse_list(Node *h, int key)
{
    vector<vector<Node*>> v=group(4,head);
    cout<<v[0][0];

}