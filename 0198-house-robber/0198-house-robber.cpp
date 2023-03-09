
        class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        return rec(nums.size()-1,nums,dp);
    }
    int rec(int level,vector<int>& nums,vector<int>&dp){
        if(level==0)return nums[level];
        if(level<0)return 0;
        if(dp[level]!=-1)return dp[level];
        int take = nums[level]+rec(level-2,nums,dp);
        int nottake = rec(level-1,nums,dp);
        return dp[level] = max(take,nottake);
    }
};
        
