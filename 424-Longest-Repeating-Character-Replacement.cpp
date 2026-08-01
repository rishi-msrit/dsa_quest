class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26] = {0};
        int left= 0, right, maxFreq =0;

        for(right = 0; right < s.size(); right++){
            freq[s[right] - 'A']++;
            maxFreq = max(maxFreq, freq[s[right]-'A']);
            
            if ((right - left + 1) - maxFreq > k) {
                freq[s[left] - 'A']--;
                left++;
        }
        }
        //return right - left + 1;
        return s.size() - left;        
    }
};