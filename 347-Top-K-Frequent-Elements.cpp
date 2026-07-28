class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int num : nums)
            freq[num]++;

        vector<vector<int>> bucket(nums.size() + 1);

        for(auto x : freq)
        {
            int number = x.first;
            int frequency = x.second;

            bucket[frequency].push_back(number);
        }

        vector<int> ans;

        for (int i = nums.size(); i >= 1; i--)
        {
            for (int num : bucket[i])
            {
                ans.push_back(num);

                if (ans.size() == k)
                    return ans;
            }
        }

        return ans;
    }
};