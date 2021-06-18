class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
    vector<int> vis,vis1;
    stack<int> s;
    void dfs1(vector<int> adj1[],int i)
    {
         vis1[i]=1;
        for(auto it:adj1[i])
        {
            if(vis1[it]==0)
            dfs1(adj1,it);
        }
    }
    void dfs(vector<int> adj[],int i)
    {
        vis[i]=1;
        for(auto it:adj[i])
        {
            if(vis[it]==0)
            dfs(adj,it);
        }
        s.push(i);
    }
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        for(int i=0;i<V;i++)
        vis.push_back(0);
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0)
            dfs(adj,i);
        }
        for(int i=0;i<V;i++)
        vis1.push_back(0);
        vector<int> adj1[V];
        for(int i=0;i<V;i++)
        {
            for(auto it:adj[i])
            {
                adj1[it].push_back(i);
            }
        }
        int sum=0;
        while(!s.empty())
        {
            int t=s.top();
            s.pop();
            if(vis1[t]==0)
            {
                dfs1(adj1,t);
                 sum++;
            }
        }
        return sum;
    }
};
