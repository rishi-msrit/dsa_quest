/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        int count = 0;
        while (!q.empty()) {
            int s = q.size();
            vector<int> v;
            for (int i = 0; i < s; i++) {
                TreeNode* rish = q.front();
                q.pop();
                if (rish->left != NULL)
                    q.push(rish->left);
                if (rish->right != NULL)
                    q.push(rish->right);
                v.push_back(rish->val);
            }
            count++;
            if (count % 2 != 1) {
                reverse(v.begin(), v.end());
            }
            ans.push_back(v);
        }
        return ans;
    }
};