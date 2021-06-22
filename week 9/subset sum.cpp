class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        int dp[N+1][sum+1];
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<=N;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(j==0)
                {
                    dp[i][j]=1;
                }
                else if(i==0)
                dp[i][j]=0;
                else
                {
                    if(dp[i-1][j]==1)
                    dp[i][j]=1;
                    else
                    {
                        if(arr[i-1]>j)
                           dp[i][j]=dp[i-1][j];
                       else
                        dp[i][j]=dp[i-1][j-arr[i-1]];
                    }
                }
            }
        }
       /*for(int i=0;i<=N;i++)
        {
            for(int j=0;j<=sum;j++)
            cout<<dp[i][j];
            cout<<endl;
        }*/
        if(dp[N][sum]==1)
        return true;
        return false;
    }
};
