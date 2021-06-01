void fun(Node *root,int *sum)
{
    if(!root)
    return;
    fun(root->right,sum);
    root->data=root->data+*sum;
    *sum=root->data;
    fun(root->left,sum);
}
Node* modify(Node *root)
{
    // Your code here
    int sum=0;
    fun(root,&sum);
    return root;
}
