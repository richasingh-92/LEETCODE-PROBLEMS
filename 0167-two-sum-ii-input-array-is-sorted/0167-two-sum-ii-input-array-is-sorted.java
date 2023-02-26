/*class Solution {
    public int[] twoSum(int[] numbers, int target) {
        
        //Take two pointers
        int first = 0;
        int last = numbers.length -1;

        int ans[] = new int[2];// array to store the index of the two elements

        //Given Array is always sorted

        for(int i = 0; i < numbers.length-1; i++){

            if(numbers[first] + numbers[last] == target){

                // we are adding one because we have to return in 1 based indexing 
                ans[0] = first +1 ;
                ans[1] = last +1 ;
            }
            // if sum is less than target move the first forward
            else if(numbers[first] + numbers[last] < target){
                first++;
            }
            //if the sum is greater than decrease the last
            else{
                last--;
            }
        }
        return ans; 
    }
}
*/
class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int start = 0;
        int end = numbers.length-1;
        int sum = 0;
        while(start < end){
            sum = numbers[start] + numbers[end];
            if(sum == target) return new int[] {start + 1, end + 1};
            if(sum < target) start++;
            else end--;
        }
        return new int[] {0, 0};
    }
}
        
    