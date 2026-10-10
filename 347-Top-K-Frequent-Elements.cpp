class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // first store the freq snd value in the map
        unordered_map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }
        // then push the map in the pq
        priority_queue<pair<int, int>> pq;

        for (auto p : mp) {
            pq.push({p.second, p.first});
        }
        //store our ans in vector
        vector<int> ans;
        while (k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};