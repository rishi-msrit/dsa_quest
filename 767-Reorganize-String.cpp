class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();

        //Count frequency and find max frequency
        vector<int> chars(26, 0);
        int maxCount = 0;
        for (int i = 0; i < n; i++) {
            chars[s[i] - 'a']++;
            maxCount = max(maxCount, chars[s[i] - 'a']);
        }

        //Impossible if any character appears more than (n + 1) / 2 times
        if (maxCount > (n + 1) / 2) return "";

        // Max-heap ordered by frequency
        priority_queue<pair<int, char>> pq;
        for (int i = 0; i < 26; i++) {
            if (chars[i] > 0) {
                pq.push({chars[i], 'a' + i});
            }
        }

        // Greedily place the top 2 most frequent characters in pairs
        string ans = "";
        while (!pq.empty()) {
            int f1 = pq.top().first;
            char c1 = pq.top().second;
            pq.pop();

            ans += c1;

            // If there's another character available, pair it with c1
            int f2 = 0;
            char c2;
            if (!pq.empty()) {
                f2 = pq.top().first;
                c2 = pq.top().second;
                pq.pop();

                ans += c2;
                f2--;
                if (f2 > 0) pq.push({f2, c2});
            }

            f1--;
            if (f1 > 0) pq.push({f1, c1});
        }

        return ans;
    }
};