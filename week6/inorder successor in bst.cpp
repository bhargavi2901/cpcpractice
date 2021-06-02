 Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        if(!root)
        return NULL;
       if(x->right!=NULL)
            {
                x=x->right;
                while(x->left!=NULL)
                x=x->left;
                return x;
            }
            Node *succ=NULL;
            while(root)
            {
                if(root->data<x->data)
                {
                    root=root->right;
                }
                else if(root->data>x->data)
                {
                    succ=root;
                    root=root->left;
                }
                else
                     break;
                
            }
                return succ;
    }
