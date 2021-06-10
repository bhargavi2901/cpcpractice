class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> v1,ans;
	void dfs(vector<int> adj[],int i)
	{
	    v1[i]=1;
	    for(auto it:adj[i])
	    {
	        if(v1[it]==0)
	        {
	            dfs(adj,it);
	        }
	        else if(v1[it]==1)
	        return ;
	    }
	    v1[i]=2;
	    ans.insert(ans.begin(),i);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    for(int i=0;i<V;i++)
	    v1.push_back(0);
	    for(int i=0;i<V;i++)
	    {
	        if(v1[i]==0)
	        {
	            dfs(adj,i);
	        }
	    }
	    return ans;
	}
};
