bool isCompleteBT(Node* root){
        //code here
        if(!root)
        return true;
        queue<Node*> q;
        q.push(root);
        int flag=0;
        while(!q.empty())
        {
            Node *temp=q.front();
            q.pop();
            if(flag==2 && temp->left)
            {
                return false;
            }
            else if(temp->left)
            {
                q.push(temp->left);
            }
            else
              flag=1;
              if(flag==2 && temp->right)
              {
                  return false;
              }
            if(flag!=1 && temp->right)
            q.push(temp->right);
            else if(flag==1 && temp->right)
            {
                return false;
            }
            else if(flag!=1 && !temp->right)
            flag=2;
        }
        return true;
    }
