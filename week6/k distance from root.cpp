vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
   int l=0;
        if(!root)
            return {};
        queue<Node*> q;
        q.push(root);
        vector<int> v;
        int flag=0;
        while(!q.empty())
        {
            int m=q.size();
            while(m)
            {
            Node* temp=q.front();
            q.pop();
                if(l==k)
                {
                    flag=1;
                    v.push_back(temp->data);
                }
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                m--;
        }l=l+1;
            if(flag==1)
                break;
        }
        return v;
        
}
