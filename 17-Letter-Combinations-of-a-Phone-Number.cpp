class Solution {
public:
    vector<string> phone = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void solve(string& digits, int index, string& current, vector<string>& ans) {
        if (index == digits.size()) {
            ans.push_back(current);
            return;
        }

        string letters = phone[digits[index] - '0'];
        for (char ch : letters) {
            current.push_back(ch);
            solve(digits, index + 1, current, ans);
            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        // if (digits.empty())
        //     return ans;
        string current;
        solve(digits, 0, current, ans);

        return ans;
    }
};