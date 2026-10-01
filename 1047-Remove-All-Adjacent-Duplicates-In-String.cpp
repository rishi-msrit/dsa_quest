class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string v;

        for (int i = 0; i < s.size(); i++) {
            if (!st.empty() && s[i] == st.top()) {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        while (!st.empty()) {
            v.push_back(st.top());
            st.pop();
        }

        reverse(v.begin(), v.end());

        return v;
    }
};