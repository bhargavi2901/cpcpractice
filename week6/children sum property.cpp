int isSumProperty(Node *root)
{
 // Add your code here
 int ls,rs;
 if(!root)
 return 1;
 if(!root->left && !root->right)
 return 1;
 if(isSumProperty(root->left) && isSumProperty(root->right))
 {
     if(!root->left)
     ls=0;
     else 
     {
         ls=root->left->data;
     }
     if(!root->right)
     rs=0;
     else 
     rs=root->right->data;
     if(ls+rs!=root->data)
     return 0;
     return 1;
 }
 return 0;
}
