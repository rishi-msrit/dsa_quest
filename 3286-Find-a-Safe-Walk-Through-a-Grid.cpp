
class Solution {
public:
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size();
        int n = grid[0].size();

        priority_queue<pair<int, pair<int, int>>> pq;
        vector<vector<int>> dist(m, vector<int>(n, INT_MIN));

        dist[0][0] = health - grid[0][0];
        pq.push({dist[0][0], {0, 0}});

        while (!pq.empty()) {
            int h = pq.top().first;
            int i = pq.top().second.first;
            int j = pq.top().second.second;
            pq.pop();

            if (h < dist[i][j])
                continue;

            for (int k = 0; k < 4; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];

                if (ni >= 0 && ni < m && nj >= 0 && nj < n) {
                    int nh = h - grid[ni][nj];

                    if (nh > dist[ni][nj]) {
                        dist[ni][nj] = nh;
                        pq.push({nh, {ni, nj}});
                    }
                }
            }
        }

        return dist[m - 1][n - 1] >= 1;
    }
};
