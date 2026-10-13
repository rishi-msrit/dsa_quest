class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for (int& num : nums) {
            num = abs(num);
        }
        sort(nums.begin(), nums.end(), greater<int>());
        int n = nums.size() - 1;
        long long ans = 0;
        int i = 0;
        if (n % 2 != 0) {
            while (i <= n / 2) {
                ans += (nums[i] * nums[i]) - (nums[n - i] * nums[n - i]);
                i++;
            }
        } else {
            while (i < (n / 2)) {
                ans += (nums[i] * nums[i]) - (nums[n - i] * nums[n - i]);
                i++;
            }
            ans += nums[n / 2] * nums[n / 2];
        }
        return ans;
    }
};