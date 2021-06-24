int longestPalindromeSubseq(string S) {
         int dp[S.length()+1][S.length()+1];
        memset(dp,0,sizeof(dp));
    for(int i=0;i<S.length();i++)
    {
        for(int j=i;j>=0;j--)
        {
            if(i==j)
            dp[j][i]=1;
            else
            {
                if(S[j]==S[i])
                dp[j][i]=dp[j+1][i-1]+2;
                else
                dp[j][i]=max(dp[j+1][i],dp[j][i-1]);
            }
        }
    }
    return dp[0][S.length()-1];
    }
