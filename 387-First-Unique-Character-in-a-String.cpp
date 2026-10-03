class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        for(auto i : s){
            mp[i]++;
        }
        int z = 0;
        for(int i = 0 ; i < s.size(); i++){
            if(mp[s[i]] == 1){return z;}
            else{z++;}
        }
        return -1;
        
    }
};