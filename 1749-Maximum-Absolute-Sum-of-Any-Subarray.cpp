class Solution {
public:
    int kad(vector<int>& nums){
        int sum=0, mx=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(sum<0) sum=0;
            mx=max(sum,mx);
        }
        return mx;
    }

    int rev_kad(vector<int>& nums){
        int sum=0, mx=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(sum>0) sum=0;
            mx=min(sum,mx);
        }
        return mx;
    }

    int maxAbsoluteSum(vector<int>& nums) {
        return max(kad(nums),abs(rev_kad(nums)));
    }
};