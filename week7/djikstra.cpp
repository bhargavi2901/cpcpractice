#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	int n,m;
	cin>>n;
	cin>>m;
	vector<pair<int,int>> adj[n];
	for(int i=0;i<m;i++)
	{
	    int a,b,w;
	    cin>>a>>b>>w;
	    adj[a].push_back({b,w});
	    adj[b].push_back({a,w});
	}
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	vector<int> dist(n,INT_MAX);
	pq.push({0,0});
	dist[0]=0;
	while(!pq.empty())
	{
	    int a=pq.top().first;
	    int b=pq.top().second;
	    pq.pop();
	    for(auto it:adj[a])
	    {
	        if(dist[it.first]>b+it.second){
	        dist[it.first]=b+it.second;
	        pq.push({it.first,dist[it.first]});}
	    }
	}
	for(auto it:dist)
	cout<<it<<" ";
	return 0;
}
