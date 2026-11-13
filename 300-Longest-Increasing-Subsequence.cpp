class Solution {
public:
    int lowerbound(vector<int> temp, int target) {
        int s = 0;
        int e = temp.size() - 1;
        int ans = temp.size();

        while (s <= e) {
            int mid = (s + e) / 2;

            if (temp[mid] >= target) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted;

        for (int i = 0; i < n; i++) {
            int ind = lowerbound(sorted, nums[i]);

            if (ind == sorted.size()) {
                sorted.push_back(nums[i]);
            } else {
                sorted[ind] = nums[i];
            }
        }
        return sorted.size();
    }
};