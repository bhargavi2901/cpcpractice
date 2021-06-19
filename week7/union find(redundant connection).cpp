class Solution {
public:
    int parent[1001];
  void fun(int n)
  {
      for(int i=0;i<n;i++)
          parent[i]=-1;
  }
    int find(int i)
    {
        if(parent[i]==-1)
            return i;
        return find(parent[i]);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        fun(edges.size());
        for(auto it:edges)
        {
            int a=find(it[0]);
            int b=find(it[1]);
            if(a!=b)
            parent[b]=a;
            else
                return {it[0],it[1]};
        }
        return {};
    }
};
