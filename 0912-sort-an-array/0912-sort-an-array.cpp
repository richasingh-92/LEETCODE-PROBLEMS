class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        vector<int>ans;
        map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i: mp){
            int k=i.second;
            while(k>0){
                ans.push_back(i.first);
                k--;
            }
        }
        return ans;
    }
};
    