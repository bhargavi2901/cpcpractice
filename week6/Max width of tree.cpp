int getMaxWidth(Node* root)
    {
        
       // Your code here
       if(!root)
       return 0;
       queue<Node*> q;
       q.push(root);
       int m,max=INT_MIN;
       while(1)
       {
           m=q.size();
           if(!m)
           return max;
           if(m>max)
           max=m;
           while(m)
           {Node *temp=q.front();
               if(temp->left)
               q.push(temp->left);
               if(temp->right)
               q.push(temp->right);
               q.pop();
               m--;
           }
       }

    }
