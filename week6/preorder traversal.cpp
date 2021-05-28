vector <int> preorder(Node* root)
{
  // Your code here
  if(!root)
  return {};
  vector<int> v;
  stack<Node*> s;
  s.push(root);
  while(!s.empty())
  {
      Node *curr=s.top();
      v.push_back(curr->data);
      s.pop();
      if(curr->right)
      s.push(curr->right);
      if(curr->left)
      s.push(curr->left);
  }
  return v;
}
