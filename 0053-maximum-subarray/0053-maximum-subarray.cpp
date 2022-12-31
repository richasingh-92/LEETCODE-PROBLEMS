class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         
       int n=nums.size();
        int ans=nums[0],i,j,sum=0;
        for(i=0;i<n;i++){
            sum+=nums[i];
            ans=max(sum,ans);
            sum=max(sum,0);
        }
        return ans;
    
        
    
        
    }
};