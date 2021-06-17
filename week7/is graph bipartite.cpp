class Solution {
public:
    vector<int> v;
    bool dfs(vector<vector<int>> &graph,int i)
    {
        for(auto it:graph[i])
        {
            if(v[it]==0)
            {
                if(v[i]==1)
                {
                    v[it]=2;
                    if(!dfs(graph,it))
                        return false;
                }
                else if(v[i]==2)
                {
                    v[it]=1;
                    if(!dfs(graph,it))
                        return false;
                }
            }
            else if(v[it]==1 && v[i]==1)
                return false;
            else if(v[it]==2 && v[i]==2)
                return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
    for(int i=0;i<graph.size();i++)
    {
        v.push_back(0);
    }
        for(int i=0;i<graph.size();i++)
        {
            if(v[i]==0)
            {
                v[i]=1;
                if(!dfs(graph,i))
                    return false;
            }
        }
        return true;
    }
};
