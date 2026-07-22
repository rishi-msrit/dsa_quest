class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int L = 0; 
        int M = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                L++;
            } else {
                M = max(M, L);
                L = 0;
            }
        }
        M = max(M, L);

        return M;
    }
};