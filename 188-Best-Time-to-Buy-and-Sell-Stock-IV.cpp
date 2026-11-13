class Solution {
public:
    int fun(vector<int>& a, int n, int i, int k, vector<vector<int>>& dp) {
        if (i == n || k == 0)
            return 0;

        // 1. Check if already computed
        if (dp[i][k] != -1)
            return dp[i][k];

        if (k % 2 == 0) { // buy (k = 4, 2)
            int c1 = fun(a, n, i + 1, k - 1, dp) - a[i];
            int c2 = fun(a, n, i + 1, k, dp);
            return dp[i][k] = max(c1, c2);
        } else { // sell (k = 3, 1)
            int c1 = fun(a, n, i + 1, k - 1, dp) + a[i];
            int c2 = fun(a, n, i + 1, k, dp);
            return dp[i][k] = max(c1, c2);
        }
    }

    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        k = k*2;
        vector<vector<int>> dp(n, vector<int>(k + 1, -1));
        return fun(prices, n, 0, k, dp);
    }
};