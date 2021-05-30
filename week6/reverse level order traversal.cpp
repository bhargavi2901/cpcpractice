vector<int> reverseLevelOrder(Node *root)
{
    // code here
    if(!root)
    return {};
    vector<int> v;
    queue<Node*> q;
    stack<int> s;
    q.push(root);
    while(!q.empty())
    {
        Node* temp=q.front();
         s.push(temp->data);
         q.pop();
        if(temp->right)
        q.push(temp->right);
        if(temp->left)
        q.push(temp->left);
        
    }
    while(!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }
    return v;
}
