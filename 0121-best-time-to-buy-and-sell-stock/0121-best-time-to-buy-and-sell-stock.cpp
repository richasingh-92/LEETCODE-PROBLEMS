class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int n=prices.size();
        int maxright=prices[n-1];
       for(int i=n-2;i>=0;i--)
        {
         maxright=max(maxright,prices[i]);
         maxprofit=max(maxprofit,maxright-prices[i]);
        }
        
        return maxprofit;
    }
};
       