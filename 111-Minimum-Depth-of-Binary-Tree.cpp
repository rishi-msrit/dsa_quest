class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        queue<TreeNode*> qu;

        qu.push(root);
        int curr = 1;

        while (!qu.empty()) {
            int n = qu.size();
            while (n--) {
                TreeNode* front = qu.front();
                qu.pop();

                if (!front->left && !front->right) {
                    return curr;
                }

                if (front->left) {
                    qu.push(front->left);
                }
                if (front->right) {
                    qu.push(front->right);
                }
            }
            curr++;
        }

        return curr;
    }
};