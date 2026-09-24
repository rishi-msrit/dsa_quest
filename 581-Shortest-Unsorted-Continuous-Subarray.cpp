class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;

        while(l < nums.size() - 1 && nums[l] <= nums[l + 1]) {l++;}
        if(l == nums.size() - 1){return 0;}
        while(r > 0 && nums[r] >= nums[r - 1]) {r--;}

        int mn = nums[l];
        int mx = nums[l];

        for(int i = l; i <= r; i++) {
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
        }

        while(l > 0 && nums[l - 1] > mn) {l--;}
        while(r < nums.size() - 1 && nums[r + 1] < mx) {r++;}
        return r - l + 1;
    }
};