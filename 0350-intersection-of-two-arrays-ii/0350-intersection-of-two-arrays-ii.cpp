class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> m;
        for (auto n: nums1) {
            m[n]++;
        }
        vector<int> result;
        for (auto n:nums2){
            if (m.find(n) != m.end() && m[n]>0 ){
                result.push_back(n);
                m[n]--;
            }                    
        }
        return result;
    }
};
        
    