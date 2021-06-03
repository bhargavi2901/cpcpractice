 void toSumTree(Node *root,int *t)
    {
        // Your code here
        int ls=0,rs=0;
        if(!root)
        {
         return;   
        }
        if(!root->left && !root->right)
        {
            *t=root->data;
            root->data=0;
            return;
        }
        toSumTree(root->left,&ls);
        toSumTree(root->right,&rs);
         *t=root->data+ls+rs;
        root->data=ls+rs;
    }
    void toSumTree(Node *node)
    {
        if(!node)
        return;
        int t=0;
        toSumTree(node,&t);
    }
