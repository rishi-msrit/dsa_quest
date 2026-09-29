class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0, diff = 0;
        for(int i = 0; i < nums.size(); i++){
            diff = nums[i] % 3;
            if(diff != 0){count++;}
        }
        return count;
        
    }
};