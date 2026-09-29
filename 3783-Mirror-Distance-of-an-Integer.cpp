class Solution {
public:
    int mirrorDistance(int n) {
        int t = n;
        int m;
        while( n > 0 ){
            m=10*m+n%10;

            n /= 10;
        }
        return abs(t - m) ;
        
    }
};