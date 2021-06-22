long long int count( int S[], int m, int n )
    {
       
        //code here.
        long long dp[m+1][n+1];
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(j==0)
                dp[i][j]=1;
                else if(i==0)
                dp[i][j]=0;
                else
                {
                    if(S[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                    else
                    {
                        dp[i][j]=dp[i-1][j]+dp[i][j-S[i-1]];
                    }
                }
            }
        }
        
        return dp[m][n];
    }
