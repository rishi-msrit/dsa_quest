class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        long long maxi = LLONG_MIN; // maximum sum
        long long sum = 0;          // current sum of subarray
        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i]; // Add current element to the sum
            // Update maxi if current sum is greater
            if (sum > maxi) {
                maxi = sum;
            }

            // Reset sum to 0 if it becomes negative
            if (sum < 0) {
                sum = 0;
            }
        }

        return maxi; // Return the maximum subarray sum found
    }
};