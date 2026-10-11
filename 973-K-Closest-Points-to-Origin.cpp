//Heap soln 
// class Solution {
// public:
//     vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
//         priority_queue<pair<long long, int>> pq;

//         for (int i = 0; i < points.size(); i++) {
//             long long dist = 1LL * points[i][0] * points[i][0]
//                            + 1LL * points[i][1] * points[i][1];

//             pq.push({dist, i});

//             if (pq.size() > k)
//                 pq.pop();
//         }
//         vector<vector<int>> ans;

//         while (!pq.empty()) {
//             ans.push_back(points[pq.top().second]);
//             pq.pop();
//         }
//         return ans;
//     }
// };


//Quicksort soln
//Quickselect

// class Solution {
// private:
//     int dist(vector<int>& p) {
//         return p[0] * p[0] + p[1] * p[1];
//     }
//     int partition(vector<vector<int>>& points, int left, int right) {
//         int pivot = dist(points[right]);
//         int i = left;

//         for (int j = left; j < right; j++) {
//             if (dist(points[j]) <= pivot) {
//                 swap(points[i], points[j]);
//                 i++;
//             }
//         }
//         swap(points[i], points[right]);
//         return i;
//     }

// public:
//     vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
//         int left = 0, right = points.size() - 1;

//         while (left <= right) {
//             int p = partition(points, left, right);

//             if (p == k - 1)
//                 break;
//             else if (p < k - 1)
//                 left = p + 1;
//             else
//                 right = p - 1;
//         }
//         points.resize(k);
//         return points;
//     }
// };


//Sort
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(),points.end(),[](const vector<int>&a,const vector<int>&b){
        long long d1=a[0]*a[0]+a[1]*a[1];
        long long d2=b[0]*b[0]+b[1]*b[1];
        return d1<d2;
    });
    vector<vector<int>>ans(points.begin(),points.begin()+k);
    return ans;
    }
};
