#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

class Tree
{
public:
    Node *root;
    void create();
    void inOrder(Node*);
    int height(Node*);
    int count(Node*);
    void levelOrder();
    int diameter(Node*);
    void preOrderI();
    void inOrderI();
};

void Tree::create()
{
    cout << "enter the root node : ";
    int x;
    cin >> x;
    if(x==-1)
    {
       root=NULL;
       return;
    }
    root->data = x;
    root->left = root->right = NULL;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        cout << "enter the element left of the " << p->data << " ::";
        cin >> x;
        if (x != -1)
        {
            Node *temp = new Node;
            temp->data = x;
            temp->left = temp->right = NULL;
            p->left = temp;
            q.push(temp);
        }

        cout << "enter the element right of the" << p->data << " ::";
        cin >> x;
        if (x != -1)
        {
            Node *temp = new Node;
            temp->data = x;
            temp->left = temp->right = NULL;
            p->right = temp;
            q.push(temp);
        }
    }
}
int Tree::height(Node *root)
{
    if (root)
    {
        int a = height(root->left);
        int b = height(root->right);
        return max(a, b) + 1;
    }
    return -1;
}

int Tree::diameter(Node* root)
{
    if(!root)
    {
       return 0;
    }
    int a=diameter(root->left);
    int b=diameter(root->right);
    int c=height(root->left)+height(root->right);
    int ans=max(a,max(b,c));
    return ans;

}
void Tree::inOrder(Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << " " << root->data;
        inOrder(root->right);
    }
}

void Tree::levelOrder()
{
    if(!root)
    {
       return;
    }
    queue<Node *> q;
    Node *temp = root;
    q.push(temp);
    q.push(NULL);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        if (!p)
        {
            cout<<"\n";
            if(!q.empty())
            {
               q.push(NULL);
            }
        }
        else
        {
            cout << " " << p->data << " ";
            if (p->left)
            {
                q.push(p->left);
            }
            if (p->right)
            {
                q.push(p->right);
            }
        }
    }
}


int Tree::count(Node *root)
{
    if (root)
    {
        int a = count(root->left);
        int b = count(root->right);
        return a + b + 1;
    }
    return 0;
}

void Tree::preOrderI()
{
    stack<Node*>s;
    Node* temp=root;
    while (!s.empty()|| temp)
    {
        if(temp)
        {
            cout<<" "<<temp->data;
            s.push(temp);
            temp=temp->left;
        }
        else
        {
            temp=s.top();
            s.pop();
            temp=temp->right;
        }
        
    }
    
}

void Tree::inOrderI()
{
    Node* temp=root;
    stack<Node*>s;
    while (!s.empty()||temp)
    {
        if(temp)
        {
           s.push(temp);
           temp=temp->left;
        }
        else
        {
            temp=s.top();
            s.pop();
            cout<<" "<<temp->data;
            temp=temp->right;
        }
    }
    
}
int main()
{
    Tree obj;
    obj.create();
    obj.inOrder(obj.root);
    cout<<"IIIII"<<endl;
    obj.inOrderI();
    obj.levelOrder();
    obj.preOrderI();
    cout << "\n diamenter : " << obj.diameter(obj.root);
    cout << "\n count : " << obj.count(obj.root);
    return 0;
}