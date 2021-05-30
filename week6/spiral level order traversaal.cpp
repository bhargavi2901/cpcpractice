vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> v;
    if(!root)
    return {};
    stack<Node*> s1,s2;
    s2.push(root);
    while(!s1.empty()||!s2.empty())
    {
        while(!s1.empty())
        {
        Node *temp=s1.top();
        v.push_back(temp->data);
        s1.pop();
           if(temp->left)
           s2.push(temp->left);
           if(temp->right)
           s2.push(temp->right);
        }
        while(!s2.empty())
        {
            Node *temp=s2.top();
        v.push_back(temp->data);
        s2.pop();
           if(temp->right)
           s1.push(temp->right);
           if(temp->left)
           s1.push(temp->left); 
        }
    }
    return v;
}
