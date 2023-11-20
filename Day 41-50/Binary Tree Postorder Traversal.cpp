#include <vector>
#include <stack>

using namespace std;


class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postorderRecursive(root, result);
       
        return result;
    }

private:
  
    void postorderRecursive(TreeNode* node, vector<int>& result) {
        if (node) {
            postorderRecursive(node->left, result);
            postorderRecursive(node->right, result);
            result.push_back(node->val);
        }
    }

 
    void postorderIterative(TreeNode* root, vector<int>& result) {
        stack<TreeNode*> nodes;
        TreeNode* lastVisited = nullptr;

        while (root || !nodes.empty()) {
            if (root) {
                nodes.push(root);
                root = root->left;
            } else {
                TreeNode* peekNode = nodes.top();
                if (peekNode->right && lastVisited != peekNode->right) {
                    
                    root = peekNode->right;
                } else {
                   
                    result.push_back(peekNode->val);
                    lastVisited = peekNode;
                    nodes.pop();
                }
            }
        }
    }
};
