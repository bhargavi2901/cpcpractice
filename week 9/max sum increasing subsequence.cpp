int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int dp[n];
	    dp[0]=arr[0];
	    int max1=arr[0];
	    for(int i=1;i<n;i++)
	    {dp[i]=arr[i];
	        for(int j=0;j<i;j++)
	        {
	            if(arr[j]<arr[i] && dp[j]+arr[i]>dp[i])
	            dp[i]=dp[j]+arr[i];
	        }
	        if(dp[i]>max1)
	        max1=dp[i];
	    }
	    return max1;
	}  
