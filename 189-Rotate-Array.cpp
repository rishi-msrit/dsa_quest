class Solution {
public:
    void helper(vector<int>& nums, int n, int m){
        while (n < m){
            swap(nums[n++], nums[m--]);
        }  
    }
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        helper(nums,0,nums.size()-1);
        helper(nums,0,k-1);
        helper(nums,k,nums.size()-1);

        
    }
};
