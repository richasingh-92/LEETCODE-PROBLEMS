class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int arraysum=0;
        for(int i=0;i<nums.size();i++)
        {
            arraysum=arraysum+nums[i];
        }
        int n=nums.size();
        int expectedsum=(n*(n+1))/2;
        
        int reqno=expectedsum - arraysum;
        
        return reqno;
        
    
        
    }
};