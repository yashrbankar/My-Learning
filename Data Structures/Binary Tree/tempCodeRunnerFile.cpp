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