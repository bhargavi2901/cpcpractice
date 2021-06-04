vector<int> v;
    int flag=0;
    vector<int> Ancestors(struct Node *root, int target)
    {
         // Code here
        if(!root)
            return v;
        if(root->data==target)
        {
            flag=1;
            return v;
        }
        v.insert(v.begin(),root->data);
        Ancestors(root->left,target);
        if(flag==1)
        return v;
        Ancestors(root->right,target);
        if(flag==1)
        return v;
        v.erase(v.begin());
        return v;
    }
