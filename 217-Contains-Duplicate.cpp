class Solution {
public:
bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> st;
//         for (int num : nums) {
//             if (st.find(num) != st.end())
//                 return true;

//             st.insert(num);
//         }
//         return false;
//     }
// };
        if(nums.size() <= 1) return false;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};