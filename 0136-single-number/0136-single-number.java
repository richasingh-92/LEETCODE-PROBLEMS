class Solution {
   
    public int singleNumber(int[] nums) {

        int output = nums[0];
        for(int i=1;i<nums.length;i++){
            output^=nums[i];
        }
        return output;
    }
}
        