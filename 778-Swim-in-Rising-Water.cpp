class Solution {
public:
    using pl = pair<int, int>;
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        priority_queue<pl, vector<pl>, greater<pl>> pq;

        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, -1, 0, 1};

        pq.push({grid[0][0], 0});
        grid[0][0] = -1; // Mark as visited in-place
        
        int mx_time = 0;

        while(!pq.empty()) {
            auto [t, idx] = pq.top();
            pq.pop();

            // Decode the 1D index back into 2D coordinates
            int x = idx / n;
            int y = idx % n;
            // Track the maximum water level/elevation encountered on this path
            mx_time = max(mx_time, t);

            // If we reached the bottom-right corner, we are done
            if(x == n - 1 && y == n - 1) return mx_time;
            for(int k = 0; k < 4; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];
                
                if(nx < 0 || ny < 0 || nx >= n || ny >= n || grid[nx][ny] == -1) continue;
                pq.push({grid[nx][ny], nx * n + ny});
                grid[nx][ny] = -1; 
            }
        }
        return mx_time;
    }
};