class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty()) {
            return nullptr;
        }

        int mid = nums.size() / 2;
        TreeNode* root = new TreeNode(nums[mid]);

        vector<int> leftSubarray(nums.begin(), nums.begin() + mid);
        vector<int> rightSubarray(nums.begin() + mid + 1, nums.end());

        root->left = sortedArrayToBST(leftSubarray);
        root->right = sortedArrayToBST(rightSubarray);

        return root;
    }
};
