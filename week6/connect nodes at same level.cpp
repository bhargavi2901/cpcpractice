class Solution
{
    public:
    //Function to connect nodes at same level.
    Node* getnextright(Node *p)
    {
        Node *temp=p->nextRight;
        while(temp)
        {
            if(temp->left)
            return temp->left;
            if(temp->right)
            return temp->right;
            temp=temp->nextRight;
        }
        return NULL;
    }
    void connect(Node *p)
    {
       // Your Code Here
       if(!p)
       return;
       p->nextRight=NULL;
       while(p!=NULL)
       {
           Node *q=p;
           while(q!=NULL)
           {
           if(q->left)
           {
               if(q->right)
               {
                   q->left->nextRight=q->right;
               }
               else
               q->left->nextRight=getnextright(q);
           }
            if(q->right)
           {
               q->right->nextRight=getnextright(q);
           }
           q=q->nextRight;
       }
       if(p->left)
       p=p->left;
       else if(p->right)
       p=p->right;
       else
       p=p->nextRight;
       }
    }
      
};
