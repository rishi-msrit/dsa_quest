class Solution {
public:
    void solve(vector<int>& nums, int i, vector<int>& curr,
               vector<vector<int>>& ans) {
        if (i == nums.size()) {
            ans.push_back(curr);
            return;
        }

        // Include nums[i]
        curr.push_back(nums[i]);
        solve(nums, i + 1, curr, ans);
        curr.pop_back();

        // Exclude nums[i]
        int next = i + 1;
        while (next < nums.size() && nums[next] == nums[i]) {
            next++;
        }
        solve(nums, next, curr, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> curr;

        solve(nums, 0, curr, ans);
        return ans;
    }
};