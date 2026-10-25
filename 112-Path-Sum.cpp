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
    int tempsum = 0;
    bool helper(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false;
        }
        tempsum += root->val;
        if (root->left == nullptr && root->right == nullptr) {
            if (tempsum == targetSum) {
                return true;
            }
        }
        bool left = helper(root->left, targetSum);
        if (left)
            return true;
        bool right = helper(root->right, targetSum);
        if (right)
            return true;
        tempsum -= (root->val);
        return false;
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root, targetSum);
    }
};

// class Solution {
// public:
//     bool hasPathSum(TreeNode* root, int targetSum) {
//         if (root == nullptr)
//             return false;

//         targetSum -= root->val;

//         if (root->left == nullptr && root->right == nullptr)
//             return targetSum == 0;

//         return hasPathSum(root->left, targetSum) ||
//                hasPathSum(root->right, targetSum);
//     }
// };