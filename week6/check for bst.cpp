 bool fun(Node *root,int* prev)
    {
        if(!root)
        return true;
        if(!fun(root->left,prev))
             return false;
        if(root->data<=*prev)
        return false;
        *prev=root->data;
        return fun(root->right,prev);
        
        
    }
    bool isBST(Node* root) 
    {
        // Your code here
        int prev=0;
        return fun(root,&prev);
    }
