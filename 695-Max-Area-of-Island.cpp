class Solution {

private:
    int dfs(vector<vector<int>> &grid, int r, int c) {
        if (r >= grid.size() || c >= grid[0].size() || c < 0 || r < 0 || grid[r][c] == 0) return 0;
        int area = 1;
        grid[r][c] = 0;
        area += dfs(grid, r-1, c);
        area += dfs(grid, r+1, c);
        area += dfs(grid, r, c+1);
        area += dfs(grid, r, c-1);
        return area;
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxArea = 0;

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (grid[r][c] == 1) {
                    maxArea = max(maxArea, dfs(grid, r, c));;
                }
            }
        }
        return maxArea;
    }
};