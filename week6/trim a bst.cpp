    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(!root)
            return NULL;
        if(root && root->val>high)
        {
            root=root->left;
            root=trimBST(root,low,high);
        }
        if(root && root->val>=low && root->val<=high)
        {
           if(root->left)
            root->left=trimBST(root->left,low,high);
            if(root->right)
            root->right=trimBST(root->right,low,high);
        }
        if(root && root->val<low)
        {
            root=root->right;
           root=trimBST(root,low,high);
        }
        return root;
    }
};
