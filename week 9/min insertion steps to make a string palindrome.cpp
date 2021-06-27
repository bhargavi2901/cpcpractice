 int minInsertions(string s) {
        int dp[s.length()][s.length()];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<s.length();i++){
            for(int j=i;j>=0;j--){
                if(i==j)
                    dp[i][j]=1;
                else{
                if(s[i]==s[j])
                    dp[i][j]=dp[i-1][j+1]+2;
                else
                    dp[i][j]=max(dp[i][j+1],dp[i-1][j]);
            }
        }}
        return s.length()-dp[s.length()-1][0];
    }
