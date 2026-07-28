class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hmp;
        for(char c : s){
            hmp[c]++;
        }
        for(char c : t){
            hmp[c]--;
        }
        for(auto x : hmp)
        {
            if (x.second!= 0){
                return false;
        }
        }
        return true;
        
    }
};