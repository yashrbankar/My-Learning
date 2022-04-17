#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *lchild;
    Node *rchild;
    Node(int d)
    {
        this->data = d;
        lchild = rchild = NULL;
    }
};

class Tree
{
public:
    Node *root;

    Node *create(Node *);
    void levelorder();
    void levelorder_reverse();
};
Node *Tree::create(Node *root)
{
    int data;
    cout << "enter the data ::";
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "enter the left of " << root->data << " :: \n ";
    root->lchild = create(root->lchild);
    cout << "enter the right of " << root->data << " ::\n";
    root->rchild = create(root->rchild);

    return root;
}

void Tree::levelorder()
{
    queue<Node *> q;
    Node *temp;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << "\n";
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << " " << temp->data;
            if (temp->lchild)
            {
                q.push(temp->lchild);
            }
            if (temp->rchild)
            {
                q.push(temp->rchild);
            }
        }
    }
}

void Tree::levelorder_reverse()
{
    Node *temp;
    queue<Node *> q;
    stack<Node *> s;
    q.push(root);
    s.push(root);
    q.push(NULL);
    s.push(NULL);

    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (!temp)
        {
            if (!q.empty()) //mistake scope
            {
                q.push(NULL);
                s.push(NULL);
            }
        }
        else
        {

            if (temp->lchild)
            {
                q.push(temp->lchild);
                s.push(temp->lchild);
            }
            if (temp->rchild)
            {
                q.push(temp->rchild);
                s.push(temp->rchild);
            }
        }
    }

    while (!s.empty())
    {
        temp = s.top();
        s.pop(); // mistake scope 
        if (!temp)
        {
            cout << "\n";
        }
        else
        {
            cout << " " << temp->data;
        }
    }
}
int main()
{
    Tree obj;
    obj.root = obj.create(obj.root);
    cout << "level order :: \n ";
    obj.levelorder_reverse();
    return 0;
}