vector<int> leftView(Node *root)
{
   // Your code here
   if(!root)
   return {};
   vector<int> v;
   queue<Node*> q;
   q.push(root);
   while(!q.empty())
   {
       int m=q.size();
       v.push_back(q.front()->data);
       while(m)
       {
       Node *temp=q.front();
       q.pop();
       if(temp->left)
       q.push(temp->left);
       if(temp->right)
       q.push(temp->right);
       m--;
   }}
   return v;
}
