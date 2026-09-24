class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> sc;

        for (char c : s) {
            if (c == '#') {
                if (!st.empty())
                    st.pop();
            } else {
                st.push(c);
            }
        }
        for (char d : t) {
            if (d == '#') {
                if (!sc.empty())
                    sc.pop();
            } else {
                sc.push(d);
            }
        }
        if (st == sc) {
            return true;
        } else {
            return false;
        }
    }
};