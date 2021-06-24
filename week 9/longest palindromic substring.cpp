 int dp[S.length()+1][S.length()+1];
        memset(dp,0,sizeof(dp));
        int max=1,a=0;
        for(int i=0;i<S.length();i++)
        {
            for(int j=i;j>=0;j--)
            {
                if(i==j)
                dp[j][i]=1;
                else
                {
                    if(S[i]==S[j] &&dp[j+1][i-1]!=-1)
                    {dp[j][i]=dp[j+1][i-1]+2;
                    if(dp[j][i]>max)
                    {
                        max=dp[j][i];
                         a=j;
                    }
                    }
                    else
                    dp[j][i]=-1;
                }
            }
        }
        return S.substr(a,max);
