class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0); //returs total sum
      
        if (totalSum % 2 == 1) {
            return false;
        }
      
        int n = nums.size();
        int targetSum = totalSum / 2;
      
        // dp[i][j] represents whether we can achieve sum j using first i elements
        bool dp[n + 1][targetSum + 1];
        memset(dp, false, sizeof(dp));
      
        dp[0][0] = true;
      
        for (int i = 1; i <= n; ++i) {
            int currentNum = nums[i - 1];
            for (int j = 0; j <= targetSum; ++j) {
                dp[i][j] = dp[i - 1][j] || (j >= currentNum && dp[i - 1][j - currentNum]);
            }
        }
        return dp[n][targetSum];
    }
};
