class Solution {
public:
    long long removeZeros(long long n) {
        long long ans = 0;
        long long tens = 1;

        while (n > 0) {
            int b = n % 10;
            if (b != 0) {
                ans = b * tens + ans;
                tens *= 10;
            }
            n /= 10;
        }
        return ans;
    }
};