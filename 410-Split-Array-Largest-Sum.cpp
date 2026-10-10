
class Solution {
private:
    bool check(vector<int>& nums, int k, long long limit) {
        int cnt = 1;
        long long sum = 0;

        for (int x : nums) {
            if (sum + x > limit) {
                cnt++;
                sum = x;
            } else {
                sum += x;
            }
        }
        return cnt <= k;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        if (k > nums.size()) return -1;

        long long low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 0LL);

        while (low < high) {
            long long mid = low + (high - low) / 2;

            if (check(nums, k, mid))
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};