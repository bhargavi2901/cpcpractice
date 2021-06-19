
void dfs(vector<vector<int>>& graph,int p,int i,vector<int> &s,vector<int>& v)
{
    v[i]=1;
    for(auto it:graph[i])
    {
        if(v[it]==0)
        {
            s[it]=1;
            dfs(graph,i,it,s,v);
        }
    }
    s[i]=1;
}
vector<vector<int>> solve(vector<vector<int>>& graph) {
    vector<vector<int>> res(graph.size(),vector<int>(graph.size(),0));
    vector<int> v(graph.size(),0);
    vector<int> s(graph.size(),0);
    for(int i=0;i<graph.size();i++)
    {
        res[i][i]=1;
        if(v[i]==0)
       { dfs(graph,i,i,s,v);
        for(int k=0;k<graph.size();k++)
        {
            for(int j=0;j<graph.size();j++)
            {
                if(s[k]==1 && s[j]==1)
                res[k][j]=1;
            }
        }
        for(int i=0;i<graph.size();i++)
        s[i]=0; }
    }
    
    return res;

}
