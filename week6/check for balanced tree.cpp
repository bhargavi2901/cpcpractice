int max(int a,int b)
{
    if(a>b)
    return a;
    return b;
}
bool isBalanced(Node *root,int *h)
{
    //  Your Code here
    int lh=0,rh=0;
    if(!root)
    {*h=0;
    return true;}
    if(!root->left && !root->right)
    {
        *h=1;
        return true;
    }
    if(isBalanced(root->left,&lh) && isBalanced(root->right,&rh))
    {*h=1+max(lh,rh);
        if(abs(lh-rh)<=1)
    return true;
    return false;}
}
bool isBalanced(Node *root)
{
    int height=0;
    return isBalanced(root,&height);
}
