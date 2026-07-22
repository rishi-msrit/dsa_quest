class Solution {
public:
    void helper(vector<int>& nums, int n, int m){
        int left = n;
        int right = m;
        while (left < right){
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
        
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        helper(nums,0,nums.size()-1);
        helper(nums,0,k-1);
        helper(nums,k,nums.size()-1);

        
    }
};