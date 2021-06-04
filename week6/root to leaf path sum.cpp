 bool hasPathSum(Node *root, int S) {
    // Your code here
    if(!root)
    return false;
    if(!root->left && !root->right)
    {
        if(S==root->data)
        return true;
    }
    if(hasPathSum(root->left,S-root->data) || hasPathSum(root->right,S-root->data))
    return true;
    return false;
}
