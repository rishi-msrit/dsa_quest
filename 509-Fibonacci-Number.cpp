class Solution {
public:
    vector<int> dp; //making a vector so we can store already calculated fibo vales
    int solve(int n) {

        if (n == 0) return 0;
        if (n == 1) return 1;

        if (dp[n] != -1) // checkes if the value for which we wanna calc fibo is filled or empty/null/-1
            return dp[n];

        dp[n] = solve(n - 1) + solve(n - 2);
        return dp[n];
    }

    int fib(int n) {
        dp.resize(n + 1, -1);//as if n=5, fibo stats from 0 till 5,therefore n+1 elements
        return solve(n);
    }
};