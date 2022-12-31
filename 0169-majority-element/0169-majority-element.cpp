class Solution {
public:
    int majorityElement(vector<int>& nums) {
         
        int max;
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if (count == 0) {
                max = nums[i];
                count = 1;
                continue;
            }
            if (max != nums[i]) {
                count--;
            } else {
                count++;
            }
        }
        return max;
    }
    
};
        
    