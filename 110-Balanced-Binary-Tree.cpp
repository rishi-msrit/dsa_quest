class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
    int height(TreeNode* root) {
        if (!root) return 0;

        //  Check left subtree
        int left = height(root->left);
        if (left == -1) return -1; 

        // Check right subtree
        int right = height(root->right);
        if (right == -1) return -1;

        // Check current node balance
        if (abs(left - right) > 1) return -1; 

        // Everything is balanced, return actual height
        return 1 + max(left, right);
    }
};