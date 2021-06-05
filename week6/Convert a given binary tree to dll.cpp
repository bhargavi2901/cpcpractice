 Node *prev=NULL;Node *head=NULL;Node *temp=NULL;
    Node * bToDLL(Node *root)
    {
        // your code here
        if(!root)
        return NULL;
        bToDLL(root->left);
        if(head==NULL)
        head=root;
        temp=root;
        temp->left=prev;
        if(prev){
        prev->right=temp;}
        prev=temp;
        bToDLL(root->right);
        return head;
    }
