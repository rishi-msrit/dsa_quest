/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int ans = 0;
public:
    int kthSmallest(TreeNode* root, int k) {
        func(root, k);
        return ans;
        
    }
    void func(TreeNode* node,int& k){
        if (k == 0){return;}
        if(node==NULL){
            return;
        }
        func(node->left, k);
        if(k == 1){
            ans = node->val;}
        k--;
        func(node->right, k);
    }
};