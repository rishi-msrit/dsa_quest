class Solution {
private:
    bool isflippedTree(TreeNode* s, TreeNode* t) {
        if (!s && !t)
            return true;
        if (!s || !t)
            return false;
            
        if (s->val == t->val) {
            return (isflippedTree(s->left, t->left) &&
                    isflippedTree(s->right, t->right)) ||
                   (isflippedTree(s->left, t->right) &&
                    isflippedTree(s->right, t->left));
        }
        return false;
    }

public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        return isflippedTree(root1, root2);
    }
};