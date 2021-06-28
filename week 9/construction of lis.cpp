#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int dp[n];
  for(int i=0;i<n;i++)
  dp[i]=0;
    vector<int> v[100];
    dp[0]=a[0];
    v[0].push_back(a[0]);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i] && dp[i]<dp[j]+1)
            {
                dp[i]=dp[j]+1;
                v[i]=v[j];
            }
        }
        v[i].push_back(a[i]);
    }
    for(auto it:v[n-1])
    cout<<it;
}
