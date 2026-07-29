class Solution {
public:
    int helper(vector<int>& nums, int left, int right, int target) {
        if (left > right)
            return -1;

        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;
        else if (target < nums[mid])
            return helper(nums, left, mid - 1, target);
        else
            return helper(nums, mid + 1, right, target);
    }

    int search(vector<int>& nums, int target) {
        return helper(nums, 0, nums.size() - 1, target);
    }
};