class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if (root == NULL)
            return true;

        queue<TreeNode*> q;
        q.push(root);
        int j = 0;

        while (!q.empty()) {
            int s = q.size();

            for (int i = 0; i < s; i++) {
                TreeNode* rish = q.front();
                q.pop();

                if (rish == NULL) {
                    j = -1;
                    continue;
                }

                if (j == -1)
                    return false;

                q.push(rish->left);
                q.push(rish->right);
            }
        }

        return true;
    }
};