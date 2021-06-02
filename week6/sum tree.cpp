bool isSumTree(Node* root)
    {
         // Your code here
         int ls,rs;
         if(!root||(!root->left&&!root->right))
         return true;
         if(isSumTree(root->left)&&isSumTree(root->right))
         {
             if(root->left==NULL)
             ls=0;
             else if(!root->left->left && !root->left->right)
             ls=root->left->data;
             else
             ls=2*(root->left->data);
             if(root->right==NULL)
             rs=0;
             else if(!root->right->left && !root->right->right)
             rs=root->right->data;
             else
             rs=2*(root->right->data);
             if(ls+rs!=root->data)
             return false;
             else return true;
         }
        return false;
    }
