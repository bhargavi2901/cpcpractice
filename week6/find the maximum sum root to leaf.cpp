void pathsum(Node *root,int sum,int *max)
{
    if(!root)
    return;
    if(!root->left && !root->right)
    {
        if(sum+root->data>=*max)
        *max=sum+root->data;
        return;
    }
    sum=sum+root->data;
    pathsum(root->left,sum,max);
    pathsum(root->right,sum,max);
}
int maxPathSum(Node* root)
{
    //code here
    int max=0,sum=0;
    pathsum(root,sum,&max);
    return max;
}
