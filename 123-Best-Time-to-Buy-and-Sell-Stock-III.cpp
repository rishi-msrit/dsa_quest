
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (!prices.size())
            return 0;
        int buy1 = INT_MAX, profit1 = INT_MIN;
        int buy2 = INT_MAX, profit2 = INT_MIN;

        for (int i = 0; i < prices.size(); i++) {
            buy1 = min(buy1, prices[i]);
            profit1 = max(profit1, prices[i] - buy1);
            buy2 = min(buy2, prices[i] - profit1);
            profit2 = max(profit2, prices[i] - buy2);
        }
        return profit2;
    }
};

// class Solution {
// public:
//     int fun(vector<int>& a, int n, int i, int k, vector<vector<int>>& dp) {
//         if (i == n || k == 0)
//             return 0;

//         // 1. Check if already computed
//         if (dp[i][k] != -1)
//             return dp[i][k];

//         if (k % 2 == 0) { // buy (k = 4, 2)
//             int c1 = fun(a, n, i + 1, k - 1, dp) - a[i];
//             int c2 = fun(a, n, i + 1, k, dp);
//             return dp[i][k] = max(c1, c2);
//         } else { // sell (k = 3, 1)
//             int c1 = fun(a, n, i + 1, k - 1, dp) + a[i];
//             int c2 = fun(a, n, i + 1, k, dp);
//             return dp[i][k] = max(c1, c2);
//         }
//     }

//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         // 2. Size 5 to accommodate indices 0 through 4
//         vector<vector<int>> dp(n, vector<int>(5, -1));
//         return fun(prices, n, 0, 4, dp);
//     }
// };