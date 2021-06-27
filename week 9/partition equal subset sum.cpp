 bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto it:nums)
            sum=sum+it;
        int dp[nums.size()+1][(sum/2)+1];
        if(sum%2!=0)
            return false;
        for(int i=0;i<=nums.size();i++)
        {
            for(int j=0;j<=sum/2;j++)
            {
                if(j==0)
                    dp[i][j]=1;
                else if(i==0)
                    dp[i][j]=0;
                else
                {
                    if(nums[i-1]>j)
                        dp[i][j]=dp[i-1][j];
                    else
                    {
                        if(dp[i-1][j]==1)
                            dp[i][j]=1;
                        else
                            dp[i][j]=dp[i-1][j-nums[i-1]];
                    }
                }
            }
        }
         if(dp[nums.size()][sum/2]==1)
             return true;
        return false;
    }
