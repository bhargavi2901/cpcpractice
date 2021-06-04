void path(Node* root,vector<vector<int>> &v,vector<int> &v1)
 {
     if(!root)
     return;
     if(!root->left && !root->right)
     {
         v1.push_back(root->data);
         v.push_back(v1);
         v1.pop_back();
         return;
     }
     v1.push_back(root->data);
     path(root->left,v,v1);
     path(root->right,v,v1);
     v1.pop_back();
 }
vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<int> v1;
    vector<vector<int>> v;
    path(root,v,v1);
    return v;
}
