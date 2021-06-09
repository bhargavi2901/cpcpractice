class Solution {
public:
   vector<int> v;
    vector<int> v1;
    bool dfs(vector<vector<int>> &graph,int i)
    {
        v[i]=1;
        for(auto it:graph[i])
        {
            if(v[it]==0)
            {
            if(dfs(graph,it))
                return true;
            }
            else if(v[it]==1)
                return true;
        }
        v[i]=2;
        v1.push_back(i);
        return false; 
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        for(int i=0;i<graph.size();i++)
            v.push_back(0);
        for(int i=0;i<graph.size();i++)
        {
            if(v[i]==0)
            {
                dfs(graph,i);
            }
        }
        sort(v1.begin(),v1.end());
        return v1;
    }
};
