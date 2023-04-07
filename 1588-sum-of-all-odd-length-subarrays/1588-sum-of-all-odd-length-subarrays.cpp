class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        
        // traverse the array
        for(int i = 0; i < n; i++)
        {
           sum = sum + (((n-i) * (i+1)+1)/2) * arr[i]; //O(n)
        }
        return sum;
    }
};