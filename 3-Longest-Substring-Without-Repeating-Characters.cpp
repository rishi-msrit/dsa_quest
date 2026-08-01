class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //unordered_map<char, int> mp; as unordered map is slow
        int mp[128] = {0};
        int left=0, len = 0, maxlen = 0;
        for(int right = 0;right < s.size(); right++){
            
            ++mp[s[right]];
            
            while(mp[s[right]] > 1){
                --mp[s[left]];
                ++left;
            }
            len = right - left + 1;
            maxlen = max(maxlen,len);
            
        }
        return maxlen;
        
    }
};