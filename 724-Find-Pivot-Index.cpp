class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prefix = 0;
        int sufix = 0;

        for(int i = 1; i < nums.size(); i++){
            sufix += nums[i];
        }
        if(prefix == sufix){ return 0;}

        for(int i = 1; i < nums.size(); i++){
            prefix += nums[i-1];
            sufix -= nums[i];            
            if(prefix == sufix){ return i;}

        }
        return -1;        
    }
};