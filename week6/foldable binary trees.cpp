void mirror(Node *root)
{
    if(!root)
    return;
    mirror(root->left);
    mirror(root->right);
    Node *temp=root->left;
    root->left=root->right;
    root->right=temp;
}
bool ifsame(Node* root,Node* root1)
{
   if(!root && !root1)
   return true;
   if(root && root1 && (ifsame(root->left,root1->left) &&(ifsame(root->right,root1->right))))
     return true;
     return false;
}
bool IsFoldable(Node* root)
{
    // Your code goes here
    if(!root)
    return true;
    mirror(root->left);
    return ifsame(root->left,root->right);
}
