// class Solution {
// public:
//     vector<string> topKFrequent(vector<string>& words, int k) {
//         // first store the freq snd word in the map
//         unordered_map<string, int> mp;
//         for (string x : words) {
//             mp[x]++;
//         }
//         // this is to handle this lexi shitt
//         auto cmp = [](pair<int, string>& a, pair<int, string>& b) {
//             if (a.first == b.first)
//                 return a.second > b.second;
//             return a.first < b.first;
//         };
//         // then push the map in the pq
//         priority_queue<pair<int, string>,vector<pair<int, string>>,decltype(cmp)> pq(cmp);
//         for (auto p : mp) {pq.push({p.second, p.first});}
//         //store our ans in vector
//         vector<string> ans;
//         while (k--) {
//             ans.push_back(pq.top().second);
//             pq.pop();
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(string word:words){
            mp[word]++;
        }
        vector<pair<string,int>> v;
        for(auto &it : mp) {v.push_back({it.first, it.second});}

        // Sort
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            if(a.second != b.second) {
                return a.second > b.second;   // higher frequency first
            }
            return a.first < b.first;         // alphabetical order
        });
           vector<string> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }
        return ans;
    }
};