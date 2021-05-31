int max(int a,int b)
    {
        if(a>b)
        return a;
        else return b;
    }
    int dia(Node* root,int *height)
    {
        int lh=0,rh=0,ld=0,rd=0;
        if(!root)
        {
            *height=0;
            return 0;
        }
        ld=dia(root->left,&lh);
        rd=dia(root->right,&rh);
        *height=max(lh,rh)+1;
        return max(max(ld,rd),lh+rh+1);
    }
    int diameter(Node* root)
    {
    // Your code here
    int height=0;
    return dia(root,&height);
    }
