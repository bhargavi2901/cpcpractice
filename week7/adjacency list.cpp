#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a[1000];
    memset(a,{},sizeof(a));
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        if(find(a[x].begin(),a[x].end(),y)!=a[x].end())
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
