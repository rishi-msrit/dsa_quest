class Solution {
public:
    int solve(vector<int>& nums, int i, vector<vector<int>>& dp, int prev) {
        if (i == nums.size()) return 0;

        if (dp[i][prev] != -1)
            return dp[i][prev];

        int take = 0;
        int skip = solve(nums, i + 1, dp, 0);

        if (prev == 0)
            take = nums[i] + solve(nums, i + 1, dp, 1);

        return dp[i][prev] = max(take, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));

        return solve(nums, 0, dp, 0);
    }
};