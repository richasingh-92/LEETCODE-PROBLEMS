class Solution {
    public int removeDuplicates(int[] nums) {
        int Count = 1;
        
        for (int i = 1; i < nums.length; i++){
            
            if(nums[i] != nums[i-1]){
                nums[Count] = nums[i];
                Count += 1;
            }
        }
        
        return Count;
    }
}
        
    
