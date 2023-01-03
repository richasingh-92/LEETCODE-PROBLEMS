class Solution {
    public boolean isPowerOfThree(int n) {
        while(n>=3)
        {
            if(n%3 !=0)
                return false;
            //remainder must be =0 else go on decresing the number 
            n=n/3;
        }
        return n==1;
        
        
    }
}