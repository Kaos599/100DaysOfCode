class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> nodes;

        while (root || !nodes.empty()) {
            while (root) {
                result.push_back(root->val);
                nodes.push(root);
                root = root->left;
            }

            root = nodes.top();
            nodes.pop();
            root = root->right;
        }

        return result;
    }
};
