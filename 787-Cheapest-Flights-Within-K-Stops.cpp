
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

        vector<vector<pair<int,int>>> adj(n);

        for (int i = 0; i < flights.size(); i++) {
            int u = flights[i][0];
            int v = flights[i][1];
            int w = flights[i][2];

            adj[u].push_back({v, w});
        }

        queue<vector<int>> q;
        vector<int> dist(n, INT_MAX);

        dist[src] = 0;
        q.push({src, 0, 0});

        while (!q.empty()) {
            vector<int> cur = q.front();
            q.pop();

            int node = cur[0];
            int cost = cur[1];
            int stops = cur[2];

            if (stops > k) continue;

            for (int i = 0; i < adj[node].size(); i++) {
                int next = adj[node][i].first;
                int price = adj[node][i].second;

                if (cost + price < dist[next] && stops <= k) {
                    dist[next] = cost + price;
                    q.push({next, dist[next], stops + 1});
                }
            }
        }

        if (dist[dst] == INT_MAX)
            return -1;

        return dist[dst];
    }
};
