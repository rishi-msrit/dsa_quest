class Solution {
public:
    int max_diameter = 0;

    int calculateDepth(TreeNode* root) {
        if (!root) return 0;
        
        int left_depth = calculateDepth(root->left);
        int right_depth = calculateDepth(root->right);
        max_diameter = max(max_diameter, left_depth + right_depth);

        return 1 + max(left_depth, right_depth);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        calculateDepth(root);
        return max_diameter;
    }
};


