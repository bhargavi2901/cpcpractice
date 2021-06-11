class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> deg(V,0);
	    vector<int> ans;
	    int c=0;
	    for(int i=0;i<V;i++)
	    {
	        for(auto it:adj[i])
	        deg[it]++;
	    }
	    stack<int> s;
	    for(int i=0;i<V;i++)
	    {
	        if(deg[i]==0)
	        {
	            s.push(i);
	        }
	    }
	    while(!s.empty())
	    {
	        int t=s.top();
	        s.pop();
	        ans.push_back(t);
	        for(auto it:adj[t])
	        {
	            if(--deg[it]==0)
	            {
	                s.push(it);
	            }
	        }
	        c++;
	    }
	    if(c!=V)
	    return {};
	    return ans;
	}
};
