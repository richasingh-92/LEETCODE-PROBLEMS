class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxi=0;
        for(int i=0;i<strs.size();i++)
        {
            if(all_of(strs[i].begin(),strs[i].end(), ::isdigit))
                //inbuilt function directly use it check the no is digits or not
            {
                maxi=max(maxi,stoi(strs[i]));
            }
            else
            {
                int m=strs[i].length();
                maxi=max(maxi,m);
            }
        
        }
        return maxi;
    }
};