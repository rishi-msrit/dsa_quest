class Solution {
private:
    void generateSubsets(vector<int>& nums, int index,vector<int>& currentSubset,
                         vector<vector<int>>& result) {

        if (index == nums.size()) {
            result.push_back(currentSubset);
            return;
        }
        // Choice 1: Exclude the current element
        generateSubsets(nums, index + 1, currentSubset, result);
        // Choice 2: Include the current element
        currentSubset.push_back(nums[index]);
        generateSubsets(nums, index + 1, currentSubset, result);
        // Backtrack
        currentSubset.pop_back();
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> currentSubset;

        generateSubsets(nums, 0, currentSubset, result);

        return result;
    }
};