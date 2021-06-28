int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        if(x<=n) dp[x]=1;
        if(y<=n) dp[y]=1;
        if(z<=n) dp[z]=1;
        for(int i=1;i<=n;i++)
        {
        if(x<=i && dp[i-x]!=-1)
        dp[i]=max(dp[i],dp[i-x]+1);
        if(y<=i && dp[i-y]!=-1)
        dp[i]=max(dp[i],dp[i-y]+1);
        if(z<=i && dp[i-z]!=-1)
        dp[i]=max(dp[i],dp[i-z]+1);
        }
        if(dp[n]==-1)
        return 0;
        return dp[n];
    }
