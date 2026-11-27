class Solution {
public:
    int smallestNumber(int n, int t) {
        int b = n;

        while (true) {
            int a = n;
            int product = 1;

            while (a > 0) {
                int digit = a % 10;
                product = product * digit;
                a = a / 10;
            }

            if (product % t == 0) {
                break;
            }
            else {
                n++;
                b++;
            }
        }

        return b;
    }
};