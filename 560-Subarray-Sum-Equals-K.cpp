class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp{{0, 1}};
        int ans = 0;
        int Prefix = 0;

        for (int num : nums) {
            Prefix += num;
            ans += mp[Prefix - k];
            ++mp[Prefix];
        }
        return ans;
    }
};
