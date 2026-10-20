class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;

        function<void(int)> solve = [&](int i){
            // Base case
            if (i == nums.size()) {
                ans.push_back(curr);
                return;
            }
            solve(i + 1);  // Exclude
            curr.push_back(nums[i]);  // Include
            solve(i + 1);
            curr.pop_back();  // Backtrack
        };
        solve(0);

        return ans;
    }
};