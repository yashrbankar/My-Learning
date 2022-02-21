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
    void preorder();
    void preorder_i(Node *);
    void level();
    void inorder_i();
    void rever_level();
    int count_node(Node*);
    int height(Node*);
    int addition(Node*);
    int diameter(Node*);
};

void Tree::preorder()
{
    stack<Node *> s;
    Node *temp = root;
    while (temp || !s.empty())
    {
        if (temp)
        {
            cout << " " << temp->data;
            s.push(temp);
            temp = temp->lchild;
        }
        else
        {
            temp = s.top();
            s.pop();
            temp = temp->rchild;
        }
    }
}

void Tree::preorder_i(Node *root)
{
    if (root)
    {
        cout << " " << root->data;
        preorder_i(root->lchild);
        preorder_i(root->rchild);
    }
}

void Tree::inorder_i()
{
    stack<Node *> s;
    Node *temp = root;
    while (temp || !s.empty())
    {
        if (temp)
        {
            s.push(temp);
            temp = temp->lchild;
        }
        else
        {
            temp = s.top();
            s.pop();
            cout << " " << temp->data;
            temp = temp->rchild;
        }
    }
}

void Tree::rever_level()
{
    queue<Node *> q;
    stack<Node *> s;
    q.push(root);
    q.push(NULL);
    s.push(root);
    s.push(NULL);
    Node *temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (!temp)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
                s.push(NULL);
            }
        }
        else
        {
            cout << " " << temp->data;
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
        temp=s.top();
        s.pop();
        if(!temp)
        {
            cout<<"\n";
        }
        else
        cout<<" "<<temp->data;
    }
    cout<<"\n";
    
}

Node *Tree::create(Node *root)
{
    int data;
    cout << "enter the data :: ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new Node(data);
    cout << "enter the left child of " << data << " : ";
    root->lchild = create(root->lchild);
    cout << "enter the right child of " << data << " : ";
    root->rchild = create(root->rchild);
    return root;
}

void Tree::level()
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    Node *temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (!temp)
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

int Tree::count_node(Node*root)
{
    int x=0 , y=0;
    if(root)
    {
        x=count_node(root->lchild);
        y=count_node(root->rchild);
        return x+y+1;
    }
    return 0;

}
int Tree::addition(Node*root)
{
    int x=0 , y=0;
    if(root)
    {
        x=addition(root->lchild);
        y=addition(root->rchild);
        return x+y+root->data;
    }
    return 0;
}

int Tree::diameter(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int a=diameter(root->lchild);
    int b=diameter(root->rchild);
    int c= height(root->lchild)+height(root->rchild);
    int ans=max(a,max(b,c));
    return ans;
}
int Tree::height(Node*root)
{
    int x=0 , y=0;
    if(root)
    {
        x=height(root->lchild);
        y=height(root->rchild);
        if(x>=y)
        {
            return x+1;
        }
        else
        {
            return y+1;
        }

    }
    return 0;

}

int main()
{
    Tree obj;
    obj.root = obj.create(obj.root);
    cout << " \n preorder ::\n ";
    obj.preorder();
    cout << " \n preorder ::\n ";
    obj.preorder_i(obj.root);
    cout << " \n inorder_i ::\n ";
    obj.inorder_i();
    cout << " \n level order ::\n ";
    obj.rever_level();
    cout<<"\n count of node :: "<<obj.count_node(obj.root);
    cout<<"\n Addition  :: "<<obj.addition(obj.root);
    cout<<"\n height :: "<<obj.height(obj.root);
    cout<<"\n diameter :: "<<obj.diameter(obj.root);

    return 0;
}