class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int start = nums[0];
        int end =nums[nums.size() - 1];
        int i = 0;
        while(start < end){
            if(nums[i] != start){
                ans.push_back(start);
            }
            else if(nums[i] == start){
                i++;
            }
            start++;
        }

        return ans;        
    }
};