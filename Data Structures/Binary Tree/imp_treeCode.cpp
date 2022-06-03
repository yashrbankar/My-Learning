#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *lchild;
    Node *rchild;
    Node(int data)
    {
        this->data = data;
        lchild = rchild = NULL;
    }
};

class Tree
{
public:
    Node *root;
    bool isbalance=true; // by defulat is false
    Node *create(Node *root);
    int diameter(Node *);
    pair<int , int> diameter1(Node *);
    int height(Node *);
    void levelorder();
    bool balanced(Node*);

};

Node *Tree::create(Node *root)
{
    int data;
    cout << "\nenter the data ::";
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "\n enter the left of " << data;
    root->lchild = create(root->lchild);
    cout << "\n enter the right of " << data;
    root->rchild = create(root->rchild);
    return root;
}
/////////////////////////////////////
void Tree::levelorder()
{
    Node *temp;
    queue<Node *> q;
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
            cout << temp->data <<" ";
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
////////////////////////////////
int Tree::height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lheight = height(root->lchild);
    int rheight = height(root->rchild);
    int ans = max(lheight, rheight) + 1;
    if(abs(lheight-rheight)>1)
    {
        isbalance=false;
    }
    return ans;
}

///////////////////////////////////

int Tree::diameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = diameter(root->lchild);
    int right = diameter(root->rchild);
    int both = height(root->rchild) + height(root->rchild) + 1;
    int ans = max(left, max(right, both));
    return ans;
}
/////////////////////////////
pair<int,int> Tree::diameter1(Node* root)
{
    if (root == NULL)
    {
        pair<int, int>p=make_pair(0,0);
        return p;
    }

    pair<int , int> left = diameter1(root->lchild);
    pair<int , int> right = diameter1(root->rchild);
    int opt1=left.first;
    int opt2=right.first;
    int opt=left.second+right.second+1;

    pair<int, int> ans;
    ans.first=max(opt1,max(opt2,opt));
    ans.second=max(left.second,right.second)+1;
    return ans;
}

/////////////

bool Tree::balanced(Node* root)
{
    height(root);
    return isbalance;
}


int main()
{
    Tree obj;
    obj.root = obj.create(obj.root);
    cout<<"result :: "<<obj.balanced(obj.root);
    return 0;
}