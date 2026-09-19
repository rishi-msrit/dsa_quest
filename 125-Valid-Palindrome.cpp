class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while (l < r) {
            while (l < r && !isalnum(s[l])) l++;
            while (l < r && !isalnum(s[r])) r--;

            if (tolower(s[l]) != tolower(s[r]))
                return false;

            l++;
            r--;
        }

        return true;
    }
};

// class Solution {
// public:
//     bool helper(int left, int right, string &s) {

//         if (left >= right)
//             return true;

//         if (!isalnum(s[left]))
//             return helper(left + 1, right, s);

//         if (!isalnum(s[right]))
//             return helper(left, right - 1, s);

//         if (tolower(s[left]) != tolower(s[right]))
//             return false;

//         return helper(left + 1, right - 1, s);
//     }

//     bool isPalindrome(string s) {
//         return helper(0, s.length() - 1, s);
//     }
// };


