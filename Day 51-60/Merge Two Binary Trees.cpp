#include <iostream>
using namespace std;


class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr) {
            return root2;
        }
        if (root2 == nullptr) {
            return root1;
        }


        TreeNode* mergedNode = new TreeNode(root1->val + root2->val);


        mergedNode->left = mergeTrees(root1->left, root2->left);
        mergedNode->right = mergeTrees(root1->right, root2->right);

        return mergedNode;
    }
};


void inorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}
