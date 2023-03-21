class Solution {
    public long zeroFilledSubarray(int[] nums) {
        
        boolean flag = false;
        for(int i:nums)
            if(i==0) flag=true;
        
        if(!flag) return 0; //if there are no zeroes in nums
        long incr=1, len=0;
        for(int i : nums){
            if(i != 0) incr=1; //Set incr to 1 again
            else { //For continuous Zeroes
                len += incr; //Adding incr to our answer
                incr++; //Increasing the current amount of zeroes filled subarrays, i.e. 1+2+3+4+....
            }
        }
        return len;
    }
        
    }