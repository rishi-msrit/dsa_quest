class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int ans = -1;
        int finans = 0;

        while(left < right){
            int mid = (left + ((right-left)/2));
            if(ans < nums[mid]){
                ans = nums[mid];
                finans = mid; 
            }
            if(nums[mid] > nums[mid + 1]){
                right = mid;
            } 
            if(nums[mid] < nums[mid + 1]){
                left = mid + 1;
                ans = nums[mid+1];
                finans = mid+1; 
            }
        }
        return finans;        
    }
};