int minValue(Node* root)
{
    // Code here
    if(!root)
    return -1;
    while(root->left)
    root=root->left;
    return root->data;
}
