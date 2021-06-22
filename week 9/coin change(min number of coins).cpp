 int coinChange(vector<int>& coins, int amount) {
        int dp[coins.size()+1][amount+1];
        for(int i=0;i<=coins.size();i++)
        {
            for(int j=0;j<=amount;j++)
            {
                if(j==0)
                    dp[i][j]=0;
                else if(i==0)
                    dp[i][j]=-1;
                else
                {
                    if(coins[i-1]>j)
                        dp[i][j]=dp[i-1][j];
                    else if(dp[i-1][j]==-1)
                    {   if(dp[i][j-coins[i-1]]==-1)
                        dp[i][j]=-1;
                    else
                        dp[i][j]=dp[i][j-coins[i-1]]+1;
                    }
                    else if(dp[i][j-coins[i-1]]==-1)
                    {
                         if(dp[i-1][j]==-1)
                        dp[i][j]=-1;
                    else
                        dp[i][j]=dp[i-1][j];
                    }
                    else
                        dp[i][j]=min(dp[i-1][j],dp[i][j-coins[i-1]]+1);
                }
            }
        }
        return dp[coins.size()][amount];
    }
