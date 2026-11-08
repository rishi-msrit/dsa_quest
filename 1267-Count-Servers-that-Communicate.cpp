class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> row(m), col(n);

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j])
                    row[i]++, col[j]++;

        int ans = 0;

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] && (row[i] > 1 || col[j] > 1)) // if more than 1 server is there in that row or coln, then we are sure that grid[i][j] server can comm, hense we increment our ans by 1
                    ans++;

        return ans;
    }
};