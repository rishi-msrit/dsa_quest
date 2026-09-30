class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> remainderCount{{0, 1}};

        int result = 0;
        int prefixSum = 0;

        for (int& num : nums) {
            prefixSum = ((prefixSum + num) % k + k) % k;
            result += remainderCount[prefixSum]++;
        }
        return result;
    }
};
