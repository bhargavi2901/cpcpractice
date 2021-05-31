class Solution{
  public:
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        //Your code here
        if(!root)
        return true;
        queue<Node*> q;
        q.push(root);
        int prev=0,level=0;
        while(!q.empty())
        {
            int m=q.size();
            while(m)
            {
            Node *temp=q.front();
            q.pop();
            if(!temp->left&&!temp->right)
            {
               if(prev==0)
               prev=level;
               else if(prev!=level)
               return false;
            }
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);m--;}
            level=level+1;
        }
        return true;
    }
};
