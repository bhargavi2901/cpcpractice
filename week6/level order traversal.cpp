 vector<int> levelOrder(Node* node)
    {
      //Your code here
      queue<Node*> q;
      vector<int> v;
      if(!node)
      return {};
      q.push(node);
      while(!q.empty())
      {
          Node *temp=q.front();
          if(temp->left)
          q.push(temp->left);
          if(temp->right)
          q.push(temp->right);
          v.push_back(temp->data);
          q.pop();
      }
      return v;
    }
