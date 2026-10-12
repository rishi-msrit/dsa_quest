class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();

        vector<int>result;
        vector<int>ans(n,0);
    for(int num:nums){
        ans[num]++;
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i]>1)
            result.push_back(i);
        
    }
    return result;
    }
};