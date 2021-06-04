void printNearNodes(Node *root, int low, int high,vector<int> &v)
{
  // your code goes here 
  if(!root)
  return;
  if(root->data>high)
   printNearNodes(root->left,low,high,v);
 else if(root->data>=low && root->data<=high)
  {
      printNearNodes(root->left,low,high,v);
      v.push_back(root->data);
      printNearNodes(root->right,low,high,v);
  }
  if(root->data<low)
return   printNearNodes(root->right,low,high,v);

}
vector<int> printNearNodes(Node *root, int low, int high)
{
    vector<int> v;
    printNearNodes(root,low,high,v);
    return v;
}
