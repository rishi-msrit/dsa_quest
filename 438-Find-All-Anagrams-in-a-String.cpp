class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = p.size();
        if (n > s.size()) return ans;

        int freq[26] = {};
        int count = n;

        for (char c : p) {
            freq[c - 'a']++;
        }

        for (int i = 0; i < n; i++) {
            if (freq[s[i] - 'a'] > 0)
                count--;

            freq[s[i] - 'a']--;
        }

        if (count == 0)
            ans.push_back(0);

        for (int right = n; right < s.size(); right++) {

            // Add new character
            if (freq[s[right] - 'a'] > 0)
                count--;

            freq[s[right] - 'a']--;

            // Remove left character
            int left = right - n;

            if (freq[s[left] - 'a'] >= 0)
                count++;

            freq[s[left] - 'a']++;

            // Current window is an anagram
            if (count == 0)
                ans.push_back(left + 1);
        }

        return ans;
    }
};