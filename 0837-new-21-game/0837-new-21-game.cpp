class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if(k>n)
            return 0;
        if(k==0 || k+maxPts <= n)
            return 1;
        int i,j,l,steps = k+maxPts;

        vector<double> dp(n+1, 0);
        double ans=0, cum=1;
        
        dp[0] = 1;
        for(j=1;j<=n;j++) {
            dp[j] = cum/maxPts;
            if(j<k)
                cum += dp[j];
            if(j-maxPts >= 0)
                cum -= dp[j-maxPts];
        }
        for(i=k;i<=n;i++)
            ans += dp[i];
        return ans;
    }
};