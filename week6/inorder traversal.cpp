vector<int> v;
    vector<int> inOrder(Node* root)
    {
      // Your code here
      if(!root)
      return {};
      inOrder(root->left);
      v.push_back(root->data);
      inOrder(root->right);
      return v;
    }
