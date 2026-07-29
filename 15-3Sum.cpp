class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue; // yaha pe we are skipping a duplicate taaki we align with the qn rules

            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum > 0) {
                    right--; // becoz so we could get a smaller val
                } else if (sum < 0) {
                    left++; //so we could get a larger val
                } else {
                    res.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--; //means sum==0, yani we push the val to the result
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }//this loop is imp as for skipping duplicates after already found a valid triplet 
                }
            }
        }
        return res;
    }
};