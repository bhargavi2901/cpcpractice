class Solution{
  public:
    void fun(Node *root,int h,map<int,int> &m)
    {
        if(!root)
        return;
        m[h]+=root->data;
        fun(root->left,h-1,m);
        fun(root->right,h+1,m);
    }
    vector <int> verticalSum(Node *root) {
        // add code here.
      map<int,int> m;
      vector<int> v;
      fun(root,0,m);
      for(auto it:m)
      {
          v.push_back(it.second);
      }
      return v;
    }
};
