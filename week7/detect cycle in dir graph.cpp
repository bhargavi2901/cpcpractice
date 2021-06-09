class Solution
{
    public:
	//Function to detect cycle in a directed graph
vector<int> v;
	bool dfs(int i,vector<int> adj[])
	{
	    v[i]=1;
	    for(auto it:adj[i])
	    {
	        if(v[it]==0)
              {if(dfs(it,adj))
              return true;}
              else if(v[it]==1)
              return true;
	    }
	    v[i]=2;
	    return false;
	}
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	// code here
	   	for(int i=0;i<V;i++)
	   	v.push_back(0);
	   	for(int i=0;i<V;i++)
	   	{
	   	    if(v[i]==0)
	   	    {
	   	   if(dfs(i,adj))
	   	   return true;
	   	}
	}
	    return false;
	}
};
