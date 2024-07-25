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
int mini=INT_MAX;
int prev=-1;
void call(TreeNode* root){
    if(root==NULL)return ;
  
  
    call(root->left);
     if(prev!=-1){
    mini=min(mini,abs(prev-root->val));
   }
    prev=root->val;
    call(root->right);
    

}
    int getMinimumDifference(TreeNode* root) {
        if(root==NULL)return 0;
        call(root);
        return mini;
    }
};