class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if (root == nullptr) {
            return false;
        }

        
        targetSum -= root->val;

        
        if (!root->left && !root->right) {
            return targetSum == 0;
        }

        
        bool leftResult = hasPathSum(root->left, targetSum);
        bool rightResult = hasPathSum(root->right, targetSum);

        
        return leftResult || rightResult;
    }
};
