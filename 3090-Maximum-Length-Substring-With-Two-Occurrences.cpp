class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int i = 0;
        int res = 0;

        vector<char> freq(26, 0);
        for(int j = 0; j < n; j++){
            freq[s[j] - 'a']++;

            while(freq[s[j] - 'a'] > 2 ){
                freq[s[i] - 'a']--;
                i++;
            }
            res = max(res, j-i+1);
        }
        return res;
        
    }
};