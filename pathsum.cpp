/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
bool call(TreeNode* root,int target,int sum){
    if(root==NULL)return false;
    sum+=root->val;
    if(root->left==NULL && root->right==NULL){
        if(sum==target){
            return true;
        }
        return false;
    }
    bool x=call(root->left,target,sum);
    bool y=call(root->right,target,sum);
    return x|| y;
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return false;
        int sum=0;
        return call(root,targetSum,0);
    }
};