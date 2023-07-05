class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int before = 0;
        int after = 0;
        int maxi = 0;
        bool flag = false;
        for(int i = 0; i < n; ++i){
            if(nums[i] == 1) flag?after++:before++;
            if(i > 0 && i < n && nums[i] == 0 && nums[i-1] == 1 && nums[i+1] == 1){
                if(flag){
                    before = after;
                    after = 0;
                }else{
                    flag = true;
                }
            }
            if(i > 0 && nums[i] == 0 && nums[i-1] == 0){
                flag = false;
                after = 0;
                before = 0;
            }
            maxi = max(maxi,before+after);
        }
        return maxi==n?--maxi:maxi;
    }
};