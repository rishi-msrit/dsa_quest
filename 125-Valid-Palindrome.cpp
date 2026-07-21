class Solution {
public:
    bool helper(int left, int right, string &s) {

        if (left >= right)
            return true;

        if (!isalnum(s[left]))
            return helper(left + 1, right, s);

        if (!isalnum(s[right]))
            return helper(left, right - 1, s);

        if (tolower(s[left]) != tolower(s[right]))
            return false;

        return helper(left + 1, right - 1, s);
    }

    bool isPalindrome(string s) {
        return helper(0, s.length() - 1, s);
    }
};