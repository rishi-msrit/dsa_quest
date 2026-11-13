class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }

        return profit;
    }
};

// DP:
//class Solution {
// public:
//     int fun(vector<int>& a, int n, int i, int k, vector<vector<int>>& dp) {
//         if (i == n || k == 0)
//             return 0;
//         if (dp[i][k] != -1)
//             return dp[i][k];

//         if (k == 2) { // buy
//             int c1 = fun(a, n, i + 1, k - 1, dp) - a[i];
//             int c2 = fun(a, n, i + 1, k, dp);
//             return dp[i][k] = max(c1, c2);
//         } else { // sell
//             int c1 = fun(a, n, i + 1, 2, dp) + a[i]; //instead of k-1(which will make k 0) like Qn 121, we pass K=2 so that it loops back again and we can perform infinite transactions
//             int c2 = fun(a, n, i + 1, k, dp);
//             return dp[i][k] = max(c1, c2);
//         }
//     }

//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<int>> dp(n, vector<int>(3, -1));
//         return fun(prices, n, 0, 2, dp);
//     }
// };