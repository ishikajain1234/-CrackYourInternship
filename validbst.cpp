class Solution {
public:
    bool call(TreeNode* root, long long minVal, long long maxVal) {
        if (root == NULL) return true;
        if (root->val <= minVal || root->val >= maxVal) return false;
        return call(root->left, minVal, root->val) && call(root->right, root->val, maxVal);
    }

    bool isValidBST(TreeNode* root) {
        return call(root, LLONG_MIN, LLONG_MAX);
    }
};
