int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        int dp[W+1];
        memset(dp,0,sizeof(dp));
        dp[0]=0;
        for(int i=1;i<=W;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(wt[j]<=i)
                dp[i]=max(dp[i],dp[i-wt[j]]+val[j]);
            }
        }
        return dp[W];
    }
