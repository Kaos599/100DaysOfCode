
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return checkBalanced(root) != -1;
    }

    int checkBalanced(TreeNode* node) {
        if (node == nullptr) {
            return 0; 
        }

      
        int leftHeight = checkBalanced(node->left);
        if (leftHeight == -1) {
            return -1;  
        }

      
        int rightHeight = checkBalanced(node->right);
        if (rightHeight == -1) {
            return -1;  
        }

      
        if (abs(leftHeight - rightHeight) > 1) {
            return -1;  
        }    
        return 1 + max(leftHeight, rightHeight);
    }
};
