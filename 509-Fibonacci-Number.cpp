class Solution {
public:
    vector<int> v;
    int solve(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        if (v[n] != -1) 
            return v[n];

        v[n] = solve(n - 1) + solve(n - 2);
        return v[n];
    }
    int fib(int n) {
        v.resize(n + 1, -1);
        return solve(n);
    }
};