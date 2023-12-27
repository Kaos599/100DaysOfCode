class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
     
        int sum = 0;
     
        helper(root, false, sum);
    
        return sum;
    }
    
    void helper(TreeNode* node, bool isLeft, int& sum) {
      
        if (node == NULL) return;
      
        if (node->left == NULL && node->right == NULL && isLeft) {
            sum += node->val;
        }
    
        helper(node->left, true, sum);
        helper(node->right, false, sum); 
    }
};
