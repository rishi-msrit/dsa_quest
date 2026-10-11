//Heap soln

// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         priority_queue<pair<int, int>> pq;
//         for(int num : arr) {
//             int distance = abs(num - x);
//             if(pq.size() < k) {
//                 pq.push({distance, num});
//             }
//             else {
//                 pq.push({distance, num});
//                 pq.pop();
//             }
//         }
//         vector<int> result;
//         while(!pq.empty()) {
//             result.push_back(pq.top().second);
//             pq.pop();
//         }
//         sort(result.begin(), result.end());
//         return result;
//     }
// };

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int l = 0;
        int r = n-k;
        while(l<r){
            int mid = l+(r-l)/2;
            if(x-arr[mid] <= arr[mid+k]-x){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        return vector<int>(arr.begin()+l,arr.begin()+l+k);
    }
};