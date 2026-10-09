class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size()-1;
        int ans = -1;
        int finans = -1;

        while(left < right){
            int mid = (left + ((right-left)/2));
            if(ans < arr[mid]){
                ans = arr[mid];
                finans = mid;
            }
            if(arr[mid] > arr[mid + 1]){
                right = mid;
            } 
            if(arr[mid] < arr[mid + 1]){
                left = mid + 1;
            }
        }
        return finans;        
    }
};