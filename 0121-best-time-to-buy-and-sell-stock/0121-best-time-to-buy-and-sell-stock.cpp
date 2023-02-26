/*class Solution {
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
*/
class Solution 
{
public:
    int maxProfit(vector<int>& p) 
    {
        int buy=p[0];
        int pro=0;
        for(int i=1;i<p.size();i++)
        {
            if(p[i]<buy)
            {
                buy=p[i];
            }
            int diff=p[i]-buy;
            pro=max(pro,diff);
        }
        return pro;
    }
};
       