class Solution {
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
int n = piles.size();
        vector<vector<int>> dp(n, vector<int>(k + 1, -1));
                function<int(int,int)> dfs = [&](int i, int k) {
                            // reach the end - return 0
                                        if (i == n || k == 0) return 0;
                                                    // calculated previously - return immediately
                                                                if (dp[i][k] != -1) return dp[i][k];
                                                                            // do not take 
                                                                                        int res = dfs(i + 1, k), val = 0;
                                                                                                    // try to take it one by one 
                                                                                                                // calculate the value we could have
                                                                                                                            for (int j = 0; j < min((int) piles[i].size(), k); j++) {
                                                                                                                                            // take this element
                                                                                                                                                            val += piles[i][j];
                                                                                                                                                                            res = max(res, dfs(i + 1, k - 1 - j) + val);
                                                                                                                                                                                        }
                                                                                                                                                                                                    return dp[i][k] = res;
                                                                                                                                                                                                            };
                                                                                                                                                                                                                    return dfs(0, k);
    }
};