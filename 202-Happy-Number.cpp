class Solution {
public:
    bool isHappy(int n) {
        int slow = fun(n);
        int fast = fun(fun(n));

        while (slow != fast) {
            if (fast == 1) return true;
            slow = fun(slow);
            fast = fun(fun(fast));
        }

        return slow == 1;
    }
private:
    int fun(int n) {
        int output = 0;
        
        while (n > 0) {
            int digit = n % 10;
            output += digit * digit;
            n = n / 10;
        }
        
        return output;
    }
};