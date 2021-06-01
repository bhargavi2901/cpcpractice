void doubletree(Node* root)
{
    if(!root)
    return;
    doubletree(root->left);
    doubletree(root->right);
    Node *temp=root->left;
    root->left=newnode(root->data);
    root->left->left=temp;
}
