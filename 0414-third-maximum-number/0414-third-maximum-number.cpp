class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        // first sort the array in increasing order 
        sort(nums.begin(),nums.end());
        // Now we have remove the duplicate elements from the vector 
        // by using STL
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        // reverse the array
        reverse(nums.begin(),nums.end());
        //  if size of the array <3 then we can return the maximum element in an array
        if(nums.size()<3)return nums[0];
        // otherwise we can  return the  num[3-1];
        return nums[2];
    }
    };