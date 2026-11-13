//dp using 1d vector reduced memory by just using 1 rows(curr)
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> cur(n, 1);
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                cur[j] += cur[j - 1];
            }
        }
        return cur[n - 1];
    }
 };


// dp using 1d vector, reduced memory by just using 2 rows(curr and pre)
// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         vector<int> pre(n, 1), cur(n, 1);
//         for (int i = 1; i < m; i++) {
//             for (int j = 1; j < n; j++) {
//                 cur[j] = pre[j] + cur[j - 1];
//             }
//             swap(pre, cur);
//         }
//         return pre[n - 1];
//     }
// };

// dp using 2d vector O(m * n) time and costs O(m * n)
// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m, vector<int>(n, 1));
//         for (int i = 1; i < m; i++) {
//             for (int j = 1; j < n; j++) {
//                 dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//             }
//         }
//         return dp[m - 1][n - 1];
//     }
// };