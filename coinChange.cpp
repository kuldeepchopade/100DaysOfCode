long long int count(int c[], int n, int sum) {

        vector<long long int>dp(sum+1,0);
        dp[0]=1;
        for(int j=0;j<n;j++)
        {
            for(int i=1;i<=sum;i++)
            {
                if(i-c[j]>=0)
                dp[i]=dp[i]+dp[i-c[j]];
            }
        }
        return dp[sum];
        
    }
