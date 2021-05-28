vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> v;
  stack<Node*> s,s1;
  s.push(root);
  while(!s.empty())
  {
     Node *curr=s.top();
     s.pop();
     s1.push(curr);
     if(curr->left)
     s.push(curr->left);
     if(curr->right)
     s.push(curr->right);
  }
  while(!s1.empty())
  {v.push_back((s1.top())->data);
      s1.pop();
  }
  return v;
}
