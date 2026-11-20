class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length();
        int n = needle.length();
        int j = 0;
        for(int i=0; i< h; i++){
            if(haystack[i]==needle[j]){
                j++;
            }
            else{
                i=i-j; // start from the next index of previous start index
                j=0; // needle should start from index 0
            }
            if(j==n){
                return i-n+1;
            }
        }
        return -1;
    }
};