void inorder(Node *root,vector<int> &v)
    {
        if(!root)
        return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
    if(!root)
    return 0;
    vector<int> v;
    inorder(root,v);
    int l=0,r=v.size()-1;
    while(l<r)
    {
        if(v[l]+v[r]==target)
        return 1;
        if(v[l]+v[r]<target)
        l++;
        else
        r--;
    }
    return 0;
    }
