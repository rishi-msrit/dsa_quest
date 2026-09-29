class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int total = 0;
        for (int num : nums) {
            total |= num;  //   bitwise OR
        }
        return total * (1 << (nums.size() - 1));  //  Multiply by 2^(n-1)
    }
};