class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
     vector<int> v;
    bool dfs(int i,vector<int> adj[],int p)
    {
            v[i]=1;
            for(auto it:adj[i])
            {
                if(v[it]!=1)
                 {if(dfs(it,adj,i))
                 return true;}
                else if(it!=p||it==i)
                return true;
             }
            return false;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    for(int i=0;i<V;i++)
	    {
	        v.push_back(0);
	    }
	    for(int i=0;i<V;i++)
	    {if(v[i]!=1)
	    {if(dfs(i,adj,-1))
	     return true;}
	        
	    }
	    return false;
	}
};
