#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	int n,e;
	cin>>n;
	cin>>e;
	vector<int> adj[n];
	for(int i=0;i<e;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    adj[a].push_back(b);
	}
	vector<int> deg(n,0);
	for(int i=0;i<n;i++)
	{
	    for(auto it:adj[i])
	    deg[it]++;
	}
	stack<int> s;
	int sum=0;
	for(int i=0;i<n;i++)
	{
	    if(deg[i]==0)
	    s.push(i);
	}
	vector<int> v(n,0);
	vector<pair<int,int>> ans;
    while(!s.empty())
    {
        int t=s.top();
        s.pop();
        for(int i=0;i<n;i++)
        {
          if(i!=t && find(adj[t].begin(),adj[t].end(),i)==adj[t].end() && v[i]!=1)
          ans.push_back({t,i});
            else if(--deg[i]==0)
            s.push(i);}
            v[t]=1;
    }
    for(auto it:ans)
    cout<<it.first<<it.second<<" ";
	return 0;
}
