class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;}
        int originalNum = x;
        long long int revNum=0;
        while(x!=0){
            int lastd = x % 10;
            revNum = revNum *10 +lastd;
            x = x/10;
        }
        return originalNum == revNum;
    }
};