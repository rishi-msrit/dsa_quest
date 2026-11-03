class Solution {
public:
    int minMoves(vector<int>& nums) {
        int res = 0;
        int maxVal = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > maxVal) {
                maxVal = nums[i];
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            res += maxVal - nums[i];
        }
        return res;
    }
};