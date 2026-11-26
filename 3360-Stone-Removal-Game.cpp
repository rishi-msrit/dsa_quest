class Solution {
public:
    bool canAliceWin(int n) {
        if (n < 10)
            return false;
        int a = 1;
        int r = 10;
        while(n > -1 && r > 0){
            n = n - r;
            r--;
            if (n > -1){
                a++;
            }
        }
        if(a % 2 == 0) {
            return true;
        }
        else return false;
        
    }
};