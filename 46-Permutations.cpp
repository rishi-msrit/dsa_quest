class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        vector<int> temp(n);
        vector<bool> visited(n, false);
      
        auto generatePermutations = [&](this auto&& generatePermutations, int position) -> void {

            if (position == n) {
                result.push_back(temp);
                return;
            }
          
            // Try placing each unused number at the current position
            for (int i = 0; i < n; ++i) {
                if (!visited[i]) {
                    // Mark element as used
                    visited[i] = true;
                    // Place element at current position
                    temp[position] = nums[i];
                    // Recursively fill next position
                    generatePermutations(position + 1);
                    // Backtrack: mark element as unused for next iteration
                    visited[i] = false;
                }
            }
        };
      
        generatePermutations(0);
        return result;
    }
};
